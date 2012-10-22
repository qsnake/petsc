#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* nash.c */
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
#define kspnashsetradius_ KSPNASHSETRADIUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspnashsetradius_ kspnashsetradius
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspnashgetnormd_ KSPNASHGETNORMD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspnashgetnormd_ kspnashgetnormd
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspnashgetobjfcn_ KSPNASHGETOBJFCN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspnashgetobjfcn_ kspnashgetobjfcn
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  kspnashsetradius_(KSP ksp,PetscReal *radius, int *__ierr ){
*__ierr = KSPNASHSetRadius(
	(KSP)PetscToPointer((ksp) ),*radius);
}
void PETSC_STDCALL  kspnashgetnormd_(KSP ksp,PetscReal *norm_d, int *__ierr ){
*__ierr = KSPNASHGetNormD(
	(KSP)PetscToPointer((ksp) ),norm_d);
}
void PETSC_STDCALL  kspnashgetobjfcn_(KSP ksp,PetscReal *o_fcn, int *__ierr ){
*__ierr = KSPNASHGetObjFcn(
	(KSP)PetscToPointer((ksp) ),o_fcn);
}
#if defined(__cplusplus)
}
#endif
