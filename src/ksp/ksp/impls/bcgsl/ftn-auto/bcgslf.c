#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* bcgsl.c */
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

#include "petscksp.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspbcgslsetxres_ KSPBCGSLSETXRES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspbcgslsetxres_ kspbcgslsetxres
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspbcgslsetpol_ KSPBCGSLSETPOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspbcgslsetpol_ kspbcgslsetpol
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspbcgslsetell_ KSPBCGSLSETELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspbcgslsetell_ kspbcgslsetell
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  kspbcgslsetxres_(KSP ksp,PetscReal *delta, int *__ierr ){
*__ierr = KSPBCGSLSetXRes(
	(KSP)PetscToPointer((ksp) ),*delta);
}
void PETSC_STDCALL  kspbcgslsetpol_(KSP ksp,PetscBool  *uMROR, int *__ierr ){
*__ierr = KSPBCGSLSetPol(
	(KSP)PetscToPointer((ksp) ),*uMROR);
}
void PETSC_STDCALL  kspbcgslsetell_(KSP ksp,PetscInt *ell, int *__ierr ){
*__ierr = KSPBCGSLSetEll(
	(KSP)PetscToPointer((ksp) ),*ell);
}
#if defined(__cplusplus)
}
#endif
