#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* fft.c */
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
#define matcreatefft_ MATCREATEFFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcreatefft_ matcreatefft
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  matcreatefft_(MPI_Fint * comm,PetscInt *ndim, PetscInt dim[], MatType *mattype,Mat* A, int *__ierr ){
*__ierr = MatCreateFFT(
	MPI_Comm_f2c( *(comm) ),*ndim,dim,*mattype,A);
}
#if defined(__cplusplus)
}
#endif
