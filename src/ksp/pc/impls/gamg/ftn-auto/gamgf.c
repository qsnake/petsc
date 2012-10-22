#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* gamg.c */
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

#include "petscpc.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcgamgsetproceqlim_ PCGAMGSETPROCEQLIM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcgamgsetproceqlim_ pcgamgsetproceqlim
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcgamgsetcoarseeqlim_ PCGAMGSETCOARSEEQLIM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcgamgsetcoarseeqlim_ pcgamgsetcoarseeqlim
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcgamgsetrepartitioning_ PCGAMGSETREPARTITIONING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcgamgsetrepartitioning_ pcgamgsetrepartitioning
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcgamgsetuseasmaggs_ PCGAMGSETUSEASMAGGS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcgamgsetuseasmaggs_ pcgamgsetuseasmaggs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcgamgsetnlevels_ PCGAMGSETNLEVELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcgamgsetnlevels_ pcgamgsetnlevels
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcgamgsetthreshold_ PCGAMGSETTHRESHOLD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcgamgsetthreshold_ pcgamgsetthreshold
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcgamgsettype_ PCGAMGSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcgamgsettype_ pcgamgsettype
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  pcgamgsetproceqlim_(PC pc,PetscInt *n, int *__ierr ){
*__ierr = PCGAMGSetProcEqLim(
	(PC)PetscToPointer((pc) ),*n);
}
void PETSC_STDCALL  pcgamgsetcoarseeqlim_(PC pc,PetscInt *n, int *__ierr ){
*__ierr = PCGAMGSetCoarseEqLim(
	(PC)PetscToPointer((pc) ),*n);
}
void PETSC_STDCALL  pcgamgsetrepartitioning_(PC pc,PetscBool *n, int *__ierr ){
*__ierr = PCGAMGSetRepartitioning(
	(PC)PetscToPointer((pc) ),*n);
}
void PETSC_STDCALL  pcgamgsetuseasmaggs_(PC pc,PetscBool *n, int *__ierr ){
*__ierr = PCGAMGSetUseASMAggs(
	(PC)PetscToPointer((pc) ),*n);
}
void PETSC_STDCALL  pcgamgsetnlevels_(PC pc,PetscInt *n, int *__ierr ){
*__ierr = PCGAMGSetNlevels(
	(PC)PetscToPointer((pc) ),*n);
}
void PETSC_STDCALL  pcgamgsetthreshold_(PC pc,PetscReal *n, int *__ierr ){
*__ierr = PCGAMGSetThreshold(
	(PC)PetscToPointer((pc) ),*n);
}
void PETSC_STDCALL  pcgamgsettype_(PC pc, PCGAMGType *type, int *__ierr ){
*__ierr = PCGAMGSetType(
	(PC)PetscToPointer((pc) ),*type);
}
#if defined(__cplusplus)
}
#endif
