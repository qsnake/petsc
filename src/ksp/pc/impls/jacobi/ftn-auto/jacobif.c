#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* jacobi.c */
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
#define pcjacobisetuseabs_ PCJACOBISETUSEABS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcjacobisetuseabs_ pcjacobisetuseabs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcjacobisetuserowmax_ PCJACOBISETUSEROWMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcjacobisetuserowmax_ pcjacobisetuserowmax
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcjacobisetuserowsum_ PCJACOBISETUSEROWSUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcjacobisetuserowsum_ pcjacobisetuserowsum
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  pcjacobisetuseabs_(PC pc, int *__ierr ){
*__ierr = PCJacobiSetUseAbs(
	(PC)PetscToPointer((pc) ));
}
void PETSC_STDCALL  pcjacobisetuserowmax_(PC pc, int *__ierr ){
*__ierr = PCJacobiSetUseRowMax(
	(PC)PetscToPointer((pc) ));
}
void PETSC_STDCALL  pcjacobisetuserowsum_(PC pc, int *__ierr ){
*__ierr = PCJacobiSetUseRowSum(
	(PC)PetscToPointer((pc) ));
}
#if defined(__cplusplus)
}
#endif
