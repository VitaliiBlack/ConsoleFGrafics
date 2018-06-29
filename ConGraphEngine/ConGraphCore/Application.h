#ifndef APPLICATION_H
#define APPLICATION_H


#include "../ConGraphCore/Console.h"
#include "../ConGraphCore/Canvas.h"
#include "../ObJects/Object.h"

#include <list>
#include <vector>

//main class, Facade pattern, 
class Application
{
public:

	static Application& instance();
	int getWidth() const;
	int getHeight() const;
	void close();
	void addObject(Object *object);
	void removeObject(Object *object);
	void run();
private:



	bool opened_ = true;
	Console console_;
	Canvas canvas_;
	bool keyStates_[KEY_COUNT] = { 0 };
	std::vector<Object*> objects_;
	void checkKeyboard();
	void update();
	void notifyKeyDown(int key);
	void notifyKeyUp(int key);
	Application();

};

#endif // APPLICATION_H