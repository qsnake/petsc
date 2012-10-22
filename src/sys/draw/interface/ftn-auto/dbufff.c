#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* dbuff.c */
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

#include "petscdraw.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawisnull_ PETSCDRAWISNULL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawisnull_ petscdrawisnull
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawsetdoublebuffer_ PETSCDRAWSETDOUBLEBUFFER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawsetdoublebuffer_ petscdrawsetdoublebuffer
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscdrawisnull_(PetscDraw draw,PetscBool  *yes, int *__ierr ){
*__ierr = PetscDrawIsNull(
	(PetscDraw)PetscToPointer((draw) ),yes);
}
void PETSC_STDCALL  petscdrawsetdoublebuffer_(PetscDraw draw, int *__ierr ){
*__ierr = PetscDrawSetDoubleBuffer(
	(PetscDraw)PetscToPointer((draw) ));
}
#if defined(__cplusplus)
}
#endif
