
/*
Advapi32.lib and wincrypt.h for windows


*/

#ifndef RAND_H
#define RAND_H

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>


#include <windows.h>
#include <Wincrypt.h>

#ifdef __cplusplus
extern "C" {
#endif

uint64_t getRandomNumber(void);

#ifdef __cplusplus
}
#endif

#endif /* RAND_H */


