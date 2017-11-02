#include <iostream>
#include "Window.h"

using namespace std;

Handler::Handler(int arrivalTime, int studentAmt, int* waitTimes)
{	
	arrivalT=arrivalTime;
	studentA=studentAmt;
	waitT=waitTimes;
	
}
Handler::~Handler()
{
	
}

