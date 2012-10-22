#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* eisen.c */
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

#include "petscpc.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pceisenstatsetomega_ PCEISENSTATSETOMEGA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pceisenstatsetomega_ pceisenstatsetomega
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pceisenstatnodiagonalscaling_ PCEISENSTATNODIAGONALSCALING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pceisenstatnodiagonalscaling_ pceisenstatnodiagonalscaling
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  pceisenstatsetomega_(PC pc,PetscReal *omega, int *__ierr ){
*__ierr = PCEisenstatSetOmega(
	(PC)PetscToPointer((pc) ),*omega);
}
void PETSC_STDCALL  pceisenstatnodiagonalscaling_(PC pc, int *__ierr ){
*__ierr = PCEisenstatNoDiagonalScaling(
	(PC)PetscToPointer((pc) ));
}
#if defined(__cplusplus)
}
#endif
