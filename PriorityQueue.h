#include <iostream>

using namespace std;

struct Node{
    int data;
    Node * next;
};

class PriorityQueue{
  public:
    PriorityQueue();
    ~PriorityQueue();
    bool enqueue(int n);
    void clear();
    bool contains(int n);
    int dequeue();
    int peek();
    int size();
    bool remove(int n);
  private:
    Node * head;
    int numNodes;
};
