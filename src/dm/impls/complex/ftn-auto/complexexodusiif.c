#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* complexexodusii.c */
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
#define dmcomplexcreateexodus_ DMCOMPLEXCREATEEXODUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcomplexcreateexodus_ dmcomplexcreateexodus
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  dmcomplexcreateexodus_(MPI_Fint * comm,PetscInt *exoid,DM *dm, int *__ierr ){
*__ierr = DMComplexCreateExodus(
	MPI_Comm_f2c( *(comm) ),*exoid,dm);
}
#if defined(__cplusplus)
}
#endif
