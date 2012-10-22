#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* igacreate.c */
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

#include "petscdmiga.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmigacreate_ DMIGACREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmigacreate_ dmigacreate
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  dmigacreate_(MPI_Fint * comm,DM *iga, int *__ierr ){
*__ierr = DMIGACreate(
	MPI_Comm_f2c( *(comm) ),iga);
}
#if defined(__cplusplus)
}
#endif
