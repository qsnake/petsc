#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* drect.c */
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

#include "petscdraw.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawrectangle_ PETSCDRAWRECTANGLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawrectangle_ petscdrawrectangle
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawsave_ PETSCDRAWSAVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawsave_ petscdrawsave
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscdrawrectangle_(PetscDraw draw,PetscReal *xl,PetscReal *yl,PetscReal *xr,PetscReal *yr,int *c1,int *c2,int *c3,int *c4, int *__ierr ){
*__ierr = PetscDrawRectangle(
	(PetscDraw)PetscToPointer((draw) ),*xl,*yl,*xr,*yr,*c1,*c2,*c3,*c4);
}
void PETSC_STDCALL  petscdrawsave_(PetscDraw draw, int *__ierr ){
*__ierr = PetscDrawSave(
	(PetscDraw)PetscToPointer((draw) ));
}
#if defined(__cplusplus)
}
#endif
