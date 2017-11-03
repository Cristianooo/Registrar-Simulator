#include <iostream>

#include "simulation.h"

using namespace std;
	

int main(int argc, char** argv)
{	
	string fileName;
	if(argc > 1)					
	{
		simulation mySim= new simulation();
		fileName = argv[1];		
		mySim.makeList(fileName);
		mySim.bigLoop();	
	}
	return 0;
} 