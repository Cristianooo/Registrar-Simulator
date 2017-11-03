#include <iostream>

using namespace std;

Handler::Handler(int arrivalTime, int studentAmt, int* caterTimes)
{	
	arrivalT=arrivalTime;
	studentA=studentAmt;
	caterT=caterTimes;
	
}
Handler::~Handler()
{
	
}
int Handler::getArrivalTime()
{
	return arrivalT;
}
int Handler::getStudentAmt()
{
	return studentA;
}
void Handler::setArrivalTime(int arrivalTime)
{
	ArrivalT=arrivalTime;
}
void Handler::setStudentAmt(int studentAmt)
{
	StudentA=studentAmt;
}
