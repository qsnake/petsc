#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* rk.c */
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

#include "petscts.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsrksettolerance_ TSRKSETTOLERANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsrksettolerance_ tsrksettolerance
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  tsrksettolerance_(TS ts,PetscReal *aabs, int *__ierr ){
*__ierr = TSRKSetTolerance(
	(TS)PetscToPointer((ts) ),*aabs);
}
#if defined(__cplusplus)
}
#endif
