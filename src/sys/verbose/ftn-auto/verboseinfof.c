#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* verboseinfo.c */
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
#define petscinfodeactivateclass_ PETSCINFODEACTIVATECLASS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscinfodeactivateclass_ petscinfodeactivateclass
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscinfoactivateclass_ PETSCINFOACTIVATECLASS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscinfoactivateclass_ petscinfoactivateclass
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscinfodeactivateclass_(int *objclass, int *__ierr ){
*__ierr = PetscInfoDeactivateClass(*objclass);
}
void PETSC_STDCALL  petscinfoactivateclass_(int *objclass, int *__ierr ){
*__ierr = PetscInfoActivateClass(*objclass);
}
#if defined(__cplusplus)
}
#endif
