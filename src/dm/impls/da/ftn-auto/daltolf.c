#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* daltol.c */
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

#include "petscdmda.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdalocaltolocalbegin_ DMDALOCALTOLOCALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdalocaltolocalbegin_ dmdalocaltolocalbegin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdalocaltolocalend_ DMDALOCALTOLOCALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdalocaltolocalend_ dmdalocaltolocalend
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  dmdalocaltolocalbegin_(DM da,Vec g,InsertMode *mode,Vec l, int *__ierr ){
*__ierr = DMDALocalToLocalBegin(
	(DM)PetscToPointer((da) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
void PETSC_STDCALL  dmdalocaltolocalend_(DM da,Vec g,InsertMode *mode,Vec l, int *__ierr ){
*__ierr = DMDALocalToLocalEnd(
	(DM)PetscToPointer((da) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
#if defined(__cplusplus)
}
#endif
