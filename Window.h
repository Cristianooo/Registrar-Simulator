#include <iostream>
using namespace std;

class Window
{
	public:
		Window(Student s);
		~Window();
		
		
	private:
		Student student;
		bool Occupied;

};