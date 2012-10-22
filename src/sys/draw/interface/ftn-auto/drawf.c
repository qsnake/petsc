#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* draw.c */
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
#define petscdrawresizewindow_ PETSCDRAWRESIZEWINDOW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawresizewindow_ petscdrawresizewindow
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawcheckresizedwindow_ PETSCDRAWCHECKRESIZEDWINDOW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawcheckresizedwindow_ petscdrawcheckresizedwindow
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawdestroy_ PETSCDRAWDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawdestroy_ petscdrawdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawgetpopup_ PETSCDRAWGETPOPUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawgetpopup_ petscdrawgetpopup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawsetdisplay_ PETSCDRAWSETDISPLAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawsetdisplay_ petscdrawsetdisplay
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscdrawresizewindow_(PetscDraw draw,int *w,int *h, int *__ierr ){
*__ierr = PetscDrawResizeWindow(
	(PetscDraw)PetscToPointer((draw) ),*w,*h);
}
void PETSC_STDCALL  petscdrawcheckresizedwindow_(PetscDraw draw, int *__ierr ){
*__ierr = PetscDrawCheckResizedWindow(
	(PetscDraw)PetscToPointer((draw) ));
}
void PETSC_STDCALL  petscdrawdestroy_(PetscDraw *draw, int *__ierr ){
*__ierr = PetscDrawDestroy(draw);
}
void PETSC_STDCALL  petscdrawgetpopup_(PetscDraw draw,PetscDraw *popup, int *__ierr ){
*__ierr = PetscDrawGetPopup(
	(PetscDraw)PetscToPointer((draw) ),popup);
}
void PETSC_STDCALL  petscdrawsetdisplay_(PetscDraw draw,char *display, int *__ierr ){
*__ierr = PetscDrawSetDisplay(
	(PetscDraw)PetscToPointer((draw) ),display);
}
#if defined(__cplusplus)
}
#endif
