#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* vscatcusp.c */
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

#include "petscis.h"
#include "petscvec.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecscatterinitializeforgpu_ VECSCATTERINITIALIZEFORGPU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecscatterinitializeforgpu_ vecscatterinitializeforgpu
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecscatterfinalizeforgpu_ VECSCATTERFINALIZEFORGPU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecscatterfinalizeforgpu_ vecscatterfinalizeforgpu
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  vecscatterinitializeforgpu_(VecScatter inctx,Vec x,ScatterMode *mode, int *__ierr ){
*__ierr = VecScatterInitializeForGPU(
	(VecScatter)PetscToPointer((inctx) ),
	(Vec)PetscToPointer((x) ),*mode);
}
void PETSC_STDCALL  vecscatterfinalizeforgpu_(VecScatter inctx, int *__ierr ){
*__ierr = VecScatterFinalizeForGPU(
	(VecScatter)PetscToPointer((inctx) ));
}
#if defined(__cplusplus)
}
#endif
