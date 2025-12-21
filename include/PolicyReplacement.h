#pragma once

typedef enum {
    LRU,
    LFU,
    RAND,
    FIFO,
    NUM_POLICY_REPLACEMENT
} PolicyReplacement;