#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* iscoloring.c */
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
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define iscoloringdestroy_ ISCOLORINGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define iscoloringdestroy_ iscoloringdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define ispartitioningtonumbering_ ISPARTITIONINGTONUMBERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define ispartitioningtonumbering_ ispartitioningtonumbering
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define ispartitioningcount_ ISPARTITIONINGCOUNT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define ispartitioningcount_ ispartitioningcount
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define isallgather_ ISALLGATHER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define isallgather_ isallgather
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define iscomplement_ ISCOMPLEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define iscomplement_ iscomplement
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  iscoloringdestroy_(ISColoring *iscoloring, int *__ierr ){
*__ierr = ISColoringDestroy(iscoloring);
}
void PETSC_STDCALL  ispartitioningtonumbering_(IS part,IS *is, int *__ierr ){
*__ierr = ISPartitioningToNumbering(
	(IS)PetscToPointer((part) ),is);
}
void PETSC_STDCALL  ispartitioningcount_(IS part,PetscInt *len,PetscInt count[], int *__ierr ){
*__ierr = ISPartitioningCount(
	(IS)PetscToPointer((part) ),*len,count);
}
void PETSC_STDCALL  isallgather_(IS is,IS *isout, int *__ierr ){
*__ierr = ISAllGather(
	(IS)PetscToPointer((is) ),isout);
}
void PETSC_STDCALL  iscomplement_(IS is,PetscInt *nmin,PetscInt *nmax,IS *isout, int *__ierr ){
*__ierr = ISComplement(
	(IS)PetscToPointer((is) ),*nmin,*nmax,isout);
}
#if defined(__cplusplus)
}
#endif
