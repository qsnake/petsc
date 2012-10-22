#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* dmshell.c */
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

#include "petscdmshell.h"
#include "petscmat.h"
#include "petscdm.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmshellsetmatrix_ DMSHELLSETMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmshellsetmatrix_ dmshellsetmatrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmshellsetglobalvector_ DMSHELLSETGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmshellsetglobalvector_ dmshellsetglobalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmshellcreate_ DMSHELLCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmshellcreate_ dmshellcreate
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  dmshellsetmatrix_(DM dm,Mat J, int *__ierr ){
*__ierr = DMShellSetMatrix(
	(DM)PetscToPointer((dm) ),
	(Mat)PetscToPointer((J) ));
}
void PETSC_STDCALL  dmshellsetglobalvector_(DM dm,Vec X, int *__ierr ){
*__ierr = DMShellSetGlobalVector(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((X) ));
}
void PETSC_STDCALL  dmshellcreate_(MPI_Fint * comm,DM *dm, int *__ierr ){
*__ierr = DMShellCreate(
	MPI_Comm_f2c( *(comm) ),dm);
}
#if defined(__cplusplus)
}
#endif
