#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* reg.c */
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
#define petscflistdestroy_ PETSCFLISTDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscflistdestroy_ petscflistdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscflistview_ PETSCFLISTVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscflistview_ petscflistview
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscflistget_ PETSCFLISTGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscflistget_ petscflistget
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscflistduplicate_ PETSCFLISTDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscflistduplicate_ petscflistduplicate
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscflistdestroy_(PetscFList *fl, int *__ierr ){
*__ierr = PetscFListDestroy(fl);
}
void PETSC_STDCALL  petscflistview_(PetscFList list,PetscViewer viewer, int *__ierr ){
*__ierr = PetscFListView(
	(PetscFList)PetscToPointer((list) ),
	(PetscViewer)PetscToPointer((viewer) ));
}
void PETSC_STDCALL  petscflistget_(PetscFList list,char ***array,int *n, int *__ierr ){
*__ierr = PetscFListGet(
	(PetscFList)PetscToPointer((list) ),array,n);
}
void PETSC_STDCALL  petscflistduplicate_(PetscFList fl,PetscFList *nl, int *__ierr ){
*__ierr = PetscFListDuplicate(
	(PetscFList)PetscToPointer((fl) ),nl);
}
#if defined(__cplusplus)
}
#endif
