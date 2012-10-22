#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* multiblock.c */
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
#define snesmultiblocksetfields_ SNESMULTIBLOCKSETFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesmultiblocksetfields_ snesmultiblocksetfields
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesmultiblocksetis_ SNESMULTIBLOCKSETIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesmultiblocksetis_ snesmultiblocksetis
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesmultiblocksettype_ SNESMULTIBLOCKSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesmultiblocksettype_ snesmultiblocksettype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesmultiblocksetblocksize_ SNESMULTIBLOCKSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesmultiblocksetblocksize_ snesmultiblocksetblocksize
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  snesmultiblocksetfields_(SNES snes, char name[],PetscInt *n, PetscInt *fields, int *__ierr ){
*__ierr = SNESMultiblockSetFields(
	(SNES)PetscToPointer((snes) ),name,*n,fields);
}
void PETSC_STDCALL  snesmultiblocksetis_(SNES snes, char name[],IS is, int *__ierr ){
*__ierr = SNESMultiblockSetIS(
	(SNES)PetscToPointer((snes) ),name,
	(IS)PetscToPointer((is) ));
}
void PETSC_STDCALL  snesmultiblocksettype_(SNES snes,PCCompositeType *type, int *__ierr ){
*__ierr = SNESMultiblockSetType(
	(SNES)PetscToPointer((snes) ),*type);
}
void PETSC_STDCALL  snesmultiblocksetblocksize_(SNES snes,PetscInt *bs, int *__ierr ){
*__ierr = SNESMultiblockSetBlockSize(
	(SNES)PetscToPointer((snes) ),*bs);
}
#if defined(__cplusplus)
}
#endif
