//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here
// #include "LinkedList.h"
#include "Object.h"
#include "SimpleVector.h"

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare an object and place in the linked list
    Object obj(5);
    // LinkedList<Object> *lnkList;
    // lnkList = new LinkedList<Object>(obj);
    SimpleVector<Object> *simpleVec;
    simpleVec = new SimpleVector<Object>;

    //Print the entire list
    // lnkList->prntLst();
    simpleVec->push(obj);
    simpleVec->printVec();

    // //Add a value to the end of the list
    Object valAdd(2);
    Object valFnd1(valAdd);
    Object valFnd2(5);
    simpleVec->push(valAdd);
    simpleVec->push(Object(3));
    simpleVec->push(Object(4));
    simpleVec->push(Object(5));
    simpleVec->push(Object(6));

    //Print the entire list after adding to it
    simpleVec->printVec();

    //Find some values in the List
    cout << "This Object " << valFnd1 << "is found at link    " << simpleVec->getElementAt(valFnd1) << endl;
    cout << "This Object " << valFnd2 << "is found at link   " << simpleVec->getElementAt(valFnd2) << endl;
    cout << endl << "The number of elements in the list = " << simpleVec->size() << endl;

    //Test the object return
    cout << "The 6th element in the List at index 5 is " << simpleVec->printElementAt(5);

    //Deallocate memory
    delete simpleVec;

    //Exit
    return 0;
}
