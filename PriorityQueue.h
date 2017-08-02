#include <iostream>

using namespace std;

struct Node{
    int data;
    Node * next;
};

class PriorityQueue{
  public:
    PriorityQueue()
    : head (nullptr), numNodes(0)
    {}
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
	numNodes++;
    }
    void clear()
    {
        deleteList();
    }
    bool contains(int n)
    {
        Node * trav = head;
	while(trav != nullptr)
	{
	    if(trav->data == n)
	        return true;
	    trav = trav->next;
	}
	return false;
    }
    int dequeue()
    {
        int returnVal = head->data;
	Node * tmp = head;
	head = head->next;
	delete tmp;
	return returnVal;
    }
    int peek()
    {
	if(head != nullptr)
            return head->data;
	else
	    return -1;
    }
    int size()
    {
        return numNodes;
    }
    bool remove(int n)
    {
	Node * trail = nullptr;
        Node * trav = head;

        while(trav != nullptr)
        {
	    if ( trav->data == n)
	        break;
	    trail = trav;
            trav = trav->next;
        }

        // case: head deletion
        if(trav == head)
        {
            head = head->next;
	    delete trav;
	    return true;
        }

	// case: middle/end deletion
        else if (trav != nullptr)
	{
	    trail->next = trav->next;
	    delete trav;
	    return true;    
	}

        // case: not found
        return false;
    }
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
	    numNodes--;
	}
    }
};
