#include <iostream>
using namespace std;

class Student
{
	public:
		Student(int waitTime, int caterTime, int arrivalTime);
		~Student();
		
		int getWaitTime();
		int getCaterTime();
		int getArrivalTime();
		
		void setWaitTime(int waiTime);
		void setCaterTime(int caterTime);
		void setArrivalTime(int arrivalTime);
		
	private:
		int waitT;
		int caterT;
		int arrivalT;
		
		

};