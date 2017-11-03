#include <iostream>
#include <fstream>
#include "Window.h"
#include "handler.h"
#include "doublyLinked.h"
#include "DoublyLinkedQueue.h"

using namespace std;

class simulation
{
	public:
		simulation();
		~simulation();
		
		void makeList(string fileName);	
		void bigLoop();	
		
	private:
		Window* windowArray;
		DoublyLinkedQueue<Student> *Students;
		int* waitTimes;
		Handler* handlerList;
		Handler* handler;
		
		

};