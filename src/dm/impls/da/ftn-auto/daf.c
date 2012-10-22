#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* da.c */
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
#define dmdasetdim_ DMDASETDIM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdasetdim_ dmdasetdim
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdasetsizes_ DMDASETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdasetsizes_ dmdasetsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdasetnumprocs_ DMDASETNUMPROCS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdasetnumprocs_ dmdasetnumprocs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdasetboundarytype_ DMDASETBOUNDARYTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdasetboundarytype_ dmdasetboundarytype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdasetdof_ DMDASETDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdasetdof_ dmdasetdof
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdasetstenciltype_ DMDASETSTENCILTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdasetstenciltype_ dmdasetstenciltype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdasetstencilwidth_ DMDASETSTENCILWIDTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdasetstencilwidth_ dmdasetstencilwidth
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdasetownershipranges_ DMDASETOWNERSHIPRANGES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdasetownershipranges_ dmdasetownershipranges
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdasetinterpolationtype_ DMDASETINTERPOLATIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdasetinterpolationtype_ dmdasetinterpolationtype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdagetinterpolationtype_ DMDAGETINTERPOLATIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdagetinterpolationtype_ dmdagetinterpolationtype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdasetrefinementfactor_ DMDASETREFINEMENTFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdasetrefinementfactor_ dmdasetrefinementfactor
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  dmdasetdim_(DM da,PetscInt *dim, int *__ierr ){
*__ierr = DMDASetDim(
	(DM)PetscToPointer((da) ),*dim);
}
void PETSC_STDCALL  dmdasetsizes_(DM da,PetscInt *M,PetscInt *N,PetscInt *P, int *__ierr ){
*__ierr = DMDASetSizes(
	(DM)PetscToPointer((da) ),*M,*N,*P);
}
void PETSC_STDCALL  dmdasetnumprocs_(DM da,PetscInt *m,PetscInt *n,PetscInt *p, int *__ierr ){
*__ierr = DMDASetNumProcs(
	(DM)PetscToPointer((da) ),*m,*n,*p);
}
void PETSC_STDCALL  dmdasetboundarytype_(DM da,DMDABoundaryType *bx,DMDABoundaryType *by,DMDABoundaryType *bz, int *__ierr ){
*__ierr = DMDASetBoundaryType(
	(DM)PetscToPointer((da) ),*bx,*by,*bz);
}
void PETSC_STDCALL  dmdasetdof_(DM da,PetscInt *dof, int *__ierr ){
*__ierr = DMDASetDof(
	(DM)PetscToPointer((da) ),*dof);
}
void PETSC_STDCALL  dmdasetstenciltype_(DM da,DMDAStencilType *stype, int *__ierr ){
*__ierr = DMDASetStencilType(
	(DM)PetscToPointer((da) ),*stype);
}
void PETSC_STDCALL  dmdasetstencilwidth_(DM da,PetscInt *width, int *__ierr ){
*__ierr = DMDASetStencilWidth(
	(DM)PetscToPointer((da) ),*width);
}
void PETSC_STDCALL  dmdasetownershipranges_(DM da, PetscInt lx[], PetscInt ly[], PetscInt lz[], int *__ierr ){
*__ierr = DMDASetOwnershipRanges(
	(DM)PetscToPointer((da) ),lx,ly,lz);
}
void PETSC_STDCALL  dmdasetinterpolationtype_(DM da,DMDAInterpolationType *ctype, int *__ierr ){
*__ierr = DMDASetInterpolationType(
	(DM)PetscToPointer((da) ),*ctype);
}
void PETSC_STDCALL  dmdagetinterpolationtype_(DM da,DMDAInterpolationType *ctype, int *__ierr ){
*__ierr = DMDAGetInterpolationType(
	(DM)PetscToPointer((da) ),
	(DMDAInterpolationType* )PetscToPointer((ctype) ));
}
void PETSC_STDCALL  dmdasetrefinementfactor_(DM da,PetscInt *refine_x,PetscInt *refine_y,PetscInt *refine_z, int *__ierr ){
*__ierr = DMDASetRefinementFactor(
	(DM)PetscToPointer((da) ),*refine_x,*refine_y,*refine_z);
}
#if defined(__cplusplus)
}
#endif
