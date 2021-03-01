#pragma once

#include <b58/include/core/defs.h>

namespace b58 {
	namespace Input {
		typedef enum class _e50_key_t {
			E50_KEY_UNKNOWN = 0,
			E50_KEY_FIRST = 0,
			E50_KEY_BACKSPACE = 8,
			E50_KEY_TAB = 9,
			E50_KEY_CLEAR = 12,
			E50_KEY_RETURN = 13,
			E50_KEY_PAUSE = 19,
			E50_KEY_ESCAPE = 27,
			E50_KEY_SPACE = 32,
			E50_KEY_EXCLAIM = 33,
			E50_KEY_QUOTEDBL = 34,
			E50_KEY_HASH = 35,
			E50_KEY_DOLLAR = 36,
			E50_KEY_AMPERSAND = 38,
			E50_KEY_QUOTE = 39,
			E50_KEY_LEFTPAREN = 40,
			E50_KEY_RIGHTPAREN = 41,
			E50_KEY_ASTERISK = 42,
			E50_KEY_PLUS = 43,
			E50_KEY_COMMA = 44,
			E50_KEY_MINUS = 45,
			E50_KEY_PERIOD = 46,
			E50_KEY_SLASH = 47,
			E50_KEY_0 = 48,
			E50_KEY_1 = 49,
			E50_KEY_2 = 50,
			E50_KEY_3 = 51,
			E50_KEY_4 = 52,
			E50_KEY_5 = 53,
			E50_KEY_6 = 54,
			E50_KEY_7 = 55,
			E50_KEY_8 = 56,
			E50_KEY_9 = 57,
			E50_KEY_COLON = 58,
			E50_KEY_SEMICOLON = 59,
			E50_KEY_LESS = 60,
			E50_KEY_EQUALS = 61,
			E50_KEY_GREATER = 62,
			E50_KEY_QUESTION = 63,
			E50_KEY_AT = 64,
			E50_KEY_LEFTBRACKET = 91,
			E50_KEY_BACKSLASH = 92,
			E50_KEY_RIGHTBRACKET = 93,
			E50_KEY_CARET = 94,
			E50_KEY_UNDERSCORE = 95,
			E50_KEY_BACKQUOTE = 96,
			E50_KEY_a = 97,
			E50_KEY_b = 98,
			E50_KEY_c = 99,
			E50_KEY_d = 100,
			E50_KEY_e = 101,
			E50_KEY_f = 102,
			E50_KEY_g = 103,
			E50_KEY_h = 104,
			E50_KEY_i = 105,
			E50_KEY_j = 106,
			E50_KEY_k = 107,
			E50_KEY_l = 108,
			E50_KEY_m = 109,
			E50_KEY_n = 110,
			E50_KEY_o = 111,
			E50_KEY_p = 112,
			E50_KEY_q = 113,
			E50_KEY_r = 114,
			E50_KEY_s = 115,
			E50_KEY_t = 116,
			E50_KEY_u = 117,
			E50_KEY_v = 118,
			E50_KEY_w = 119,
			E50_KEY_x = 120,
			E50_KEY_y = 121,
			E50_KEY_z = 122,
			E50_KEY_DELETE = 127,
			E50_KEY_WORLD_0 = 160,
			E50_KEY_WORLD_1 = 161,
			E50_KEY_WORLD_2 = 162,
			E50_KEY_WORLD_3 = 163,
			E50_KEY_WORLD_4 = 164,
			E50_KEY_WORLD_5 = 165,
			E50_KEY_WORLD_6 = 166,
			E50_KEY_WORLD_7 = 167,
			E50_KEY_WORLD_8 = 168,
			E50_KEY_WORLD_9 = 169,
			E50_KEY_WORLD_10 = 170,
			E50_KEY_WORLD_11 = 171,
			E50_KEY_WORLD_12 = 172,
			E50_KEY_WORLD_13 = 173,
			E50_KEY_WORLD_14 = 174,
			E50_KEY_WORLD_15 = 175,
			E50_KEY_WORLD_16 = 176,
			E50_KEY_WORLD_17 = 177,
			E50_KEY_WORLD_18 = 178,
			E50_KEY_WORLD_19 = 179,
			E50_KEY_WORLD_20 = 180,
			E50_KEY_WORLD_21 = 181,
			E50_KEY_WORLD_22 = 182,
			E50_KEY_WORLD_23 = 183,
			E50_KEY_WORLD_24 = 184,
			E50_KEY_WORLD_25 = 185,
			E50_KEY_WORLD_26 = 186,
			E50_KEY_WORLD_27 = 187,
			E50_KEY_WORLD_28 = 188,
			E50_KEY_WORLD_29 = 189,
			E50_KEY_WORLD_30 = 190,
			E50_KEY_WORLD_31 = 191,
			E50_KEY_WORLD_32 = 192,
			E50_KEY_WORLD_33 = 193,
			E50_KEY_WORLD_34 = 194,
			E50_KEY_WORLD_35 = 195,
			E50_KEY_WORLD_36 = 196,
			E50_KEY_WORLD_37 = 197,
			E50_KEY_WORLD_38 = 198,
			E50_KEY_WORLD_39 = 199,
			E50_KEY_WORLD_40 = 200,
			E50_KEY_WORLD_41 = 201,
			E50_KEY_WORLD_42 = 202,
			E50_KEY_WORLD_43 = 203,
			E50_KEY_WORLD_44 = 204,
			E50_KEY_WORLD_45 = 205,
			E50_KEY_WORLD_46 = 206,
			E50_KEY_WORLD_47 = 207,
			E50_KEY_WORLD_48 = 208,
			E50_KEY_WORLD_49 = 209,
			E50_KEY_WORLD_50 = 210,
			E50_KEY_WORLD_51 = 211,
			E50_KEY_WORLD_52 = 212,
			E50_KEY_WORLD_53 = 213,
			E50_KEY_WORLD_54 = 214,
			E50_KEY_WORLD_55 = 215,
			E50_KEY_WORLD_56 = 216,
			E50_KEY_WORLD_57 = 217,
			E50_KEY_WORLD_58 = 218,
			E50_KEY_WORLD_59 = 219,
			E50_KEY_WORLD_60 = 220,
			E50_KEY_WORLD_61 = 221,
			E50_KEY_WORLD_62 = 222,
			E50_KEY_WORLD_63 = 223,
			E50_KEY_WORLD_64 = 224,
			E50_KEY_WORLD_65 = 225,
			E50_KEY_WORLD_66 = 226,
			E50_KEY_WORLD_67 = 227,
			E50_KEY_WORLD_68 = 228,
			E50_KEY_WORLD_69 = 229,
			E50_KEY_WORLD_70 = 230,
			E50_KEY_WORLD_71 = 231,
			E50_KEY_WORLD_72 = 232,
			E50_KEY_WORLD_73 = 233,
			E50_KEY_WORLD_74 = 234,
			E50_KEY_WORLD_75 = 235,
			E50_KEY_WORLD_76 = 236,
			E50_KEY_WORLD_77 = 237,
			E50_KEY_WORLD_78 = 238,
			E50_KEY_WORLD_79 = 239,
			E50_KEY_WORLD_80 = 240,
			E50_KEY_WORLD_81 = 241,
			E50_KEY_WORLD_82 = 242,
			E50_KEY_WORLD_83 = 243,
			E50_KEY_WORLD_84 = 244,
			E50_KEY_WORLD_85 = 245,
			E50_KEY_WORLD_86 = 246,
			E50_KEY_WORLD_87 = 247,
			E50_KEY_WORLD_88 = 248,
			E50_KEY_WORLD_89 = 249,
			E50_KEY_WORLD_90 = 250,
			E50_KEY_WORLD_91 = 251,
			E50_KEY_WORLD_92 = 252,
			E50_KEY_WORLD_93 = 253,
			E50_KEY_WORLD_94 = 254,
			E50_KEY_WORLD_95 = 255,
			E50_KEY_KP0 = 256,
			E50_KEY_KP1 = 257,
			E50_KEY_KP2 = 258,
			E50_KEY_KP3 = 259,
			E50_KEY_KP4 = 260,
			E50_KEY_KP5 = 261,
			E50_KEY_KP6 = 262,
			E50_KEY_KP7 = 263,
			E50_KEY_KP8 = 264,
			E50_KEY_KP9 = 265,
			E50_KEY_KP_PERIOD = 266,
			E50_KEY_KP_DIVIDE = 267,
			E50_KEY_KP_MULTIPLY = 268,
			E50_KEY_KP_MINUS = 269,
			E50_KEY_KP_PLUS = 270,
			E50_KEY_KP_ENTER = 271,
			E50_KEY_KP_EQUALS = 272,

			E50_KEY_UP = 273,
			E50_KEY_DOWN = 274,
			E50_KEY_RIGHT = 275,
			E50_KEY_LEFT = 276,
			E50_KEY_INSERT = 277,
			E50_KEY_HOME = 278,
			E50_KEY_END = 279,
			E50_KEY_PAGEUP = 280,
			E50_KEY_PAGEDOWN = 281,

			E50_KEY_F1 = 282,
			E50_KEY_F2 = 283,
			E50_KEY_F3 = 284,
			E50_KEY_F4 = 285,
			E50_KEY_F5 = 286,
			E50_KEY_F6 = 287,
			E50_KEY_F7 = 288,
			E50_KEY_F8 = 289,
			E50_KEY_F9 = 290,
			E50_KEY_F10 = 291,
			E50_KEY_F11 = 292,
			E50_KEY_F12 = 293,
			E50_KEY_F13 = 294,
			E50_KEY_F14 = 295,
			E50_KEY_F15 = 296,

			E50_KEY_NUMLOCK = 300,
			E50_KEY_CAPSLOCK = 301,
			E50_KEY_SCROLLOCK = 302,
			E50_KEY_RSHIFT = 303,
			E50_KEY_LSHIFT = 304,
			E50_KEY_RCTRL = 305,
			E50_KEY_LCTRL = 306,
			E50_KEY_RALT = 307,
			E50_KEY_LALT = 308,
			E50_KEY_RMETA = 309,
			E50_KEY_LMETA = 310,
			E50_KEY_LSUPER = 311,
			E50_KEY_RSUPER = 312,
			E50_KEY_MODE = 313,
			E50_KEY_COMPOSE = 314,

			E50_KEY_HELP = 315,
			E50_KEY_PRINT = 316,
			E50_KEY_SYSREQ = 317,
			E50_KEY_BREAK = 318,
			E50_KEY_MENU = 319,
			E50_KEY_POWER = 320,
			E50_KEY_EURO = 321,
			E50_KEY_UNDO = 322,
			E50_KEY_LAST
		}e50_key_t;

		class B58_LIB_EXPORT InputManager {
		public:
			InputManager();
			bool	pressedOnceKey(e50_key_t key);
			bool	pressedOnceMouseButton(uint32_t mb);

			bool	pressedKey(e50_key_t key);
			bool	pressedMouseButton(uint32_t mb);

			bool	keyStates[2][cMaxKeys];
			bool	mouseButtonStates[2][cMaxButtons];

			int32_t	xDelta;
			int32_t yDelta;
		};
	}
}