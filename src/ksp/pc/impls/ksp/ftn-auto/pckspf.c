#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* pcksp.c */
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
#include "petscksp.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pckspsetusetrue_ PCKSPSETUSETRUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pckspsetusetrue_ pckspsetusetrue
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pckspgetksp_ PCKSPGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pckspgetksp_ pckspgetksp
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  pckspsetusetrue_(PC pc, int *__ierr ){
*__ierr = PCKSPSetUseTrue(
	(PC)PetscToPointer((pc) ));
}
void PETSC_STDCALL  pckspgetksp_(PC pc,KSP *ksp, int *__ierr ){
*__ierr = PCKSPGetKSP(
	(PC)PetscToPointer((pc) ),ksp);
}
#if defined(__cplusplus)
}
#endif
