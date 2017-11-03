#include <iostream>
using namespace std;

class Handler
{
	public:
		Handler(int arrivalTime, int studentAmt, int* CaterTimes);
		~Handler();
		
		int getArrivalTime();
		int getStudentAmt();
		
		void setArrivalTime(int arrivalTime);
		void setStudentAmt(int studentAmt);
		int* caterT; 
		
	private:
		int arrivalT;
		int studentA;
		

};