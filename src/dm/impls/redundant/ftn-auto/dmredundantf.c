#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* dmredundant.c */
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

#include "petscdm.h"
#include "petscdmredundant.h"
#include "petscmat.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmredundantsetsize_ DMREDUNDANTSETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmredundantsetsize_ dmredundantsetsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmredundantgetsize_ DMREDUNDANTGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmredundantgetsize_ dmredundantgetsize
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  dmredundantsetsize_(DM dm,PetscInt *rank,PetscInt *N, int *__ierr ){
*__ierr = DMRedundantSetSize(
	(DM)PetscToPointer((dm) ),*rank,*N);
}
void PETSC_STDCALL  dmredundantgetsize_(DM dm,PetscInt *rank,PetscInt *N, int *__ierr ){
*__ierr = DMRedundantGetSize(
	(DM)PetscToPointer((dm) ),rank,N);
}
#if defined(__cplusplus)
}
#endif
