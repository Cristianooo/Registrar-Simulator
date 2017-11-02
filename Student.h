#include <iostream>
using namespace std;

class Student
{
	public:
		Student(int waitTime);
		~Student();
		
		int getWaitTime();
	private:
		int waitTime;
		

};