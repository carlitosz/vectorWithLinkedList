//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here
#include "LinkedList.h"
#include "Object.h"
#include "SimpleVector.h"

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare an object and place in the linked list
    Object obj(1);
    LinkedList<Object> *lnkList;
    lnkList = new LinkedList<Object>(obj);
    // SimpleVector<Object> *simpleVec;
    // simpleVec = new SimpleVector<Object>;

    //Add a value to the end of the list
    Object end(1);
    lnkList->addLst(end);

    // Add a value to the beginning of the list
    Object beginning(1);
    lnkList->addFrst(beginning);

    //Print the entire list after adding to it
    lnkList->prntLst();

    // Test.
    cout << "The object " << beginning << "is found at link: " << lnkList->findLst(beginning) << endl << endl;
    cout << "The object " << end << "is found at link: " << lnkList->findLst(end) << endl << endl;

    // //Test the object return
    // cout << "The 6th element in the List at index 5 is " << simpleVec->printElementAt(5);

    //Deallocate memory
    // delete simpleVec;
    delete lnkList;

    //Exit
    return 0;
}
