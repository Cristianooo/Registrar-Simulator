#include "Student.h"
#include <iostream>

using namespace std;

class Window
{
	public:
		Window(Student s);
		~Window();
		void setToUnOccupied();
		void setToOccupied();
		void setIdleTime();
		
		bool getOccupiedBool();
		int getIdleTime();
		
		Student student;
		bool Occupied;
		int idleT;

};