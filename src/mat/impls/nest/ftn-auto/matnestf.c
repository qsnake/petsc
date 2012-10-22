#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* matnest.c */
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
#define matnestsetsubmats_ MATNESTSETSUBMATS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matnestsetsubmats_ matnestsetsubmats
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matcreatenest_ MATCREATENEST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcreatenest_ matcreatenest
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  matnestsetsubmats_(Mat A,PetscInt *nr, IS is_row[],PetscInt *nc, IS is_col[], Mat a[], int *__ierr ){
*__ierr = MatNestSetSubMats(
	(Mat)PetscToPointer((A) ),*nr,is_row,*nc,is_col,a);
}
void PETSC_STDCALL  matcreatenest_(MPI_Fint * comm,PetscInt *nr, IS is_row[],PetscInt *nc, IS is_col[], Mat a[],Mat *B, int *__ierr ){
*__ierr = MatCreateNest(
	MPI_Comm_f2c( *(comm) ),*nr,is_row,*nc,is_col,a,B);
}
#if defined(__cplusplus)
}
#endif
