//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here
#include "LinkedList.h"
#include "Object.h"
#include "SimpleVector.h"

//Program Execution Begins Here
int main(int argc, char** argv) {

    cout << "TESTING LINKED LIST...=========================================================";

    // ========== Linked List code ================================================================
    //Declare an object and place in the linked list
    Object front(1);
    LinkedList<Object> *lnkList;
    lnkList = new LinkedList<Object>(front);
    
    //Add a value to the end of the list
    Object end(1);
    lnkList->addLst(end);

    // Add a value to the beginning of the list
    Object beginning(1);
    lnkList->addFrst(beginning);

    // Add data before
    Object before(1);
    lnkList->addBefore(before, end);

    // Add data after
    Object after(1);
    lnkList->addAfter(after, beginning);

    //Print the entire list after adding to it
    lnkList->prntLst();

    // Test.
    cout << "The object " << beginning << "is found at link: " << lnkList->findLst(beginning) << endl << endl;
    cout << "The object " << end << "is found at link: " << lnkList->findLst(end) << endl << endl;
    cout << "The object " << before << "should be before " << end << endl << endl;
    cout << "The object " << after << "should be after " << beginning << endl;

    //Deallocate memory
    delete lnkList;
    // ========== End linked list code ============================================================

    cout << "FINISHED TESTING LINKED LIST...============================================";

    cout << "\n\n\nTESTING SIMPLE VECTOR WITH LINKED LIST...==================================";

    // ========== Simple Vector code ==============================================================
    // Declare an object and place it in the linked list.
    Object front1(1);
    SimpleVector<Object> *simpleVec;
    simpleVec = new SimpleVector<Object>(front1);

    // Add a new value to the end of the list.
    Object end1(1);
    simpleVec->push(end1);

    // Add a new value before the end1.
    Object beforeEnd(1);
    simpleVec->pushBefore(beforeEnd, end1);

    // Add a new value after the front1.
    Object afterBeginning(1);
    simpleVec->pushAfter(afterBeginning, front1);

    // Print the vector
    simpleVec->printVec();

    // Test.
    cout << "The object " << front1 << "is found at link: " << simpleVec->getElementAt(front1) << endl << endl;
    cout << "The object " << end1 << "is found at link: " << simpleVec->getElementAt(end1) << endl << endl;
    cout << "The object " << beforeEnd << "should be before " << end1 << endl << endl;
    cout << "The object " << afterBeginning << "should be after " << front1 << endl;

    // Deallocate memory
    delete simpleVec;

    // ========== End smiple vector code ==========================================================

    cout << "FINISHED TESTING SIMPLE VECTOR WITH LINKED LIST...========================";

    //Exit
    return 0;
}
