#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* lrc.c */
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
#define matcreatelrc_ MATCREATELRC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcreatelrc_ matcreatelrc
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  matcreatelrc_(Mat A,Mat U,Mat V,Mat *N, int *__ierr ){
*__ierr = MatCreateLRC(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((U) ),
	(Mat)PetscToPointer((V) ),N);
}
#if defined(__cplusplus)
}
#endif
