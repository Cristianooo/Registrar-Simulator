#include <iostream>
#include "Window.h"

using namespace std;

Window::Window(Student s)
{	
	s=student;
	
}
Student::~Student()
{
}
int Window::getWaitTime()
{
	return s.wait;
}
