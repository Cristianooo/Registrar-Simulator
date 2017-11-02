#include <iostream>
#include "Window.h"
#include "Student.h"

using namespace std;


template <class T>
class ListNode
{
	public:
		T data;
		ListNode *next;
		ListNode *prev;
		
		ListNode();
		ListNode(T data);
		~ListNode();
		
};

template <class T>
ListNode<T>::ListNode()
{
}

template <class T>
ListNode<T>::ListNode(T d)
{
	data=d;
	next=NULL;
	prev=NULL;
}

template <class T>
ListNode<T>::~ListNode()
{
	next=NULL;
	prev=NULL;		
}

template <class T>
class DoublyLinkedList
{
	private:
		ListNode *front;
		ListNode *back;
		unsigned int size;
		
	public:
		DoublyLinkedList();
		~DoublyLinkedList();
		void insertFront(int data);
		void insertBack(int data);
		int removeFront();
		int removeBack();
		void printList();
		int deletPos(int pos);
		int find(int value);
		bool insertAfter(int pos, int val);
		bool isEmpty();
		unsigned int getSize();
};

template <class T>
DoublyLinked::DoublyLinkedList()
{
	size=0;
	front=NULL;
	back=NULL;
	
}

template <class T>
DoublyLinked::~DoublyLinkedList()
{
}

template <class T>
DoublyLinkedList::insertFront(T d)
{
	ListNode *node= new ListNode(d);
	
	if(size==0)
		back=node;
	else 	//not empty
	{
		front->prev=node;
		node->next=front;
	}
	front=node;
	size++;
}

template <class T>
DoublyLinkedList<T>::insertBack(T d)
{
	ListNode *node= new ListNode(d);
	
	if(size==0)
		front=node;
	else
	{
		back->next=node;
		node->prev=back;
	}
	back=node;
	size++;
}

int DoublyLinkedList::removeFront()
{
	ListNode *node=front;
	if(front->next == NULL)
	{
		back=NULL;
		
	}
	else
	{
		front->next->previous=NULL;
		
	}
	front=front->next;
	node->next=NULL;
	int temp=node->data;
	delete node;
	
	--size;
	return temp;
}

int DoublyLinkedList::removeBack()
{
	ListNode *node=back;
	if(back->prev==NULL)
	{
		front=NULL;
	}
	else
	{
		back->prev->next=NULL;
	}
	back=back->prev;
	back->prev=NULL;
	
	int temp=node->data;
	delete node;
	
	--size;
	return temp;
}

int DoublyLinkedList::remove(int key)
{
	ListNode *curr = front;
	
	while(curr->data != key)
	{
		curr=curr->next;
		
		if(curr==NULL)
			return NULL;
	}
	//found
	if(curr==front)
	{
		removeFront();
	}
	else
	{
		curr->prev->next=curr->next;
		
	}
	
	if(curr==back)
	{
		back=curr->prev;
	}
	else
	{
		curr->next->prev=curr->prev;
	}
	
	curr->next=NULL;
	curr->prev=NULL;
	
	int temp = curr->data;
	delete curr;
	
	--size;
	
	return temp;
}
void makeList(string fileName)
{
	int lineCount=0;
	int arrayCounter=0;
	int tempCounter;
	int studentAmount;
	DoublyLinkedList handleList=new DoublyLinkedList<Handler>;
	ifstream infile(infileName + ".txt");
    	if(infile.is_open())
        {
        	while (getline(infile,line))
				{   
					lineCount++;
					if(lineCount==1)
					{
						//make array of windows
					}
					else if(lineCount==2)
					{
						arrivalTime=stoi(line);
					}
					else
					{
						
						if(lineCount==3)
						{
							Handler* handler;
							tempCounter=lineCount;
							studentAmount=stoi(line);
							gameBoard = new int*[studentAmount];
						}
						else
						{
							if(lineCount<=studentAmount+tempCounter)
							{
								handler.waitT[arrayCounter]=
								arrayCounter++;	
							}
							else
							{
								handleList.insertBack(handler);
								lineCount=1;
								arrayCounter=0;
							}
						}
						
					}
				}
        }
}

void bigLoop(string fileName)
{
	
            
	bool notComplete=true;
	int timer=0;
	while(notComplete)
	{
		timer++
		if(timer==
		
	}
}