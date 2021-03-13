#include <iostream>
#include "ae_std.h"
#include "Input.h"

void printKey(AlphaEngine::Input::Key k, const char* kname)
{
	std::cout << k << ' ' << kname << std::endl;
}

int main()
{
	OnKeyPressed(printKey)
	PressKey(B)
}
