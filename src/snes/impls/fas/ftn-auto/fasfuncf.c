#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* fasfunc.c */
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

#include "petscsnesfas.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfassettype_ SNESFASSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfassettype_ snesfassettype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfasgettype_ SNESFASGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfasgettype_ snesfasgettype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfasgetlevels_ SNESFASGETLEVELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfasgetlevels_ snesfasgetlevels
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfasgetcyclesnes_ SNESFASGETCYCLESNES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfasgetcyclesnes_ snesfasgetcyclesnes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfassetnumbersmoothup_ SNESFASSETNUMBERSMOOTHUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfassetnumbersmoothup_ snesfassetnumbersmoothup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfassetnumbersmoothdown_ SNESFASSETNUMBERSMOOTHDOWN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfassetnumbersmoothdown_ snesfassetnumbersmoothdown
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfassetcycles_ SNESFASSETCYCLES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfassetcycles_ snesfassetcycles
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfassetmonitor_ SNESFASSETMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfassetmonitor_ snesfassetmonitor
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfascyclesetcycles_ SNESFASCYCLESETCYCLES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfascyclesetcycles_ snesfascyclesetcycles
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfascyclegetsmoother_ SNESFASCYCLEGETSMOOTHER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfascyclegetsmoother_ snesfascyclegetsmoother
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfascyclegetsmootherup_ SNESFASCYCLEGETSMOOTHERUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfascyclegetsmootherup_ snesfascyclegetsmootherup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfascyclegetsmootherdown_ SNESFASCYCLEGETSMOOTHERDOWN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfascyclegetsmootherdown_ snesfascyclegetsmootherdown
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfascyclegetcorrection_ SNESFASCYCLEGETCORRECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfascyclegetcorrection_ snesfascyclegetcorrection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfascyclegetinterpolation_ SNESFASCYCLEGETINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfascyclegetinterpolation_ snesfascyclegetinterpolation
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfascyclegetrestriction_ SNESFASCYCLEGETRESTRICTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfascyclegetrestriction_ snesfascyclegetrestriction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfascyclegetinjection_ SNESFASCYCLEGETINJECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfascyclegetinjection_ snesfascyclegetinjection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfascyclegetrscale_ SNESFASCYCLEGETRSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfascyclegetrscale_ snesfascyclegetrscale
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfascycleisfine_ SNESFASCYCLEISFINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfascycleisfine_ snesfascycleisfine
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfassetinterpolation_ SNESFASSETINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfassetinterpolation_ snesfassetinterpolation
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfasgetinterpolation_ SNESFASGETINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfasgetinterpolation_ snesfasgetinterpolation
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfassetrestriction_ SNESFASSETRESTRICTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfassetrestriction_ snesfassetrestriction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfasgetrestriction_ SNESFASGETRESTRICTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfasgetrestriction_ snesfasgetrestriction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfassetinjection_ SNESFASSETINJECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfassetinjection_ snesfassetinjection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfasgetinjection_ SNESFASGETINJECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfasgetinjection_ snesfasgetinjection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfassetrscale_ SNESFASSETRSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfassetrscale_ snesfassetrscale
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfasgetsmoother_ SNESFASGETSMOOTHER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfasgetsmoother_ snesfasgetsmoother
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfasgetsmootherdown_ SNESFASGETSMOOTHERDOWN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfasgetsmootherdown_ snesfasgetsmootherdown
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfasgetsmootherup_ SNESFASGETSMOOTHERUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfasgetsmootherup_ snesfasgetsmootherup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesfasgetcoarsesolve_ SNESFASGETCOARSESOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesfasgetcoarsesolve_ snesfasgetcoarsesolve
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  snesfassettype_(SNES snes,SNESFASType *fastype, int *__ierr ){
*__ierr = SNESFASSetType(
	(SNES)PetscToPointer((snes) ),*fastype);
}
void PETSC_STDCALL  snesfasgettype_(SNES snes,SNESFASType *fastype, int *__ierr ){
*__ierr = SNESFASGetType(
	(SNES)PetscToPointer((snes) ),
	(SNESFASType* )PetscToPointer((fastype) ));
}
void PETSC_STDCALL  snesfasgetlevels_(SNES snes,PetscInt * levels, int *__ierr ){
*__ierr = SNESFASGetLevels(
	(SNES)PetscToPointer((snes) ),levels);
}
void PETSC_STDCALL  snesfasgetcyclesnes_(SNES snes,PetscInt *level,SNES *lsnes, int *__ierr ){
*__ierr = SNESFASGetCycleSNES(
	(SNES)PetscToPointer((snes) ),*level,lsnes);
}
void PETSC_STDCALL  snesfassetnumbersmoothup_(SNES snes,PetscInt *n, int *__ierr ){
*__ierr = SNESFASSetNumberSmoothUp(
	(SNES)PetscToPointer((snes) ),*n);
}
void PETSC_STDCALL  snesfassetnumbersmoothdown_(SNES snes,PetscInt *n, int *__ierr ){
*__ierr = SNESFASSetNumberSmoothDown(
	(SNES)PetscToPointer((snes) ),*n);
}
void PETSC_STDCALL  snesfassetcycles_(SNES snes,PetscInt *cycles, int *__ierr ){
*__ierr = SNESFASSetCycles(
	(SNES)PetscToPointer((snes) ),*cycles);
}
void PETSC_STDCALL  snesfassetmonitor_(SNES snes,PetscBool *flg, int *__ierr ){
*__ierr = SNESFASSetMonitor(
	(SNES)PetscToPointer((snes) ),*flg);
}
void PETSC_STDCALL  snesfascyclesetcycles_(SNES snes,PetscInt *cycles, int *__ierr ){
*__ierr = SNESFASCycleSetCycles(
	(SNES)PetscToPointer((snes) ),*cycles);
}
void PETSC_STDCALL  snesfascyclegetsmoother_(SNES snes,SNES *smooth, int *__ierr ){
*__ierr = SNESFASCycleGetSmoother(
	(SNES)PetscToPointer((snes) ),smooth);
}
void PETSC_STDCALL  snesfascyclegetsmootherup_(SNES snes,SNES *smoothu, int *__ierr ){
*__ierr = SNESFASCycleGetSmootherUp(
	(SNES)PetscToPointer((snes) ),smoothu);
}
void PETSC_STDCALL  snesfascyclegetsmootherdown_(SNES snes,SNES *smoothd, int *__ierr ){
*__ierr = SNESFASCycleGetSmootherDown(
	(SNES)PetscToPointer((snes) ),smoothd);
}
void PETSC_STDCALL  snesfascyclegetcorrection_(SNES snes,SNES *correction, int *__ierr ){
*__ierr = SNESFASCycleGetCorrection(
	(SNES)PetscToPointer((snes) ),correction);
}
void PETSC_STDCALL  snesfascyclegetinterpolation_(SNES snes,Mat *mat, int *__ierr ){
*__ierr = SNESFASCycleGetInterpolation(
	(SNES)PetscToPointer((snes) ),mat);
}
void PETSC_STDCALL  snesfascyclegetrestriction_(SNES snes,Mat *mat, int *__ierr ){
*__ierr = SNESFASCycleGetRestriction(
	(SNES)PetscToPointer((snes) ),mat);
}
void PETSC_STDCALL  snesfascyclegetinjection_(SNES snes,Mat *mat, int *__ierr ){
*__ierr = SNESFASCycleGetInjection(
	(SNES)PetscToPointer((snes) ),mat);
}
void PETSC_STDCALL  snesfascyclegetrscale_(SNES snes,Vec *vec, int *__ierr ){
*__ierr = SNESFASCycleGetRScale(
	(SNES)PetscToPointer((snes) ),vec);
}
void PETSC_STDCALL  snesfascycleisfine_(SNES snes,PetscBool *flg, int *__ierr ){
*__ierr = SNESFASCycleIsFine(
	(SNES)PetscToPointer((snes) ),flg);
}
void PETSC_STDCALL  snesfassetinterpolation_(SNES snes,PetscInt *level,Mat mat, int *__ierr ){
*__ierr = SNESFASSetInterpolation(
	(SNES)PetscToPointer((snes) ),*level,
	(Mat)PetscToPointer((mat) ));
}
void PETSC_STDCALL  snesfasgetinterpolation_(SNES snes,PetscInt *level,Mat *mat, int *__ierr ){
*__ierr = SNESFASGetInterpolation(
	(SNES)PetscToPointer((snes) ),*level,mat);
}
void PETSC_STDCALL  snesfassetrestriction_(SNES snes,PetscInt *level,Mat mat, int *__ierr ){
*__ierr = SNESFASSetRestriction(
	(SNES)PetscToPointer((snes) ),*level,
	(Mat)PetscToPointer((mat) ));
}
void PETSC_STDCALL  snesfasgetrestriction_(SNES snes,PetscInt *level,Mat *mat, int *__ierr ){
*__ierr = SNESFASGetRestriction(
	(SNES)PetscToPointer((snes) ),*level,mat);
}
void PETSC_STDCALL  snesfassetinjection_(SNES snes,PetscInt *level,Mat mat, int *__ierr ){
*__ierr = SNESFASSetInjection(
	(SNES)PetscToPointer((snes) ),*level,
	(Mat)PetscToPointer((mat) ));
}
void PETSC_STDCALL  snesfasgetinjection_(SNES snes,PetscInt *level,Mat *mat, int *__ierr ){
*__ierr = SNESFASGetInjection(
	(SNES)PetscToPointer((snes) ),*level,mat);
}
void PETSC_STDCALL  snesfassetrscale_(SNES snes,PetscInt *level,Vec rscale, int *__ierr ){
*__ierr = SNESFASSetRScale(
	(SNES)PetscToPointer((snes) ),*level,
	(Vec)PetscToPointer((rscale) ));
}
void PETSC_STDCALL  snesfasgetsmoother_(SNES snes,PetscInt *level,SNES *smooth, int *__ierr ){
*__ierr = SNESFASGetSmoother(
	(SNES)PetscToPointer((snes) ),*level,smooth);
}
void PETSC_STDCALL  snesfasgetsmootherdown_(SNES snes,PetscInt *level,SNES *smooth, int *__ierr ){
*__ierr = SNESFASGetSmootherDown(
	(SNES)PetscToPointer((snes) ),*level,smooth);
}
void PETSC_STDCALL  snesfasgetsmootherup_(SNES snes,PetscInt *level,SNES *smooth, int *__ierr ){
*__ierr = SNESFASGetSmootherUp(
	(SNES)PetscToPointer((snes) ),*level,smooth);
}
void PETSC_STDCALL  snesfasgetcoarsesolve_(SNES snes,SNES *smooth, int *__ierr ){
*__ierr = SNESFASGetCoarseSolve(
	(SNES)PetscToPointer((snes) ),smooth);
}
#if defined(__cplusplus)
}
#endif
