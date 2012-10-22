#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* composite.c */
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
#include "petscksp.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pccompositesettype_ PCCOMPOSITESETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pccompositesettype_ pccompositesettype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pccompositespecialsetalpha_ PCCOMPOSITESPECIALSETALPHA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pccompositespecialsetalpha_ pccompositespecialsetalpha
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pccompositegetpc_ PCCOMPOSITEGETPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pccompositegetpc_ pccompositegetpc
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pccompositesetusetrue_ PCCOMPOSITESETUSETRUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pccompositesetusetrue_ pccompositesetusetrue
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  pccompositesettype_(PC pc,PCCompositeType *type, int *__ierr ){
*__ierr = PCCompositeSetType(
	(PC)PetscToPointer((pc) ),*type);
}
void PETSC_STDCALL  pccompositespecialsetalpha_(PC pc,PetscScalar *alpha, int *__ierr ){
*__ierr = PCCompositeSpecialSetAlpha(
	(PC)PetscToPointer((pc) ),*alpha);
}
void PETSC_STDCALL  pccompositegetpc_(PC pc,PetscInt *n,PC *subpc, int *__ierr ){
*__ierr = PCCompositeGetPC(
	(PC)PetscToPointer((pc) ),*n,subpc);
}
void PETSC_STDCALL  pccompositesetusetrue_(PC pc, int *__ierr ){
*__ierr = PCCompositeSetUseTrue(
	(PC)PetscToPointer((pc) ));
}
#if defined(__cplusplus)
}
#endif
