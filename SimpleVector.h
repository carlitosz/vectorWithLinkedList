// SimpleVector class template
#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H
#include <iostream>
#include <new>       // Needed for bad_alloc exception
#include <cstdlib>   // Needed for the exit function
using namespace std;

template <class T>
class SimpleVector
{
private:
    LinkedList<T> *aptr;          // To point to the allocated array
    void memError();  // Handles memory allocation errors
    void subError();  // Handles subscripts out of range

public:
    // Default constructor
    SimpleVector() { aptr = NULL; }

    // Constructor declaration
    SimpleVector(const T &data) {
        try { aptr = new LinkedList<T>(data); } catch (bad_alloc) { memError(); }
    }

    // Destructor declaration
    ~SimpleVector() { delete aptr; }

    // Accessor to return the list size
    int size() const { return aptr->cntList(); }

    // Push some 'data' before a 'link'
    void pushBefore(const T &data, const T &link) { aptr->addBefore(data, link); }

    // Push some 'data' after a 'link'
    void pushAfter(const T &data, const T &link) { aptr->addAfter(data, link); }

    //Augments the size of the vector by 1 to include the new value.
    void push(T newValue) { aptr->addLst(newValue); }

    // Prints the vector
    void printVec() { aptr->prntLst(); }

    // Accessor to return a specific element
    int getElementAt(const T &findMe) { return aptr->findLst(findMe); }

    // Overloaded [] operator declaration
    T &operator[](const int &);
};


//*******************************************************
// memError function. Displays an error message and     *
// terminates the program when memory allocation fails. *
//*******************************************************

template <class T>
void SimpleVector<T>::memError()
{
    cout << "ERROR:Cannot allocate memory.\n";
    exit(EXIT_FAILURE);
}

//***********************************************************
// subError function. Displays an error message and         *
// terminates the program when a subscript is out of range. *
//***********************************************************

template <class T>
void SimpleVector<T>::subError()
{
    cout << "ERROR: Subscript out of range.\n";
    exit(EXIT_FAILURE);
}

#endif
