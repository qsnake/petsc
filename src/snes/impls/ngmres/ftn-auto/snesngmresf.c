#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* snesngmres.c */
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

#include "petscsnes.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesngmressetrestarttype_ SNESNGMRESSETRESTARTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesngmressetrestarttype_ snesngmressetrestarttype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesngmressetselecttype_ SNESNGMRESSETSELECTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesngmressetselecttype_ snesngmressetselecttype
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  snesngmressetrestarttype_(SNES snes,SNESNGMRESRestartType *rtype, int *__ierr ){
*__ierr = SNESNGMRESSetRestartType(
	(SNES)PetscToPointer((snes) ),*rtype);
}

void PETSC_STDCALL  snesngmressetselecttype_(SNES snes,SNESNGMRESSelectType *stype, int *__ierr ){
*__ierr = SNESNGMRESSetSelectType(
	(SNES)PetscToPointer((snes) ),*stype);
}
#if defined(__cplusplus)
}
#endif
