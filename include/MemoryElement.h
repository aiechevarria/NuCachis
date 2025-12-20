#pragma once

class MemoryElement {
private:
    // Pointers to the next and previous elements in the memory hierarchy
    MemoryElement* next;
    MemoryElement* prev;

public:
    // Constructor
    MemoryElement();

    MemoryElement* getNext();
    MemoryElement* getPrev();

    void setNext(MemoryElement* nextElement);
    void setPrev(MemoryElement* prevElement);

    // Process request from another level
    void processRequest();
};
