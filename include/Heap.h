#ifndef HEAP_H
#define HEAP_H

#include "Structure.h"
#include <string>

class Heap : public Structure
{
public:
	Heap() : heap(nullptr), size(0) {}  //default constructor
	Heap(int);      //constructor with initial heap value

	void print();	//prints heap
    Heap* initFromFile(std::string);

	Heap* add(int); //adds value to heap
	Heap* addAtEnd(int); //same as add method
	Heap* addAtIndex(int, unsigned int); //adds value at specified index. not used!

	int deleteFirst(Structure** = nullptr);      //removes and returns heap's root value
	int deleteLast();       //same as delete first
	int deleteAtIndex(unsigned int, Structure** = nullptr);    //not used in heap!
	int get(unsigned int);

	unsigned int getSize() { return size; }		//returns heap size
	int findValue(int);    //searches for specific value

	virtual ~Heap();

private:
	int *heap;
	unsigned int size;

	void heapFixUpDown(int *);   //fixes heap after pop
	void heapFixDownUp(int *, int);   //fixes heap after push
};

#endif // HEAP_H
