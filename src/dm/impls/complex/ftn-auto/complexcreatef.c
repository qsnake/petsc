#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* complexcreate.c */
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

#include "petscdmcomplex.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcomplexcreate_ DMCOMPLEXCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcomplexcreate_ dmcomplexcreate
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  dmcomplexcreate_(MPI_Fint * comm,DM *mesh, int *__ierr ){
*__ierr = DMComplexCreate(
	MPI_Comm_f2c( *(comm) ),mesh);
}
#if defined(__cplusplus)
}
#endif
