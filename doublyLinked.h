#include <iostream>
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
	next=NULL;
	prev=NULL;
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
		ListNode<T> *front;
		ListNode<T> *back;
		unsigned int size;
		
	public:
		DoublyLinkedList();
		~DoublyLinkedList();
		void insertFront(T d);
		void insertBack(T d);
		T removeFront();
		T removeBack();
		void printList();
		int find(int value);
		bool insertAfter(int pos, int val);
		bool isEmpty();
		int remove(int key);
		int getSize();
		
		
		
};

template <class T>
DoublyLinkedList<T>::DoublyLinkedList()
{
	size=0;
	front=NULL;
	back=NULL;
	
}

template <class T>
DoublyLinkedList<T>::~DoublyLinkedList()
{
}

template <class T>
void DoublyLinkedList<T>::insertFront(T d)
{
	ListNode<T> *node= new ListNode<T>(d);
	
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
void DoublyLinkedList<T>::insertBack(T d)
{
	ListNode<T> *node= new ListNode<T>(d);
	
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

template <class T>
T DoublyLinkedList<T>::removeFront()
{
	ListNode<T> *node=front;
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
	T temp=node->data;
	delete node;
	
	--size;
	return temp;
}

template <class T>
T DoublyLinkedList<T>::removeBack()
{
	ListNode<T> *node=back;
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
	
	T temp=node->data;
	delete node;
	
	--size;
	return temp;
}

template <class T>
int DoublyLinkedList<T>::remove(int key)
{
	ListNode<T> *curr = front;
	
	while(curr->data != key)
	{
		curr=curr->next;
		
		if(curr==NULL)
			return 0;
	}
	//found
	if(curr==front)
	{
		front=curr->next;
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

template <class T>
int DoublyLinkedList<T>::getSize()
{
	return size;
}
