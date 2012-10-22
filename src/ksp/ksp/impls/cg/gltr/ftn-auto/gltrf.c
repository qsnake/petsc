#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* gltr.c */
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
#define kspgltrsetradius_ KSPGLTRSETRADIUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspgltrsetradius_ kspgltrsetradius
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspgltrgetnormd_ KSPGLTRGETNORMD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspgltrgetnormd_ kspgltrgetnormd
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspgltrgetobjfcn_ KSPGLTRGETOBJFCN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspgltrgetobjfcn_ kspgltrgetobjfcn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspgltrgetmineig_ KSPGLTRGETMINEIG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspgltrgetmineig_ kspgltrgetmineig
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspgltrgetlambda_ KSPGLTRGETLAMBDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspgltrgetlambda_ kspgltrgetlambda
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  kspgltrsetradius_(KSP ksp,PetscReal *radius, int *__ierr ){
*__ierr = KSPGLTRSetRadius(
	(KSP)PetscToPointer((ksp) ),*radius);
}
void PETSC_STDCALL  kspgltrgetnormd_(KSP ksp,PetscReal *norm_d, int *__ierr ){
*__ierr = KSPGLTRGetNormD(
	(KSP)PetscToPointer((ksp) ),norm_d);
}
void PETSC_STDCALL  kspgltrgetobjfcn_(KSP ksp,PetscReal *o_fcn, int *__ierr ){
*__ierr = KSPGLTRGetObjFcn(
	(KSP)PetscToPointer((ksp) ),o_fcn);
}
void PETSC_STDCALL  kspgltrgetmineig_(KSP ksp,PetscReal *e_min, int *__ierr ){
*__ierr = KSPGLTRGetMinEig(
	(KSP)PetscToPointer((ksp) ),e_min);
}
void PETSC_STDCALL  kspgltrgetlambda_(KSP ksp,PetscReal *lambda, int *__ierr ){
*__ierr = KSPGLTRGetLambda(
	(KSP)PetscToPointer((ksp) ),lambda);
}
#if defined(__cplusplus)
}
#endif
