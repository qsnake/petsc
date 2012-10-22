#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* fdda.c */
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
#include "petscmat.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdasetblockfills_ DMDASETBLOCKFILLS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdasetblockfills_ dmdasetblockfills
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetdm_ MATSETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetdm_ matsetdm
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  dmdasetblockfills_(DM da,PetscInt *dfill,PetscInt *ofill, int *__ierr ){
*__ierr = DMDASetBlockFills(
	(DM)PetscToPointer((da) ),dfill,ofill);
}
void PETSC_STDCALL  matsetdm_(Mat mat,DM da, int *__ierr ){
*__ierr = MatSetDM(
	(Mat)PetscToPointer((mat) ),
	(DM)PetscToPointer((da) ));
}
#if defined(__cplusplus)
}
#endif
