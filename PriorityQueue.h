#include <iostream>

using namespace std;

struct Node{
    int data;
    Node * next;
};

class PriorityQueue{
  public:
    PriorityQueue()
    {
        head = nullptr;
    }
    ~PriorityQueue()
    {
        deleteList();
    }
    void enqueue(int n)
    {
        Node * newNode = new Node();
	newNode->data = n;
	newNode->next = nullptr;

        Node * trav = head;

	if(head == nullptr)
	    head = newNode;
	else if (newNode->data < head->data)
	{
	    newNode->next = head;
	    head = newNode;
	}
	else
	{
	    while(1)
	    {
	        if(trav->next == nullptr )
		{
		    trav->next = newNode;
		    break;
		}
		else if(newNode->data < trav->next->data)
		{
		    newNode->next = trav->next;
		    trav->next = newNode;
		    break;
		}
	        trav = trav->next;
	    }
	}
    }
    void clear();
    bool contains(int n);
    int dequeue()
    {
        int returnVal = head->data;
	Node * tmp = head;
	head = head->next;
	delete tmp;
	return returnVal;
    }
    int peek();
    int size();
    bool remove(int n);
    void print()
    {
        Node * trav = head;
	while(trav != nullptr)
	{
	    cout << "Node with data " << trav->data << endl;
	    trav = trav->next;
	}
    }
  private:
    Node * head;
    int numNodes;
    void deleteList()
    {
        Node * tmp = nullptr;
	while ( head != nullptr )
	{
	    tmp = head;
	    head = head->next;
	    delete tmp;
	}
    }
};
