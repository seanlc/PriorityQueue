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

int main()
{
//    constr_destr_test();
    enqueue_test();
    return 0;
}
