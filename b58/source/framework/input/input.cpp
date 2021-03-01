#include <b58/include/framework/input/input.h>

namespace b58 {
	namespace Input {
		InputManager::InputManager() {
			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < cMaxKeys; j++) {
					keyStates[i][j] = false;
				}

				for (int j = 0; j < cMaxButtons; j++) {
					mouseButtonStates[i][j] = false;
				}
			}
			xDelta = 0;
			yDelta = 0;
		}

		bool InputManager::pressedOnceKey(e50_key_t key) {
			bool ret = keyStates[0][static_cast<uint32_t>(key)];

			if (!keyStates[1][static_cast<uint32_t>(key)] && keyStates[0][static_cast<uint32_t>(key)]) {
				keyStates[1][static_cast<uint32_t>(key)] = true;
			}
			else {
				ret = false;
			}
			return ret;
		}

		bool InputManager::pressedOnceMouseButton(uint32_t mb) {
			bool ret = mouseButtonStates[0][mb];

			if (!mouseButtonStates[1][mb] && mouseButtonStates[0][mb]) {
				mouseButtonStates[1][mb] = true;
			}
			else {
				ret = false;
			}
			return ret;
		}

		bool InputManager::pressedKey(e50_key_t key) {
			return keyStates[0][static_cast<uint32_t>(key)];
		}

		bool InputManager::pressedMouseButton(uint32_t mb) {
			return mouseButtonStates[0][mb];
		}
	}
}