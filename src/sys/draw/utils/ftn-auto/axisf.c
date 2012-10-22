#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* axis.c */
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

#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawaxissetlimits_ PETSCDRAWAXISSETLIMITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawaxissetlimits_ petscdrawaxissetlimits
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscdrawaxissetlimits_(PetscDrawAxis axis,PetscReal *xmin,PetscReal *xmax,PetscReal *ymin,PetscReal *ymax, int *__ierr ){
*__ierr = PetscDrawAxisSetLimits(
	(PetscDrawAxis)PetscToPointer((axis) ),*xmin,*xmax,*ymin,*ymax);
}
#if defined(__cplusplus)
}
#endif
