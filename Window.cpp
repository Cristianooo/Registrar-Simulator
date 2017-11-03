#include <iostream>
#include "Window.h"

using namespace std;

Window::Window(Student s)
{	
	s=student;
	
}
Window::~Window()
{
}
void Window::setToUnOccupied()
{
	Occupied=false;
}
void Window::setToOccupied()
{
	Occupied=true;
}
void Window::setIdleTime(int idleTime)
{
	idleT=idleTime;
}
		
bool Window::getOccupiedBool()
{
	return Occupied;
}
int Window::getIdleTime()
{
	return idleT;
}
		