#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* sorti.c */
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

#include "petscsys.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscsortint_ PETSCSORTINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscsortint_ petscsortint
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscsortremovedupsint_ PETSCSORTREMOVEDUPSINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscsortremovedupsint_ petscsortremovedupsint
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscsortintwitharray_ PETSCSORTINTWITHARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscsortintwitharray_ petscsortintwitharray
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscsortintwitharraypair_ PETSCSORTINTWITHARRAYPAIR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscsortintwitharraypair_ petscsortintwitharraypair
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscsortmpiintwitharray_ PETSCSORTMPIINTWITHARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscsortmpiintwitharray_ petscsortmpiintwitharray
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscsortintwithscalararray_ PETSCSORTINTWITHSCALARARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscsortintwithscalararray_ petscsortintwithscalararray
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscmergeintarraypair_ PETSCMERGEINTARRAYPAIR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscmergeintarraypair_ petscmergeintarraypair
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscprocesstree_ PETSCPROCESSTREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscprocesstree_ petscprocesstree
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscsortint_(PetscInt *n,PetscInt i[], int *__ierr ){
*__ierr = PetscSortInt(*n,i);
}
void PETSC_STDCALL  petscsortremovedupsint_(PetscInt *n,PetscInt ii[], int *__ierr ){
*__ierr = PetscSortRemoveDupsInt(n,ii);
}
void PETSC_STDCALL  petscsortintwitharray_(PetscInt *n,PetscInt i[],PetscInt Ii[], int *__ierr ){
*__ierr = PetscSortIntWithArray(*n,i,Ii);
}
void PETSC_STDCALL  petscsortintwitharraypair_(PetscInt *n,PetscInt *L,PetscInt *J,PetscInt *K, int *__ierr ){
*__ierr = PetscSortIntWithArrayPair(*n,L,J,K);
}
void PETSC_STDCALL  petscsortmpiintwitharray_(PetscMPIInt *n,PetscMPIInt i[],PetscMPIInt Ii[], int *__ierr ){
*__ierr = PetscSortMPIIntWithArray(*n,i,Ii);
}
void PETSC_STDCALL  petscsortintwithscalararray_(PetscInt *n,PetscInt i[],PetscScalar Ii[], int *__ierr ){
*__ierr = PetscSortIntWithScalarArray(*n,i,Ii);
}
void PETSC_STDCALL  petscmergeintarraypair_(PetscInt *an, PetscInt *aI, PetscInt *aJ,PetscInt *bn, PetscInt *bI, PetscInt *bJ,PetscInt *n,PetscInt **L,PetscInt **J, int *__ierr ){
*__ierr = PetscMergeIntArrayPair(*an,aI,aJ,*bn,bI,bJ,n,L,J);
}
void PETSC_STDCALL  petscprocesstree_(PetscInt *n, PetscBool  mask[], PetscInt parentid[],PetscInt *Nlevels,PetscInt **Level,PetscInt **Levelcnt,PetscInt **Idbylevel,PetscInt **Column, int *__ierr ){
*__ierr = PetscProcessTree(*n,mask,parentid,Nlevels,Level,Levelcnt,Idbylevel,Column);
}
#if defined(__cplusplus)
}
#endif
