#include "ConsoleTest.h"

#include <iostream>

ConsoleTest::ConsoleTest()
{
}


ConsoleTest::~ConsoleTest()
{
}

void ConsoleTest::resizeIt(int & height_, int & widht_, int & fontSize)
{
	height_ = rand();
	widht_ = rand();
	fontSize = rand();
}
