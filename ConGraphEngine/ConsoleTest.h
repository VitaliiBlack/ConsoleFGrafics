#pragma once
#include "ConGraphCore/Utils.h"
#include "ConGraphCore/Canvas.h"
#include "ObJects/Object.h"

class ConsoleTest: public Object
{
	int height_;
	int widht_;
	int fontSize;
public:
	ConsoleTest();
	~ConsoleTest();
	// TODO: implement 2 rinds
	virtual void onUpdate();
	virtual void onKeyDown(int key);
	virtual void onKeyUp(int key);
	
	
	virtual void onDraw(Canvas &canvas);

private:

	int roadDirectionIterator_ = 0;
	int roadDirection_ = 0;
	float pos_ = 0;
	float speed_ = 0.1;
	int score_ = 0;
	bool crush = false;

	bool speedUp = false;
	bool speedDown = false;
	bool toLeft = false;
	bool toRight = false;

	BaseDrawElement Circle1;
	BaseDrawElement Circle2;
	
	//TODO colorize rings

	COLOR barrierColors[BARIER_COUNT];
	void resizeIt(int& height_, int& widht_, int& fontSize);
};

