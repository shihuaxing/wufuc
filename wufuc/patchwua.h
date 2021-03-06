#pragma once

#include <stdbool.h>

#include <phnt_windows.h>

typedef struct tagPatchSet
{
        const char *Pattern;
        const size_t Offset1;
        const size_t Offset2;
} PatchSet;

bool calculate_pointers(uintptr_t lpfn, const PatchSet *ps, LPBOOL *ppba, LPBOOL *ppbb);
bool patch_wua(void *lpBaseOfDll, size_t SizeOfImage, wchar_t *fname);
