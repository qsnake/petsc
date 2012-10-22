#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* dmouse.c */
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
#define petscdrawgetmousebutton_ PETSCDRAWGETMOUSEBUTTON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawgetmousebutton_ petscdrawgetmousebutton
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawsynchronizedgetmousebutton_ PETSCDRAWSYNCHRONIZEDGETMOUSEBUTTON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawsynchronizedgetmousebutton_ petscdrawsynchronizedgetmousebutton
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscdrawgetmousebutton_(PetscDraw draw,PetscDrawButton *button,PetscReal* x_user,PetscReal *y_user,PetscReal *x_phys,PetscReal *y_phys, int *__ierr ){
*__ierr = PetscDrawGetMouseButton(
	(PetscDraw)PetscToPointer((draw) ),
	(PetscDrawButton* )PetscToPointer((button) ),x_user,y_user,x_phys,y_phys);
}
void PETSC_STDCALL  petscdrawsynchronizedgetmousebutton_(PetscDraw draw,PetscDrawButton *button,PetscReal* x_user,PetscReal *y_user,PetscReal *x_phys,PetscReal *y_phys, int *__ierr ){
*__ierr = PetscDrawSynchronizedGetMouseButton(
	(PetscDraw)PetscToPointer((draw) ),
	(PetscDrawButton* )PetscToPointer((button) ),x_user,y_user,x_phys,y_phys);
}
#if defined(__cplusplus)
}
#endif
