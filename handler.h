#include <iostream>
using namespace std;

class Handler
{
	public:
		Handler(int arrivalTime, int studentAmt, int* waitTimes);
		~Handler();
		
		int getArrivalTime();
		int getStudentAmt();
		
		
	private:
		int arrivalT;
		int studentA;
		int* waitT; 

};