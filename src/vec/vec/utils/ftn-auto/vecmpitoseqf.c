#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* vecmpitoseq.c */
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

#include "petscvec.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecscattercreatetoall_ VECSCATTERCREATETOALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecscattercreatetoall_ vecscattercreatetoall
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecscattercreatetozero_ VECSCATTERCREATETOZERO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecscattercreatetozero_ vecscattercreatetozero
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  vecscattercreatetoall_(Vec vin,VecScatter *ctx,Vec *vout, int *__ierr ){
*__ierr = VecScatterCreateToAll(
	(Vec)PetscToPointer((vin) ),ctx,vout);
}
void PETSC_STDCALL  vecscattercreatetozero_(Vec vin,VecScatter *ctx,Vec *vout, int *__ierr ){
*__ierr = VecScatterCreateToZero(
	(Vec)PetscToPointer((vin) ),ctx,vout);
}
#if defined(__cplusplus)
}
#endif
