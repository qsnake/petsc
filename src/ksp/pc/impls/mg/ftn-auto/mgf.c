#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* mg.c */
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

#include "petscpcmg.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmggetlevels_ PCMGGETLEVELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmggetlevels_ pcmggetlevels
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmgsettype_ PCMGSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmgsettype_ pcmgsettype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmgsetcycletype_ PCMGSETCYCLETYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmgsetcycletype_ pcmgsetcycletype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmgmultiplicativesetcycles_ PCMGMULTIPLICATIVESETCYCLES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmgmultiplicativesetcycles_ pcmgmultiplicativesetcycles
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmgsetgalerkin_ PCMGSETGALERKIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmgsetgalerkin_ pcmgsetgalerkin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmggetgalerkin_ PCMGGETGALERKIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmggetgalerkin_ pcmggetgalerkin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmgsetnumbersmoothdown_ PCMGSETNUMBERSMOOTHDOWN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmgsetnumbersmoothdown_ pcmgsetnumbersmoothdown
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcmgsetnumbersmoothup_ PCMGSETNUMBERSMOOTHUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcmgsetnumbersmoothup_ pcmgsetnumbersmoothup
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  pcmggetlevels_(PC pc,PetscInt *levels, int *__ierr ){
*__ierr = PCMGGetLevels(
	(PC)PetscToPointer((pc) ),levels);
}
void PETSC_STDCALL  pcmgsettype_(PC pc,PCMGType *form, int *__ierr ){
*__ierr = PCMGSetType(
	(PC)PetscToPointer((pc) ),*form);
}
void PETSC_STDCALL  pcmgsetcycletype_(PC pc,PCMGCycleType *n, int *__ierr ){
*__ierr = PCMGSetCycleType(
	(PC)PetscToPointer((pc) ),*n);
}
void PETSC_STDCALL  pcmgmultiplicativesetcycles_(PC pc,PetscInt *n, int *__ierr ){
*__ierr = PCMGMultiplicativeSetCycles(
	(PC)PetscToPointer((pc) ),*n);
}
void PETSC_STDCALL  pcmgsetgalerkin_(PC pc,PetscBool *use, int *__ierr ){
*__ierr = PCMGSetGalerkin(
	(PC)PetscToPointer((pc) ),*use);
}
void PETSC_STDCALL  pcmggetgalerkin_(PC pc,PetscBool  *galerkin, int *__ierr ){
*__ierr = PCMGGetGalerkin(
	(PC)PetscToPointer((pc) ),galerkin);
}
void PETSC_STDCALL  pcmgsetnumbersmoothdown_(PC pc,PetscInt *n, int *__ierr ){
*__ierr = PCMGSetNumberSmoothDown(
	(PC)PetscToPointer((pc) ),*n);
}
void PETSC_STDCALL  pcmgsetnumbersmoothup_(PC pc,PetscInt *n, int *__ierr ){
*__ierr = PCMGSetNumberSmoothUp(
	(PC)PetscToPointer((pc) ),*n);
}
#if defined(__cplusplus)
}
#endif
