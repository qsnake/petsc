#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* fdmatrix.c */
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

#include "petscmat.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matfdcoloringsetparameters_ MATFDCOLORINGSETPARAMETERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matfdcoloringsetparameters_ matfdcoloringsetparameters
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matfdcoloringsetfromoptions_ MATFDCOLORINGSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matfdcoloringsetfromoptions_ matfdcoloringsetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matfdcoloringcreate_ MATFDCOLORINGCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matfdcoloringcreate_ matfdcoloringcreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matfdcoloringdestroy_ MATFDCOLORINGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matfdcoloringdestroy_ matfdcoloringdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matfdcoloringapply_ MATFDCOLORINGAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matfdcoloringapply_ matfdcoloringapply
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  matfdcoloringsetparameters_(MatFDColoring matfd,PetscReal *error,PetscReal *umin, int *__ierr ){
*__ierr = MatFDColoringSetParameters(
	(MatFDColoring)PetscToPointer((matfd) ),*error,*umin);
}
void PETSC_STDCALL  matfdcoloringsetfromoptions_(MatFDColoring matfd, int *__ierr ){
*__ierr = MatFDColoringSetFromOptions(
	(MatFDColoring)PetscToPointer((matfd) ));
}
void PETSC_STDCALL  matfdcoloringcreate_(Mat mat,ISColoring iscoloring,MatFDColoring *color, int *__ierr ){
*__ierr = MatFDColoringCreate(
	(Mat)PetscToPointer((mat) ),
	(ISColoring)PetscToPointer((iscoloring) ),color);
}
void PETSC_STDCALL  matfdcoloringdestroy_(MatFDColoring *c, int *__ierr ){
*__ierr = MatFDColoringDestroy(c);
}
void PETSC_STDCALL  matfdcoloringapply_(Mat J,MatFDColoring coloring,Vec x1,MatStructure *flag,void*sctx, int *__ierr ){
*__ierr = MatFDColoringApply(
	(Mat)PetscToPointer((J) ),
	(MatFDColoring)PetscToPointer((coloring) ),
	(Vec)PetscToPointer((x1) ),flag,sctx);
}
#if defined(__cplusplus)
}
#endif
