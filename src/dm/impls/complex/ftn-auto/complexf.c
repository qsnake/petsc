#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* complex.c */
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

#include "petscdmcomplex.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcomplexgetdimension_ DMCOMPLEXGETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcomplexgetdimension_ dmcomplexgetdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcomplexsetdimension_ DMCOMPLEXSETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcomplexsetdimension_ dmcomplexsetdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcomplexgetchart_ DMCOMPLEXGETCHART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcomplexgetchart_ dmcomplexgetchart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcomplexsetchart_ DMCOMPLEXSETCHART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcomplexsetchart_ dmcomplexsetchart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcomplexgetconesize_ DMCOMPLEXGETCONESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcomplexgetconesize_ dmcomplexgetconesize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcomplexsetconesize_ DMCOMPLEXSETCONESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcomplexsetconesize_ dmcomplexsetconesize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcomplexsetcone_ DMCOMPLEXSETCONE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcomplexsetcone_ dmcomplexsetcone
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcomplexsetconeorientation_ DMCOMPLEXSETCONEORIENTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcomplexsetconeorientation_ dmcomplexsetconeorientation
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcomplexgetsupportsize_ DMCOMPLEXGETSUPPORTSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcomplexgetsupportsize_ dmcomplexgetsupportsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcomplexgetmaxsizes_ DMCOMPLEXGETMAXSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcomplexgetmaxsizes_ dmcomplexgetmaxsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcomplexsymmetrize_ DMCOMPLEXSYMMETRIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcomplexsymmetrize_ dmcomplexsymmetrize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcomplexstratify_ DMCOMPLEXSTRATIFY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcomplexstratify_ dmcomplexstratify
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  dmcomplexgetdimension_(DM dm,PetscInt *dim, int *__ierr ){
*__ierr = DMComplexGetDimension(
	(DM)PetscToPointer((dm) ),dim);
}
void PETSC_STDCALL  dmcomplexsetdimension_(DM dm,PetscInt *dim, int *__ierr ){
*__ierr = DMComplexSetDimension(
	(DM)PetscToPointer((dm) ),*dim);
}
void PETSC_STDCALL  dmcomplexgetchart_(DM dm,PetscInt *pStart,PetscInt *pEnd, int *__ierr ){
*__ierr = DMComplexGetChart(
	(DM)PetscToPointer((dm) ),pStart,pEnd);
}
void PETSC_STDCALL  dmcomplexsetchart_(DM dm,PetscInt *pStart,PetscInt *pEnd, int *__ierr ){
*__ierr = DMComplexSetChart(
	(DM)PetscToPointer((dm) ),*pStart,*pEnd);
}
void PETSC_STDCALL  dmcomplexgetconesize_(DM dm,PetscInt *p,PetscInt *size, int *__ierr ){
*__ierr = DMComplexGetConeSize(
	(DM)PetscToPointer((dm) ),*p,size);
}
void PETSC_STDCALL  dmcomplexsetconesize_(DM dm,PetscInt *p,PetscInt *size, int *__ierr ){
*__ierr = DMComplexSetConeSize(
	(DM)PetscToPointer((dm) ),*p,*size);
}
void PETSC_STDCALL  dmcomplexsetcone_(DM dm,PetscInt *p, PetscInt cone[], int *__ierr ){
*__ierr = DMComplexSetCone(
	(DM)PetscToPointer((dm) ),*p,cone);
}
void PETSC_STDCALL  dmcomplexsetconeorientation_(DM dm,PetscInt *p, PetscInt coneOrientation[], int *__ierr ){
*__ierr = DMComplexSetConeOrientation(
	(DM)PetscToPointer((dm) ),*p,coneOrientation);
}
void PETSC_STDCALL  dmcomplexgetsupportsize_(DM dm,PetscInt *p,PetscInt *size, int *__ierr ){
*__ierr = DMComplexGetSupportSize(
	(DM)PetscToPointer((dm) ),*p,size);
}
void PETSC_STDCALL  dmcomplexgetmaxsizes_(DM dm,PetscInt *maxConeSize,PetscInt *maxSupportSize, int *__ierr ){
*__ierr = DMComplexGetMaxSizes(
	(DM)PetscToPointer((dm) ),maxConeSize,maxSupportSize);
}
void PETSC_STDCALL  dmcomplexsymmetrize_(DM dm, int *__ierr ){
*__ierr = DMComplexSymmetrize(
	(DM)PetscToPointer((dm) ));
}
void PETSC_STDCALL  dmcomplexstratify_(DM dm, int *__ierr ){
*__ierr = DMComplexStratify(
	(DM)PetscToPointer((dm) ));
}
#if defined(__cplusplus)
}
#endif
