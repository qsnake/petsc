#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* lg.c */
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
#define petscdrawlgaddpoint_ PETSCDRAWLGADDPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgaddpoint_ petscdrawlgaddpoint
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgsetlimits_ PETSCDRAWLGSETLIMITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgsetlimits_ petscdrawlgsetlimits
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscdrawlgaddpoint_(PetscDrawLG lg,PetscReal *x,PetscReal *y, int *__ierr ){
*__ierr = PetscDrawLGAddPoint(
	(PetscDrawLG)PetscToPointer((lg) ),x,y);
}
void PETSC_STDCALL  petscdrawlgsetlimits_(PetscDrawLG lg,PetscReal *x_min,PetscReal *x_max,PetscReal *y_min,PetscReal *y_max, int *__ierr ){
*__ierr = PetscDrawLGSetLimits(
	(PetscDrawLG)PetscToPointer((lg) ),*x_min,*x_max,*y_min,*y_max);
}
#if defined(__cplusplus)
}
#endif
