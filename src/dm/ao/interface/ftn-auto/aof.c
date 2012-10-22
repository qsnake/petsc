#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* ao.c */
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

#include "petscao.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define aopetsctoapplicationis_ AOPETSCTOAPPLICATIONIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define aopetsctoapplicationis_ aopetsctoapplicationis
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define aoapplicationtopetscis_ AOAPPLICATIONTOPETSCIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define aoapplicationtopetscis_ aoapplicationtopetscis
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define aopetsctoapplication_ AOPETSCTOAPPLICATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define aopetsctoapplication_ aopetsctoapplication
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define aoapplicationtopetsc_ AOAPPLICATIONTOPETSC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define aoapplicationtopetsc_ aoapplicationtopetsc
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define aopetsctoapplicationpermuteint_ AOPETSCTOAPPLICATIONPERMUTEINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define aopetsctoapplicationpermuteint_ aopetsctoapplicationpermuteint
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define aoapplicationtopetscpermuteint_ AOAPPLICATIONTOPETSCPERMUTEINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define aoapplicationtopetscpermuteint_ aoapplicationtopetscpermuteint
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define aopetsctoapplicationpermutereal_ AOPETSCTOAPPLICATIONPERMUTEREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define aopetsctoapplicationpermutereal_ aopetsctoapplicationpermutereal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define aoapplicationtopetscpermutereal_ AOAPPLICATIONTOPETSCPERMUTEREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define aoapplicationtopetscpermutereal_ aoapplicationtopetscpermutereal
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  aopetsctoapplicationis_(AO ao,IS is, int *__ierr ){
*__ierr = AOPetscToApplicationIS(
	(AO)PetscToPointer((ao) ),
	(IS)PetscToPointer((is) ));
}
void PETSC_STDCALL  aoapplicationtopetscis_(AO ao,IS is, int *__ierr ){
*__ierr = AOApplicationToPetscIS(
	(AO)PetscToPointer((ao) ),
	(IS)PetscToPointer((is) ));
}
void PETSC_STDCALL  aopetsctoapplication_(AO ao,PetscInt *n,PetscInt ia[], int *__ierr ){
*__ierr = AOPetscToApplication(
	(AO)PetscToPointer((ao) ),*n,ia);
}
void PETSC_STDCALL  aoapplicationtopetsc_(AO ao,PetscInt *n,PetscInt ia[], int *__ierr ){
*__ierr = AOApplicationToPetsc(
	(AO)PetscToPointer((ao) ),*n,ia);
}
void PETSC_STDCALL  aopetsctoapplicationpermuteint_(AO ao,PetscInt *block,PetscInt array[], int *__ierr ){
*__ierr = AOPetscToApplicationPermuteInt(
	(AO)PetscToPointer((ao) ),*block,array);
}
void PETSC_STDCALL  aoapplicationtopetscpermuteint_(AO ao,PetscInt *block,PetscInt array[], int *__ierr ){
*__ierr = AOApplicationToPetscPermuteInt(
	(AO)PetscToPointer((ao) ),*block,array);
}
void PETSC_STDCALL  aopetsctoapplicationpermutereal_(AO ao,PetscInt *block,PetscReal array[], int *__ierr ){
*__ierr = AOPetscToApplicationPermuteReal(
	(AO)PetscToPointer((ao) ),*block,array);
}
void PETSC_STDCALL  aoapplicationtopetscpermutereal_(AO ao,PetscInt *block,PetscReal array[], int *__ierr ){
*__ierr = AOApplicationToPetscPermuteReal(
	(AO)PetscToPointer((ao) ),*block,array);
}
#if defined(__cplusplus)
}
#endif
