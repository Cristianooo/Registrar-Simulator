//#include "doublyLinked.h"

template <class T>
class DoublyLinkedQueue
{	
	public:
		DoublyLinkedQueue();
		~DoublyLinkedQueue();
		void enqueue(T data);
		T dequeue();
		int getSize();
		bool isEmpty();
		T front();
		
		DoublyLinkedList<T> *myQueue;
		
	private:
		unsigned int size;
		
};
template <class T>
DoublyLinkedQueue<T>::DoublyLinkedQueue()
{
	myQueue = new DoublyLinkedList<T>();
}

template <class T>
DoublyLinkedQueue<T>::~DoublyLinkedQueue()
{
	delete myQueue;
}

template <class T>
bool DoublyLinkedQueue<T>::isEmpty()
{
	if (myQueue->front == NULL)
		return true;
	else
		return false;
}

template <class T>
void DoublyLinkedQueue<T>::enqueue(T data)
{
	myQueue->insertBack(data);
}

template <class T>
T DoublyLinkedQueue<T>::dequeue()
{
	return myQueue->removeFront();
}

template <class T>
int DoublyLinkedQueue<T>::getSize()
{
	return size;
}

template <class T>
T DoublyLinkedQueue<T>::front()
{
	return myQueue->front;

}