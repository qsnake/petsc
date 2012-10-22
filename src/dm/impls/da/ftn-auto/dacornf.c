#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* dacorn.c */
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

#include "petscdmda.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdasetcoordinates_ DMDASETCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdasetcoordinates_ dmdasetcoordinates
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdasetghostedcoordinates_ DMDASETGHOSTEDCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdasetghostedcoordinates_ dmdasetghostedcoordinates
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdagetcoordinates_ DMDAGETCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdagetcoordinates_ dmdagetcoordinates
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdagetcoordinateda_ DMDAGETCOORDINATEDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdagetcoordinateda_ dmdagetcoordinateda
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdagetghostedcoordinates_ DMDAGETGHOSTEDCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdagetghostedcoordinates_ dmdagetghostedcoordinates
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdagetcorners_ DMDAGETCORNERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdagetcorners_ dmdagetcorners
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdagetlocalboundingbox_ DMDAGETLOCALBOUNDINGBOX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdagetlocalboundingbox_ dmdagetlocalboundingbox
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdagetboundingbox_ DMDAGETBOUNDINGBOX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdagetboundingbox_ dmdagetboundingbox
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdagetreducedda_ DMDAGETREDUCEDDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdagetreducedda_ dmdagetreducedda
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  dmdasetcoordinates_(DM da,Vec c, int *__ierr ){
*__ierr = DMDASetCoordinates(
	(DM)PetscToPointer((da) ),
	(Vec)PetscToPointer((c) ));
}
void PETSC_STDCALL  dmdasetghostedcoordinates_(DM da,Vec c, int *__ierr ){
*__ierr = DMDASetGhostedCoordinates(
	(DM)PetscToPointer((da) ),
	(Vec)PetscToPointer((c) ));
}
void PETSC_STDCALL  dmdagetcoordinates_(DM da,Vec *c, int *__ierr ){
*__ierr = DMDAGetCoordinates(
	(DM)PetscToPointer((da) ),c);
}
void PETSC_STDCALL  dmdagetcoordinateda_(DM da,DM *cda, int *__ierr ){
*__ierr = DMDAGetCoordinateDA(
	(DM)PetscToPointer((da) ),cda);
}
void PETSC_STDCALL  dmdagetghostedcoordinates_(DM da,Vec *c, int *__ierr ){
*__ierr = DMDAGetGhostedCoordinates(
	(DM)PetscToPointer((da) ),c);
}
void PETSC_STDCALL  dmdagetcorners_(DM da,PetscInt *x,PetscInt *y,PetscInt *z,PetscInt *m,PetscInt *n,PetscInt *p, int *__ierr ){
*__ierr = DMDAGetCorners(
	(DM)PetscToPointer((da) ),x,y,z,m,n,p);
}
void PETSC_STDCALL  dmdagetlocalboundingbox_(DM da,PetscReal lmin[],PetscReal lmax[], int *__ierr ){
*__ierr = DMDAGetLocalBoundingBox(
	(DM)PetscToPointer((da) ),lmin,lmax);
}
void PETSC_STDCALL  dmdagetboundingbox_(DM da,PetscReal gmin[],PetscReal gmax[], int *__ierr ){
*__ierr = DMDAGetBoundingBox(
	(DM)PetscToPointer((da) ),gmin,gmax);
}
void PETSC_STDCALL  dmdagetreducedda_(DM da,PetscInt *nfields,DM *nda, int *__ierr ){
*__ierr = DMDAGetReducedDA(
	(DM)PetscToPointer((da) ),*nfields,nda);
}
#if defined(__cplusplus)
}
#endif
