// STCMalloc
// Samiur's Thread Caching Malloc
//
// An implementation of malloc that maintains a per CPU pool of memory. mallocs and frees (and eventually news and deletes) work with this pool instead of making syscalls to get memory.
// Note: all memory functions related to stmalloc begin with an STC to distinguish it from the standard OS libraries.
// 
// Functions available:
// - stcmalloc()
// - stcfree()

#ifndef _STCMALLOC_H_
#define _STCMALLOC_H_



#endif  // _STCMALLOC_H_