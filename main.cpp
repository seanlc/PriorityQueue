#include <iostream>
#include "PriorityQueue.h"

using namespace std;

void constr_destr_test()
{
    PriorityQueue myQ;
}

void enqueue_test()
{
    PriorityQueue myQ;

    // empty list insertion
    myQ.enqueue(1);

    // head insertion
    myQ.enqueue(0);

    // tail insertion
    myQ.enqueue(2);
    myQ.enqueue(3);
    myQ.enqueue(4);
    myQ.enqueue(6);

    // middle insertion
    myQ.enqueue(5);
    myQ.enqueue(3);
    myQ.enqueue(4);
    myQ.enqueue(6);

    myQ.print();
}

void dequeue_test()
{
    PriorityQueue myQ;
    for(int i = 0; i < 20; ++i)
        myQ.enqueue(i);
    for(int i = 0; i < 10; ++i)
        cout << myQ.dequeue() << endl;
    myQ.print();
}

void peek_test()
{
    PriorityQueue myQ;
    for(int i = 0; i < 40; ++i)
        myQ.enqueue(i);
    cout << myQ.peek() << endl;
}

void size_test()
{
    PriorityQueue myQ;
    for(int i = 0; i < 30; ++i)
        myQ.enqueue(i);
    cout << "size of queue is " << myQ.size() << endl;
}

void contains_test()
{
    PriorityQueue myQ;
    for(int i = 0; i < 40; ++i)
        myQ.enqueue(i);
    cout << "searching for 23 (present): " << myQ.contains(23) << endl;
    cout << "searching for 43 (not present): " << myQ.contains(43) << endl;
}
void clear_test()
{
    PriorityQueue myQ;
    for(int i = 0; i < 40; ++i)
        myQ.enqueue(i);
    myQ.print();
    myQ.clear();
    cout << "after clear" << endl;
    myQ.print();
}

void remove_test()
{
    PriorityQueue myQ;
    for(int i = 0; i < 40; ++i)
        myQ.enqueue(i);
    cout << "initial list: " << endl;
    myQ.print();
    myQ.remove(0);
    cout << "after remove of head: " << endl;
    myQ.print();
    cout << "after remove of middle (20) : " << endl;
    myQ.remove(20);
    myQ.print();
    cout << "after remove of tail: " << endl;
    myQ.remove(39);
    myQ.print();
}

int main()
{
//    constr_destr_test();
//    enqueue_test();
//    dequeue_test();
//    peek_test();
//    size_test();
//   contains_test(); 
//    clear_test();
    remove_test();
    return 0;
}
