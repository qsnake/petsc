#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* sor.c */
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
#define pcsorsetsymmetric_ PCSORSETSYMMETRIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcsorsetsymmetric_ pcsorsetsymmetric
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcsorsetomega_ PCSORSETOMEGA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcsorsetomega_ pcsorsetomega
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcsorsetiterations_ PCSORSETITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcsorsetiterations_ pcsorsetiterations
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  pcsorsetsymmetric_(PC pc,MatSORType *flag, int *__ierr ){
*__ierr = PCSORSetSymmetric(
	(PC)PetscToPointer((pc) ),*flag);
}
void PETSC_STDCALL  pcsorsetomega_(PC pc,PetscReal *omega, int *__ierr ){
*__ierr = PCSORSetOmega(
	(PC)PetscToPointer((pc) ),*omega);
}
void PETSC_STDCALL  pcsorsetiterations_(PC pc,PetscInt *its,PetscInt *lits, int *__ierr ){
*__ierr = PCSORSetIterations(
	(PC)PetscToPointer((pc) ),*its,*lits);
}
#if defined(__cplusplus)
}
#endif
