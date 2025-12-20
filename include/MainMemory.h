#pragma once

#include <unordered_map>
#include <vector>

#include "MemoryElement.h"

class MainMemory : public MemoryElement {
private:
    std::unordered_map<unsigned int, int> memory;

public:
    int getWord(unsigned int address);
    void setWord(unsigned int address, int value);
};
