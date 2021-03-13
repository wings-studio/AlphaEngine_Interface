#pragma once
#ifndef INPUT_H
#define INPUT_H

#include "ae_std.h"
#include "ae_math.h"

#define OnKeyPressed(func) AlphaEngine::Input::onKeyPressed.addHandler(AlphaEngine::Action<AlphaEngine::Input::Key, const char*>(func));
#define OnKeyReleased(func) AlphaEngine::Input::onKeyReleased.addHandler(AlphaEngine::Action<AlphaEngine::Input::Key, const char*>(func));

#define PressKey(key) AlphaEngine::Input::onKeyPressed.exec(AlphaEngine::Input::Key::key, #key);
#define ReleaseKey(key) AlphaEngine::Input::onKeyReleased.exec(AlphaEngine::Input::Key::key, #key);

using namespace AlphaEngine::Math;

namespace AlphaEngine { namespace Input
{

enum Key : uint
{
    Unknown,
	LeftShift,
	RightShift,
	LeftCtrl,
	RightCtrl,
	LeftAlt,
	RightAlt,
	LeftSuper,
	RightSuper,
	AltGr,
	Enter,
	Esc,
	Up,
	Down,
	Left,
	Right,
	Home,
	End,
	PageUp,
	PageDown,
	Backspace,
	Insert,
	Delete,
	F1,
	F2,
	F3,
	F4,
	F5,
	F6,
	F7,
	F8,
	F9,
	F10,
	F11,
	F12,
	Space,
	Tab,
	Quote,
	Comma,
	Period,
	Minus,
	Plus,
	Slash,
	Percent,
	Semicolon,
	Equal,
	LeftBracket,
	RightBracket,
	Backslash,
	Backquote,
	Zero,
	One,
	Two,
	Three,
	Four,
	Five,
	Six,
	Seven,
	Eight,
	Nine,
	A,
	B,
	C,
	D,
	E,
	F,
	G,
	H,
	I,
	J,
	K,
	L,
	M,
	N,
	O,
	P,
	Q,
	R,
	S,
	T,
	U,
	V,
	W,
	X,
	Y,
	Z,
	NumZero,
	NumOne,
	NumTwo,
	NumThree,
	NumFour,
	NumFive,
	NumSix,
	NumSeven,
	NumEight,
	NumNine,
	NumDecimal,
	NumDivide,
	NumMultiply,
	NumSubtract,
	NumAdd,
	NumEnter,
	NumEqual
};

enum MButton : uint
{
	MouseLeft,
	MouseRight,
	MouseMiddle,
	X1,
	X2
};

typedef Event<Key, const char*> KeyEvent; // key, name of key
typedef Event<MButton, Vector2> MouseEvent; // button, position
typedef Event<Vector2, Vector2> MouseMoveEvent; // relative pos, pos
typedef Event<Vector2, Vector2> MouseScrollEvent; // offset, position

KeyEvent onKeyPressed, onKeyReleased;
MouseEvent onMousePressed, onMouseReleased;
MouseMoveEvent onMouseMoved;
MouseScrollEvent onMouseScrolled;

} } // end of namespace

#endif // INPUT_H
