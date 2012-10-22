#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* sortd.c */
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

#include "petscsys.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscsortreal_ PETSCSORTREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscsortreal_ petscsortreal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscsortsplit_ PETSCSORTSPLIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscsortsplit_ petscsortsplit
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscsortsplitreal_ PETSCSORTSPLITREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscsortsplitreal_ petscsortsplitreal
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscsortreal_(PetscInt *n,PetscReal v[], int *__ierr ){
*__ierr = PetscSortReal(*n,v);
}
void PETSC_STDCALL  petscsortsplit_(PetscInt *ncut,PetscInt *n,PetscScalar a[],PetscInt idx[], int *__ierr ){
*__ierr = PetscSortSplit(*ncut,*n,a,idx);
}
void PETSC_STDCALL  petscsortsplitreal_(PetscInt *ncut,PetscInt *n,PetscReal a[],PetscInt idx[], int *__ierr ){
*__ierr = PetscSortSplitReal(*ncut,*n,a,idx);
}
#if defined(__cplusplus)
}
#endif
