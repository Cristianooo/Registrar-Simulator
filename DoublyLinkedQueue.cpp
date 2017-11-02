class ListNode
{

	public:
		Student student;
		ListNode *next;
		ListNode *prev;
		ListNode();
		ListNode(Student stu);
		~ListNode();
};

ListNode::ListNode()
{

}

ListNode::ListNode(Student stu)
{
	student = stu;
	next = NULL:
	prev = NULL;
}

ListNode::~ListNode()
{
	
	next = NULL;
	prev = NULL;

}

class DoublyLinkedQueue
{
	// Student Queue
	private:
		ListNode *front;
		ListNode *back;
		unsigned int size;


	public:
		DoublyLinkedQueue();
		~DoublyLinkedQueue();
		void enqueue(Student stu);
		Student dequeue();
		int size();
		bool isEmpty();
		Student front(); //returns Student that is top of queue.
};
DoublyLinkedQueue::DoublyLinkedQueue()
{
	size = 0;
	front = NULL;
	back = NULL;
}
DoublyLinkedQueue::~DoublyLinkedQueue()
{
	//later
}
bool DoublyLinkedQueue::isEmpty()
{
	if (front == NULL)
		return true;
	else
		return false;
}
void DoublyLinkedQueue::enqueue(Student stu)
{
	ListNode *node = new ListNode(stu);
	if (size == 0)
	{
		back = node;
		front = node;
	}
	else
	{
		back->next = node;
		node->prev = back;
		back = node;
	}
	size++;
}
Student DoublyLinkedQueue::dequeue()
{
	Student temp = new Student();
	temp = front->student;
	front->next->prev = NULL;
	front->next = front;
	return temp;

}

int DoublyLinkedQueue::size()
{
	return size;
}

Student DoublyLinkedQueue::front()
{
	return front->Student;

}
/*
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
		int deletePos(int pos);
		int find(int value);
		bool insertAfter(int pos, int val);
		bool isEmpty();
		unsigned int getSize();
};
DoublyLinkedList::DoublyLinkedList()
{
	size = 0;
	front = NULL;
	back = NULL;
}

DoublyLinkedList::~DoublyLinkedList()
{
	//build some character and research it
}

void DoublyLinkedList::insertFront(int data)
{
	ListNode *node = new ListNode(data);
	if (size == 0)
	{
		back = node;
		
	}
	else
	{
		front->prev=node;
		node->next=front;
	}
	front = node;
	size++;

}

void DoublyLinkedList::insertBack(int data)
{
	ListNode *node = new listNode(d);

	if (size == 0)
	{
		front = node;

	}
	else
	{
		back->next=node;
		node->prev=back;
	}
	back = node;
	size++;
}

int DoublyLinkedList::removeFront()
{
	ListNode *node = front;

	//only node in list
	if (front->next = NULL
		back = NULL;

	else
	{
		front->next->prev = NULL;

	} //more than one

	front = front->next;
	node->next = NULL;
	int temp = node->data;
	delete node;
	--size;
	return temp;
}

int DoublyLinkedList::remove(int key)
{
	ListNode *curr = front;

	//start looking for node

	while(curr->data != key)
	{
		curr = curr->next;
		if(curr == NULL)
			return NULL;
	}

	//found it
	if (curr==front)
	{
		front = curr->next;

	}
	else
	{
		curr->prev->next=curr->next;
	}

	if(curr==back)
	{
		back = curr->prev;
	}
	else
	{
		curr->next->prev = curr->prev;
	}

	curr->next= NULL;
	curr->prev = NULL;

	int temp = curr->data;
	delete curr;

	--size;

	return temp;
}

class NaiveList
{
	private:
		unsigned int size;
		ListNode *front;

	public:
		NaiveList();
		~NaiveList();

		void insertFront(int data);
		void printList();
		int removeFront();
		int deletePos(int pos);
		int find(int value);
		unsigned int getSize();
		bool isEmpty();
};

void NaiveList::insertFront(int data)
{
	++size;
	ListNode *node = new ListNode(data);
	node->next = front;

}

int NaiveList::removeFront()
{
	--size;
	int temp = front->data;
	ListNode *ft front;
	front = front->next;
	ft->next = NULL;
	delete ft;
}



void NaiveList::printList()
{
	ListNode *curr = front;
	while(curr == true)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}

int NaiveList::find(int value)
{
	int idx = -1;
	ListNode *curr = front;

	while (curr != NULL) //start searching for value
	{
		++idx;
		if (curr->data = value) //found it
		{
			break;
		}
		else
			curr = curr->next;
	}

	if (curr = NULL)
		idx = -1;
	return idx;
}

int NaiveList::deletePos(int pos)
{
	int idx = 0;
	ListNode *curr = front;
	ListNode *prev = front;

	while (idx != pos)
	{
		prev = curr;
		curr = curr->next;
		++idx;
	}

	//i found the position, now it's time to update pointers

	prev->next = curr->next;
	curr->next = NULL:
	int d = curr->data;
	delete curr;

	size--;
	return d;
}
*/
