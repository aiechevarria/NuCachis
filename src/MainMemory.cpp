#include "MainMemory.h"

int MainMemory::getWord(unsigned int address) {
    if (memory.find(address) == memory.end()) {
        memory[address] = 0; // default-initialize if not present
    }
    return memory[address];
}

void MainMemory::setWord(unsigned int address, int value) {
    memory[address] = value;
}
