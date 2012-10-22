#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* mgfunc.c */
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
#include "petscpcmg.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmggetcoarsesolve_ PCMGGETCOARSESOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmggetcoarsesolve_ pcmggetcoarsesolve
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmgsetinterpolation_ PCMGSETINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmgsetinterpolation_ pcmgsetinterpolation
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmggetinterpolation_ PCMGGETINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmggetinterpolation_ pcmggetinterpolation
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmgsetrestriction_ PCMGSETRESTRICTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmgsetrestriction_ pcmgsetrestriction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmggetrestriction_ PCMGGETRESTRICTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmggetrestriction_ pcmggetrestriction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmgsetrscale_ PCMGSETRSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmgsetrscale_ pcmgsetrscale
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmggetrscale_ PCMGGETRSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmggetrscale_ pcmggetrscale
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmggetsmoother_ PCMGGETSMOOTHER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmggetsmoother_ pcmggetsmoother
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmggetsmootherup_ PCMGGETSMOOTHERUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmggetsmootherup_ pcmggetsmootherup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmggetsmootherdown_ PCMGGETSMOOTHERDOWN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmggetsmootherdown_ pcmggetsmootherdown
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmgsetcyclesonlevel_ PCMGSETCYCLESONLEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmgsetcyclesonlevel_ pcmgsetcyclesonlevel
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmgsetrhs_ PCMGSETRHS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmgsetrhs_ pcmgsetrhs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmgsetx_ PCMGSETX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmgsetx_ pcmgsetx
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmgsetr_ PCMGSETR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmgsetr_ pcmgsetr
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  pcmggetcoarsesolve_(PC pc,KSP *ksp, int *__ierr ){
*__ierr = PCMGGetCoarseSolve(
	(PC)PetscToPointer((pc) ),ksp);
}
void PETSC_STDCALL  pcmgsetinterpolation_(PC pc,PetscInt *l,Mat mat, int *__ierr ){
*__ierr = PCMGSetInterpolation(
	(PC)PetscToPointer((pc) ),*l,
	(Mat)PetscToPointer((mat) ));
}
void PETSC_STDCALL  pcmggetinterpolation_(PC pc,PetscInt *l,Mat *mat, int *__ierr ){
*__ierr = PCMGGetInterpolation(
	(PC)PetscToPointer((pc) ),*l,mat);
}
void PETSC_STDCALL  pcmgsetrestriction_(PC pc,PetscInt *l,Mat mat, int *__ierr ){
*__ierr = PCMGSetRestriction(
	(PC)PetscToPointer((pc) ),*l,
	(Mat)PetscToPointer((mat) ));
}
void PETSC_STDCALL  pcmggetrestriction_(PC pc,PetscInt *l,Mat *mat, int *__ierr ){
*__ierr = PCMGGetRestriction(
	(PC)PetscToPointer((pc) ),*l,mat);
}
void PETSC_STDCALL  pcmgsetrscale_(PC pc,PetscInt *l,Vec rscale, int *__ierr ){
*__ierr = PCMGSetRScale(
	(PC)PetscToPointer((pc) ),*l,
	(Vec)PetscToPointer((rscale) ));
}
void PETSC_STDCALL  pcmggetrscale_(PC pc,PetscInt *l,Vec *rscale, int *__ierr ){
*__ierr = PCMGGetRScale(
	(PC)PetscToPointer((pc) ),*l,rscale);
}
void PETSC_STDCALL  pcmggetsmoother_(PC pc,PetscInt *l,KSP *ksp, int *__ierr ){
*__ierr = PCMGGetSmoother(
	(PC)PetscToPointer((pc) ),*l,ksp);
}
void PETSC_STDCALL  pcmggetsmootherup_(PC pc,PetscInt *l,KSP *ksp, int *__ierr ){
*__ierr = PCMGGetSmootherUp(
	(PC)PetscToPointer((pc) ),*l,ksp);
}
void PETSC_STDCALL  pcmggetsmootherdown_(PC pc,PetscInt *l,KSP *ksp, int *__ierr ){
*__ierr = PCMGGetSmootherDown(
	(PC)PetscToPointer((pc) ),*l,ksp);
}
void PETSC_STDCALL  pcmgsetcyclesonlevel_(PC pc,PetscInt *l,PetscInt *c, int *__ierr ){
*__ierr = PCMGSetCyclesOnLevel(
	(PC)PetscToPointer((pc) ),*l,*c);
}
void PETSC_STDCALL  pcmgsetrhs_(PC pc,PetscInt *l,Vec c, int *__ierr ){
*__ierr = PCMGSetRhs(
	(PC)PetscToPointer((pc) ),*l,
	(Vec)PetscToPointer((c) ));
}
void PETSC_STDCALL  pcmgsetx_(PC pc,PetscInt *l,Vec c, int *__ierr ){
*__ierr = PCMGSetX(
	(PC)PetscToPointer((pc) ),*l,
	(Vec)PetscToPointer((c) ));
}
void PETSC_STDCALL  pcmgsetr_(PC pc,PetscInt *l,Vec c, int *__ierr ){
*__ierr = PCMGSetR(
	(PC)PetscToPointer((pc) ),*l,
	(Vec)PetscToPointer((c) ));
}
#if defined(__cplusplus)
}
#endif
