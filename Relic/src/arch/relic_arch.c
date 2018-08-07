/**
 This file is not from the original library but is neccessary in compiling the correct
 relic_arch_*.c file based on the current CPU target.
 */

#include "TargetConditionals.h"

#ifndef TARGET_OS_SIMULATOR
  #error "Target Information is unavailable"
#endif

#if TARGET_OS_SIMULATOR
  #include "relic_arch_x64.c"
#else
  #include "relic_arch_arm.c"
#endif
