#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* signal.c */
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
#define petscdefaultsignalhandler_ PETSCDEFAULTSIGNALHANDLER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdefaultsignalhandler_ petscdefaultsignalhandler
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscpopsignalhandler_ PETSCPOPSIGNALHANDLER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscpopsignalhandler_ petscpopsignalhandler
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscdefaultsignalhandler_(int *sig,void*ptr, int *__ierr ){
*__ierr = PetscDefaultSignalHandler(*sig,ptr);
}
void PETSC_STDCALL  petscpopsignalhandler_(int *__ierr ){
*__ierr = PetscPopSignalHandler();
}
#if defined(__cplusplus)
}
#endif
