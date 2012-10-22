#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* cgtype.c */
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
#define kspcgsettype_ KSPCGSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspcgsettype_ kspcgsettype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspcgusesinglereduction_ KSPCGUSESINGLEREDUCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspcgusesinglereduction_ kspcgusesinglereduction
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  kspcgsettype_(KSP ksp,KSPCGType *type, int *__ierr ){
*__ierr = KSPCGSetType(
	(KSP)PetscToPointer((ksp) ),*type);
}
void PETSC_STDCALL  kspcgusesinglereduction_(KSP ksp,PetscBool  *flg, int *__ierr ){
*__ierr = KSPCGUseSingleReduction(
	(KSP)PetscToPointer((ksp) ),*flg);
}
#if defined(__cplusplus)
}
#endif
