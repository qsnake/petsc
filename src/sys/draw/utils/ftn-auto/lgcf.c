#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* lgc.c */
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
#define petscdrawlggetaxis_ PETSCDRAWLGGETAXIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlggetaxis_ petscdrawlggetaxis
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlggetdraw_ PETSCDRAWLGGETDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlggetdraw_ petscdrawlggetdraw
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgspdraw_ PETSCDRAWLGSPDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgspdraw_ petscdrawlgspdraw
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgcreate_ PETSCDRAWLGCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgcreate_ petscdrawlgcreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgsetcolors_ PETSCDRAWLGSETCOLORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgsetcolors_ petscdrawlgsetcolors
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgsetdimension_ PETSCDRAWLGSETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgsetdimension_ petscdrawlgsetdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgreset_ PETSCDRAWLGRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgreset_ petscdrawlgreset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgdestroy_ PETSCDRAWLGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgdestroy_ petscdrawlgdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgindicatedatapoints_ PETSCDRAWLGINDICATEDATAPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgindicatedatapoints_ petscdrawlgindicatedatapoints
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgdraw_ PETSCDRAWLGDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgdraw_ petscdrawlgdraw
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgprint_ PETSCDRAWLGPRINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgprint_ petscdrawlgprint
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscdrawlggetaxis_(PetscDrawLG lg,PetscDrawAxis *axis, int *__ierr ){
*__ierr = PetscDrawLGGetAxis(
	(PetscDrawLG)PetscToPointer((lg) ),axis);
}
void PETSC_STDCALL  petscdrawlggetdraw_(PetscDrawLG lg,PetscDraw *draw, int *__ierr ){
*__ierr = PetscDrawLGGetDraw(
	(PetscDrawLG)PetscToPointer((lg) ),draw);
}
void PETSC_STDCALL  petscdrawlgspdraw_(PetscDrawLG lg,PetscDrawSP spin, int *__ierr ){
*__ierr = PetscDrawLGSPDraw(
	(PetscDrawLG)PetscToPointer((lg) ),
	(PetscDrawSP)PetscToPointer((spin) ));
}
void PETSC_STDCALL  petscdrawlgcreate_(PetscDraw draw,int *dim,PetscDrawLG *outctx, int *__ierr ){
*__ierr = PetscDrawLGCreate(
	(PetscDraw)PetscToPointer((draw) ),*dim,outctx);
}
void PETSC_STDCALL  petscdrawlgsetcolors_(PetscDrawLG lg, int *colors, int *__ierr ){
*__ierr = PetscDrawLGSetColors(
	(PetscDrawLG)PetscToPointer((lg) ),colors);
}
void PETSC_STDCALL  petscdrawlgsetdimension_(PetscDrawLG lg,PetscInt *dim, int *__ierr ){
*__ierr = PetscDrawLGSetDimension(
	(PetscDrawLG)PetscToPointer((lg) ),*dim);
}
void PETSC_STDCALL  petscdrawlgreset_(PetscDrawLG lg, int *__ierr ){
*__ierr = PetscDrawLGReset(
	(PetscDrawLG)PetscToPointer((lg) ));
}
void PETSC_STDCALL  petscdrawlgdestroy_(PetscDrawLG *lg, int *__ierr ){
*__ierr = PetscDrawLGDestroy(lg);
}
void PETSC_STDCALL  petscdrawlgindicatedatapoints_(PetscDrawLG lg, int *__ierr ){
*__ierr = PetscDrawLGIndicateDataPoints(
	(PetscDrawLG)PetscToPointer((lg) ));
}
void PETSC_STDCALL  petscdrawlgdraw_(PetscDrawLG lg, int *__ierr ){
*__ierr = PetscDrawLGDraw(
	(PetscDrawLG)PetscToPointer((lg) ));
}
void PETSC_STDCALL  petscdrawlgprint_(PetscDrawLG lg, int *__ierr ){
*__ierr = PetscDrawLGPrint(
	(PetscDrawLG)PetscToPointer((lg) ));
}
#if defined(__cplusplus)
}
#endif
