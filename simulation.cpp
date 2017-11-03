#include <iostream>
#include "simulation.h"

using namespace std;
simulation::simulation()
{
	
}
simulation::~simulation()
{
	
}
handlerList = new DoublyLinkedList<Handler>();				

int windowArrayAmount;

void makeList(string fileName)			//Function for creating a doubly linked list of type handler in order to store all needed information
{
	int lineCount=0;				//Counts the lines in the text file
	int arrayCounter=0;		//Counts the index for the handler array
	int tempCounter;
	int studentAmount;
	string line;
	
	ifstream infile(fileName + ".txt");
	if(infile.is_open())
	{
		while (getline(infile,line))
		{   
			lineCount++;
			if(lineCount==1)			//Only happens once, creates the array of windows
			{
				windowArrayAmount=stoi(line);
				Window *windowArray[windowArrayAmount];
			}
			else if(lineCount==2)		//Sets the handler's arrival time
			{
				handler->setArrivalTime(stoi(line));
			}
			else
			{
				if(lineCount==3)		//Sets the number of students in the batch
				{
					
					tempCounter=lineCount;
					handler->setStudentAmt(stoi(line));
					
				}	
				else			
				{
					if(lineCount<=studentAmount+tempCounter)	//Adjusts the array until all students have been input
					{
						handler->caterT[arrayCounter]=stoi(line);
						arrayCounter++;	
					}	
					else										//Inserts the handler into a doubly linked list and resets the needed values
					{
						handlerList.insertBack(handler);
						lineCount=1;
						arrayCounter=0;
					}
				}
			}
    	}	
    }
}

void bigLoop()		//Function for counting time one by one and carrying out necessary operations
{
	Students= new DoublyLinkedQueue<Student>();
	bool notComplete=true;
	int timer=0;
	while(notComplete)
	{
		Handler* handler=handlerList.front();						//Sets a handler pointer to the front of the doubly linked list
		timer++;
		if(timer==handler->getArrivalTime())		//When the student batch matches the curent time, carry out procedures
		{
			for(int i=0;i<=handler->getStudentAmt();i++)
			{
				Student* stu = new Student(0, handler->caterT[i] , handler->getArrivalTime());
				Students.enqueue(stu);	//Queue the students from this batch.
			}
			handlerList.removeFront();			//Remove the front of the handler since we are done with this batch
		}
		
		for(int i=0;i<=windowArrayAmount;i++)
		{
			if(windowArray[i].getOccupiedBool())
			{
				int tempCater= windowArray[i].student.getCaterTime();		
				windowArray[i].student.setCaterTime(tempCater-1);					//If the window is occupied, decrease the cater  time
			}

			if(windowArray[i].student.getCaterTime()==0)		
			{	
				windowArray[i].setToUnOccupied();			//When the student has been fully helped, set the window to unoccupied
			}
		}
		bool AllFull=true;
		for(int i=0;i<=windowArrayAmount;i++)
		{	
			if(windowArray[i].getOccupiedBool()==false)				
			{
				windowArray[i].student(Students.dequeue());			//If the window is not occupied, input the front student from your queue
				AllFull=false;
			}
			if(AllFull==true)		//If the window array is all occupied, up the wait time for students
			{
				Student tempArray[Students.getSize()];
				for(int i=0;i<=tempArray.size();++i)
				{
					tempArray[i]=Students.dequeue();
					
					int tempWait=tempArray[i].getWaitTime();
					int tempArrival= tempArray[i].getArrivalTime();
					tempArray[i].setWaitTime(tempWait++);
					tempArray[i].setArrivalTime(tempArrival++);
				}
				for(int i=0;i<=tempArray.size();++i)
				{
					Students.enqueue(tempArray[i]);
				}
				/*ListNode *curr;
				curr=Students->front;
				while(curr!=NULL)
				{
					int tempWait=curr->data.getWaitTime();
					int tempArrival= curr->data.getArrivalTime();
					curr->data.setWaitTime(tempWait++);
					curr=curr->next;
				}
				*/
				
			}
			//make if statement for if window is un occupied but queue is empty, therefore window idle time ++.
			
		}
		if(handlerList.getSize()==0)		//If we have gone through all students, finish simulation
		{
			notComplete=false;
		}
	}
}
	
*/

