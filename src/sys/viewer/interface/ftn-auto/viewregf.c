#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* viewreg.c */
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
#define petscviewercreate_ PETSCVIEWERCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewercreate_ petscviewercreate
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscviewercreate_(MPI_Fint * comm,PetscViewer *inviewer, int *__ierr ){
*__ierr = PetscViewerCreate(
	MPI_Comm_f2c( *(comm) ),inviewer);
}
#if defined(__cplusplus)
}
#endif
