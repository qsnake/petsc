#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* bddc.c */
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
#define pcbddcsetcoarseproblemtype_ PCBDDCSETCOARSEPROBLEMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcsetcoarseproblemtype_ pcbddcsetcoarseproblemtype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcsetdirichletboundaries_ PCBDDCSETDIRICHLETBOUNDARIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcsetdirichletboundaries_ pcbddcsetdirichletboundaries
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcsetneumannboundaries_ PCBDDCSETNEUMANNBOUNDARIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcsetneumannboundaries_ pcbddcsetneumannboundaries
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcgetneumannboundaries_ PCBDDCGETNEUMANNBOUNDARIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcgetneumannboundaries_ pcbddcgetneumannboundaries
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcgetdirichletboundaries_ PCBDDCGETDIRICHLETBOUNDARIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcgetdirichletboundaries_ pcbddcgetdirichletboundaries
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcsetdofssplitting_ PCBDDCSETDOFSSPLITTING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcsetdofssplitting_ pcbddcsetdofssplitting
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  pcbddcsetcoarseproblemtype_(PC pc,CoarseProblemType *CPT, int *__ierr ){
*__ierr = PCBDDCSetCoarseProblemType(
	(PC)PetscToPointer((pc) ),*CPT);
}
void PETSC_STDCALL  pcbddcsetdirichletboundaries_(PC pc,IS DirichletBoundaries, int *__ierr ){
*__ierr = PCBDDCSetDirichletBoundaries(
	(PC)PetscToPointer((pc) ),
	(IS)PetscToPointer((DirichletBoundaries) ));
}
void PETSC_STDCALL  pcbddcsetneumannboundaries_(PC pc,IS NeumannBoundaries, int *__ierr ){
*__ierr = PCBDDCSetNeumannBoundaries(
	(PC)PetscToPointer((pc) ),
	(IS)PetscToPointer((NeumannBoundaries) ));
}
void PETSC_STDCALL  pcbddcgetneumannboundaries_(PC pc,IS *NeumannBoundaries, int *__ierr ){
*__ierr = PCBDDCGetNeumannBoundaries(
	(PC)PetscToPointer((pc) ),NeumannBoundaries);
}
void PETSC_STDCALL  pcbddcgetdirichletboundaries_(PC pc,IS *DirichletBoundaries, int *__ierr ){
*__ierr = PCBDDCGetDirichletBoundaries(
	(PC)PetscToPointer((pc) ),DirichletBoundaries);
}
void PETSC_STDCALL  pcbddcsetdofssplitting_(PC pc,PetscInt *n_is,IS ISForDofs[], int *__ierr ){
*__ierr = PCBDDCSetDofsSplitting(
	(PC)PetscToPointer((pc) ),*n_is,ISForDofs);
}
#if defined(__cplusplus)
}
#endif
