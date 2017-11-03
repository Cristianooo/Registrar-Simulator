#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(int waitTime, int CaterTime, int ArrivalTime)
{	
	wait=waitTime;
	CaterT=CaterTime;
	ArrivalT=ArrivalTime;
	
}

Student::~Student()
{
}
int Student::getWaitTime()
{
	return WaitT;
}
int Student::getCaterTime()
{
	return CaterT;
}
int Student::getArrivalTime()
{
	return ArrivalT;
}
		
void Student::setWaitTime(int waitTime)
{
	waitT=waitTime;
}
void Student::setCaterTime(int CaterTime)
{
	CaterT=CaterTime;
}
void Student::setArrivalTime(int ArrivalTime)
{
	ArrivalT=ArrivalTime;
}