#include <iostream>
#include "simulation.h"

using namespace std;
	

int main(int argc, char** argv)
{	
	string fileName;
	if(argc > 1)					
	{
		fileName = argv[1];
		
		simulation mySim;
			
		mySim.makeList(fileName);
		
		mySim.bigLoop();	
	}
	return 0;
} 