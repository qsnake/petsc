#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* seqaijpthread.c */
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

#include "petscmat.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetnthreads_ MATSETNTHREADS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetnthreads_ matsetnthreads
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetnthreads_ MATGETNTHREADS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetnthreads_ matgetnthreads
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  matsetnthreads_(Mat A,PetscInt *nthreads, int *__ierr ){
*__ierr = MatSetNThreads(
	(Mat)PetscToPointer((A) ),*nthreads);
}
void PETSC_STDCALL  matgetnthreads_(Mat A,PetscInt *nthreads, int *__ierr ){
*__ierr = MatGetNThreads(
	(Mat)PetscToPointer((A) ),nthreads);
}
#if defined(__cplusplus)
}
#endif
