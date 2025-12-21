#pragma once

#include "Misc.h"
#include "Cache.h"
#include "MainMemory.h"

class Simulator {
private:
    // Pointers to elements of the memory hierarchy
    Cache* caches[MAX_CACHE_LEVELS];
    MainMemory* memory;

public:
    Simulator();
    ~Simulator();
};
