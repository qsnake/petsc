#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* snesut.c */
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

#include "petscsnes.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesdefaultgetwork_ SNESDEFAULTGETWORK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesdefaultgetwork_ snesdefaultgetwork
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  snesdefaultgetwork_(SNES snes,PetscInt *nw, int *__ierr ){
*__ierr = SNESDefaultGetWork(
	(SNES)PetscToPointer((snes) ),*nw);
}
#if defined(__cplusplus)
}
#endif
