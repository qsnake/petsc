#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* asm.c */
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
#define pcasmsetoverlap_ PCASMSETOVERLAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcasmsetoverlap_ pcasmsetoverlap
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcasmsettype_ PCASMSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcasmsettype_ pcasmsettype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcasmsetsortindices_ PCASMSETSORTINDICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcasmsetsortindices_ pcasmsetsortindices
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcasmcreatesubdomains2d_ PCASMCREATESUBDOMAINS2D
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcasmcreatesubdomains2d_ pcasmcreatesubdomains2d
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  pcasmsetoverlap_(PC pc,PetscInt *ovl, int *__ierr ){
*__ierr = PCASMSetOverlap(
	(PC)PetscToPointer((pc) ),*ovl);
}
void PETSC_STDCALL  pcasmsettype_(PC pc,PCASMType *type, int *__ierr ){
*__ierr = PCASMSetType(
	(PC)PetscToPointer((pc) ),*type);
}
void PETSC_STDCALL  pcasmsetsortindices_(PC pc,PetscBool  *doSort, int *__ierr ){
*__ierr = PCASMSetSortIndices(
	(PC)PetscToPointer((pc) ),*doSort);
}
void PETSC_STDCALL  pcasmcreatesubdomains2d_(PetscInt *m,PetscInt *n,PetscInt *M,PetscInt *N,PetscInt *dof,PetscInt *overlap,PetscInt *Nsub,IS **is,IS **is_local, int *__ierr ){
*__ierr = PCASMCreateSubdomains2D(*m,*n,*M,*N,*dof,*overlap,Nsub,is,is_local);
}
#if defined(__cplusplus)
}
#endif
