#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* adda.c */
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

#include "petscdmadda.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmaddagetmatrixns_ DMADDAGETMATRIXNS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmaddagetmatrixns_ dmaddagetmatrixns
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmaddasetrefinement_ DMADDASETREFINEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmaddasetrefinement_ dmaddasetrefinement
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmaddagetcorners_ DMADDAGETCORNERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmaddagetcorners_ dmaddagetcorners
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmaddagetghostcorners_ DMADDAGETGHOSTCORNERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmaddagetghostcorners_ dmaddagetghostcorners
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  dmaddagetmatrixns_(DM dm,DM dmc, MatType *mtype,Mat *mat, int *__ierr ){
*__ierr = DMADDAGetMatrixNS(
	(DM)PetscToPointer((dm) ),
	(DM)PetscToPointer((dmc) ),*mtype,mat);
}
void PETSC_STDCALL  dmaddasetrefinement_(DM dm,PetscInt *refine,PetscInt *dofrefine, int *__ierr ){
*__ierr = DMADDASetRefinement(
	(DM)PetscToPointer((dm) ),refine,*dofrefine);
}
void PETSC_STDCALL  dmaddagetcorners_(DM dm,PetscInt **lcorner,PetscInt **ucorner, int *__ierr ){
*__ierr = DMADDAGetCorners(
	(DM)PetscToPointer((dm) ),lcorner,ucorner);
}
void PETSC_STDCALL  dmaddagetghostcorners_(DM dm,PetscInt **lcorner,PetscInt **ucorner, int *__ierr ){
*__ierr = DMADDAGetGhostCorners(
	(DM)PetscToPointer((dm) ),lcorner,ucorner);
}
#if defined(__cplusplus)
}
#endif
