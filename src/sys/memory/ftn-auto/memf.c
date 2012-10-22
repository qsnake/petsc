#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* mem.c */
/* Fortran interface file */

/*
* This file was generated automatically by bfort from the C source
* file.  
 */

#ifdef PETSC_USE_POINTER_CONVERSION
#if defined(__cplusplus)
extern "C" { 
#endif 
extern void *PetscToPointer(void*);
extern int PetscFromPointer(void *);
extern void PetscRmPointer(void*);
#if defined(__cplusplus)
} 
#endif 

#else

#define PetscToPointer(a) (*(long *)(a))
#define PetscFromPointer(a) (long)(a)
#define PetscRmPointer(a)
#endif

#include "petscsys.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscmemorygetcurrentusage_ PETSCMEMORYGETCURRENTUSAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscmemorygetcurrentusage_ petscmemorygetcurrentusage
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscmemorygetmaximumusage_ PETSCMEMORYGETMAXIMUMUSAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscmemorygetmaximumusage_ petscmemorygetmaximumusage
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscmemorygetcurrentusage_(PetscLogDouble *mem, int *__ierr ){
*__ierr = PetscMemoryGetCurrentUsage(mem);
}
void PETSC_STDCALL  petscmemorygetmaximumusage_(PetscLogDouble *mem, int *__ierr ){
*__ierr = PetscMemoryGetMaximumUsage(mem);
}
#if defined(__cplusplus)
}
#endif
