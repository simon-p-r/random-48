
/*
Advapi32.lib and wincrypt.h for windows

BOOL WINAPI CryptAcquireContext(
  _Out_ HCRYPTPROV *phProv,
  _In_  LPCTSTR    pszContainer,
  _In_  LPCTSTR    pszProvider,
  _In_  DWORD      dwProvType,
  _In_  DWORD      dwFlags
);

BOOL WINAPI CryptGenRandom(
  _In_    HCRYPTPROV hProv,
  _In_    DWORD      dwLen,
  _Inout_ BYTE       *pbBuffer
);

*/

#include "rand.h"

uint64_t getRandomNumber(void)
{

    bool result = false;
    HCRYPTPROV prov = 0;
    uint64_t randval = 0;

    result = CryptAcquireContext(
        &prov,
        NULL,
        NULL,
        PROV_RSA_FULL,
        0
    );
    
    if (!result) {
        return 0;
    }

    result = CryptGenRandom(
        prov,
        6, // represents 48 bit number - 6 x 8??
        (PBYTE)(&randval)
    );


    if (!result) {
        if (!CryptReleaseContext(prov, 0)) {
            printf("Unable to release context\n");
            return 0;
        }
        printf("Released crypto context\n");
        return 0;
    }

    
    if (!CryptReleaseContext(prov, 0)) {
        printf("Unable to release context\n");
        return 0;
    }
    return randval;

};


