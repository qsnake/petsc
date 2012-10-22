#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* petscprom.c */
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

#include "petscpc.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcsasetvectors_ PCSASETVECTORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcsasetvectors_ pcsasetvectors
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  pcsasetvectors_(PC pc,PetscInt *nvects,PetscReal *vects, int *__ierr ){
*__ierr = PCSASetVectors(
	(PC)PetscToPointer((pc) ),*nvects,vects);
}
#if defined(__cplusplus)
}
#endif
