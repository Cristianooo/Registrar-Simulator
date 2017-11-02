#include <iostream>
#include <fstream>

using namespace std;

template <typename T>
class genqueue
{
	public:
		genqueue(int size)
		{
			myArray = new T(size);
			max = size;
			top = -1;
			front = 0;
		}

		~genqueue()
		{
			delete [] myArray;
			cout << "GENERAL QUEUE DESTROYED" << endl;

		}

		void enqueue(T data)
		{
			if (isFull())
			{
				adjust();
			}
			myArray[++top] = data;
		}

		T dequeue()
		{
			if (top != -1)
			{
				return myArray[front++];
			}
			else
				return cout << "Queue is Empty" << endl;

		}

		T front()
		{
			if (top != -1)
				return myArray[front];
			else
				return cout << "Queue is Empty" << endl;
		}

		int size()
		{
			if (top != -1)
				return top + 1;
			else
				return cout << "Queue is Empty" << endl;
		}

		bool isEmpty()
		{
			return (top == -1);
		}

		bool isFull()
		{
			return (top == max-1);
		}

		void adjust()
		{
			max *= 2;
			T *tempArray;
			tempArray = new T[max];
			for (int i = 0; i <= top; ++i)
			{
				tempArray[i] = myArray[i];
			}
			myArray = tempArray;
		}
	int max;
	int top;
	int front;
	T *myArray;

}