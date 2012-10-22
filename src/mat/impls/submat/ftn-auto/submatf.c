#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* submat.c */
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
#define matcreatesubmatrix_ MATCREATESUBMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcreatesubmatrix_ matcreatesubmatrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsubmatrixupdate_ MATSUBMATRIXUPDATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsubmatrixupdate_ matsubmatrixupdate
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  matcreatesubmatrix_(Mat A,IS isrow,IS iscol,Mat *newmat, int *__ierr ){
*__ierr = MatCreateSubMatrix(
	(Mat)PetscToPointer((A) ),
	(IS)PetscToPointer((isrow) ),
	(IS)PetscToPointer((iscol) ),newmat);
}
void PETSC_STDCALL  matsubmatrixupdate_(Mat N,Mat A,IS isrow,IS iscol, int *__ierr ){
*__ierr = MatSubMatrixUpdate(
	(Mat)PetscToPointer((N) ),
	(Mat)PetscToPointer((A) ),
	(IS)PetscToPointer((isrow) ),
	(IS)PetscToPointer((iscol) ));
}
#if defined(__cplusplus)
}
#endif
