#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* stcg.c */
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
#define kspstcgsetradius_ KSPSTCGSETRADIUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspstcgsetradius_ kspstcgsetradius
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspstcggetnormd_ KSPSTCGGETNORMD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspstcggetnormd_ kspstcggetnormd
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspstcggetobjfcn_ KSPSTCGGETOBJFCN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspstcggetobjfcn_ kspstcggetobjfcn
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  kspstcgsetradius_(KSP ksp,PetscReal *radius, int *__ierr ){
*__ierr = KSPSTCGSetRadius(
	(KSP)PetscToPointer((ksp) ),*radius);
}
void PETSC_STDCALL  kspstcggetnormd_(KSP ksp,PetscReal *norm_d, int *__ierr ){
*__ierr = KSPSTCGGetNormD(
	(KSP)PetscToPointer((ksp) ),norm_d);
}
void PETSC_STDCALL  kspstcggetobjfcn_(KSP ksp,PetscReal *o_fcn, int *__ierr ){
*__ierr = KSPSTCGGetObjFcn(
	(KSP)PetscToPointer((ksp) ),o_fcn);
}
#if defined(__cplusplus)
}
#endif
