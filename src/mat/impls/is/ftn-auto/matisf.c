#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* matis.c */
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
#define matisgetlocalmat_ MATISGETLOCALMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matisgetlocalmat_ matisgetlocalmat
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matissetlocalmat_ MATISSETLOCALMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matissetlocalmat_ matissetlocalmat
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matcreateis_ MATCREATEIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcreateis_ matcreateis
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  matisgetlocalmat_(Mat mat,Mat *local, int *__ierr ){
*__ierr = MatISGetLocalMat(
	(Mat)PetscToPointer((mat) ),local);
}
void PETSC_STDCALL  matissetlocalmat_(Mat mat,Mat local, int *__ierr ){
*__ierr = MatISSetLocalMat(
	(Mat)PetscToPointer((mat) ),
	(Mat)PetscToPointer((local) ));
}
void PETSC_STDCALL  matcreateis_(MPI_Fint * comm,PetscInt *bs,PetscInt *m,PetscInt *n,PetscInt *M,PetscInt *N,ISLocalToGlobalMapping map,Mat *A, int *__ierr ){
*__ierr = MatCreateIS(
	MPI_Comm_f2c( *(comm) ),*bs,*m,*n,*M,*N,
	(ISLocalToGlobalMapping)PetscToPointer((map) ),A);
}
#if defined(__cplusplus)
}
#endif
