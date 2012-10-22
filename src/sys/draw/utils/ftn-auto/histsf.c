#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* hists.c */
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
#define petscdrawhgsetnumberbins_ PETSCDRAWHGSETNUMBERBINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawhgsetnumberbins_ petscdrawhgsetnumberbins
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawhgreset_ PETSCDRAWHGRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawhgreset_ petscdrawhgreset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawhgaddvalue_ PETSCDRAWHGADDVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawhgaddvalue_ petscdrawhgaddvalue
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawhgdraw_ PETSCDRAWHGDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawhgdraw_ petscdrawhgdraw
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawhgprint_ PETSCDRAWHGPRINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawhgprint_ petscdrawhgprint
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawhgsetcolor_ PETSCDRAWHGSETCOLOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawhgsetcolor_ petscdrawhgsetcolor
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawhgsetlimits_ PETSCDRAWHGSETLIMITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawhgsetlimits_ petscdrawhgsetlimits
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawhgcalcstats_ PETSCDRAWHGCALCSTATS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawhgcalcstats_ petscdrawhgcalcstats
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawhgintegerbins_ PETSCDRAWHGINTEGERBINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawhgintegerbins_ petscdrawhgintegerbins
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscdrawhgsetnumberbins_(PetscDrawHG hist,int *bins, int *__ierr ){
*__ierr = PetscDrawHGSetNumberBins(
	(PetscDrawHG)PetscToPointer((hist) ),*bins);
}
void PETSC_STDCALL  petscdrawhgreset_(PetscDrawHG hist, int *__ierr ){
*__ierr = PetscDrawHGReset(
	(PetscDrawHG)PetscToPointer((hist) ));
}
void PETSC_STDCALL  petscdrawhgaddvalue_(PetscDrawHG hist,PetscReal *value, int *__ierr ){
*__ierr = PetscDrawHGAddValue(
	(PetscDrawHG)PetscToPointer((hist) ),*value);
}
void PETSC_STDCALL  petscdrawhgdraw_(PetscDrawHG hist, int *__ierr ){
*__ierr = PetscDrawHGDraw(
	(PetscDrawHG)PetscToPointer((hist) ));
}
void PETSC_STDCALL  petscdrawhgprint_(PetscDrawHG hist, int *__ierr ){
*__ierr = PetscDrawHGPrint(
	(PetscDrawHG)PetscToPointer((hist) ));
}
void PETSC_STDCALL  petscdrawhgsetcolor_(PetscDrawHG hist,int *color, int *__ierr ){
*__ierr = PetscDrawHGSetColor(
	(PetscDrawHG)PetscToPointer((hist) ),*color);
}
void PETSC_STDCALL  petscdrawhgsetlimits_(PetscDrawHG hist,PetscReal *x_min,PetscReal *x_max,int *y_min,int *y_max, int *__ierr ){
*__ierr = PetscDrawHGSetLimits(
	(PetscDrawHG)PetscToPointer((hist) ),*x_min,*x_max,*y_min,*y_max);
}
void PETSC_STDCALL  petscdrawhgcalcstats_(PetscDrawHG hist,PetscBool  *calc, int *__ierr ){
*__ierr = PetscDrawHGCalcStats(
	(PetscDrawHG)PetscToPointer((hist) ),*calc);
}
void PETSC_STDCALL  petscdrawhgintegerbins_(PetscDrawHG hist,PetscBool  *ints, int *__ierr ){
*__ierr = PetscDrawHGIntegerBins(
	(PetscDrawHG)PetscToPointer((hist) ),*ints);
}
#if defined(__cplusplus)
}
#endif
