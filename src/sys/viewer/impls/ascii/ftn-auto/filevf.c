#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* filev.c */
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
#define petscviewerasciisettab_ PETSCVIEWERASCIISETTAB
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerasciisettab_ petscviewerasciisettab
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerasciigettab_ PETSCVIEWERASCIIGETTAB
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerasciigettab_ petscviewerasciigettab
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerasciiaddtab_ PETSCVIEWERASCIIADDTAB
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerasciiaddtab_ petscviewerasciiaddtab
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerasciisubtracttab_ PETSCVIEWERASCIISUBTRACTTAB
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerasciisubtracttab_ petscviewerasciisubtracttab
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerasciipushtab_ PETSCVIEWERASCIIPUSHTAB
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerasciipushtab_ petscviewerasciipushtab
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerasciipoptab_ PETSCVIEWERASCIIPOPTAB
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerasciipoptab_ petscviewerasciipoptab
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerasciiusetabs_ PETSCVIEWERASCIIUSETABS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerasciiusetabs_ petscviewerasciiusetabs
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscviewerasciisettab_(PetscViewer viewer,PetscInt *tabs, int *__ierr ){
*__ierr = PetscViewerASCIISetTab(
	(PetscViewer)PetscToPointer((viewer) ),*tabs);
}
void PETSC_STDCALL  petscviewerasciigettab_(PetscViewer viewer,PetscInt *tabs, int *__ierr ){
*__ierr = PetscViewerASCIIGetTab(
	(PetscViewer)PetscToPointer((viewer) ),tabs);
}
void PETSC_STDCALL  petscviewerasciiaddtab_(PetscViewer viewer,PetscInt *tabs, int *__ierr ){
*__ierr = PetscViewerASCIIAddTab(
	(PetscViewer)PetscToPointer((viewer) ),*tabs);
}
void PETSC_STDCALL  petscviewerasciisubtracttab_(PetscViewer viewer,PetscInt *tabs, int *__ierr ){
*__ierr = PetscViewerASCIISubtractTab(
	(PetscViewer)PetscToPointer((viewer) ),*tabs);
}
void PETSC_STDCALL  petscviewerasciipushtab_(PetscViewer viewer, int *__ierr ){
*__ierr = PetscViewerASCIIPushTab(
	(PetscViewer)PetscToPointer((viewer) ));
}
void PETSC_STDCALL  petscviewerasciipoptab_(PetscViewer viewer, int *__ierr ){
*__ierr = PetscViewerASCIIPopTab(
	(PetscViewer)PetscToPointer((viewer) ));
}
void PETSC_STDCALL  petscviewerasciiusetabs_(PetscViewer viewer,PetscBool  *flg, int *__ierr ){
*__ierr = PetscViewerASCIIUseTabs(
	(PetscViewer)PetscToPointer((viewer) ),*flg);
}
#if defined(__cplusplus)
}
#endif
