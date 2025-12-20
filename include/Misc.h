#pragma once


// App specific configurations
#define APP_NAME "NuCachis"
#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720
#define MAX_PATH_LENGTH 512

// Memory specific configurations
#define LOWER_MEM_BOUND 0x800000

// File paths for the trace and config
static char configPath[MAX_PATH_LENGTH];
static char tracePath[MAX_PATH_LENGTH];