#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* dupl.c */
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

#include "petscviewer.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewergetsingleton_ PETSCVIEWERGETSINGLETON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewergetsingleton_ petscviewergetsingleton
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerrestoresingleton_ PETSCVIEWERRESTORESINGLETON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerrestoresingleton_ petscviewerrestoresingleton
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewergetsubcomm_ PETSCVIEWERGETSUBCOMM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewergetsubcomm_ petscviewergetsubcomm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerrestoresubcomm_ PETSCVIEWERRESTORESUBCOMM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerrestoresubcomm_ petscviewerrestoresubcomm
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscviewergetsingleton_(PetscViewer viewer,PetscViewer *outviewer, int *__ierr ){
*__ierr = PetscViewerGetSingleton(
	(PetscViewer)PetscToPointer((viewer) ),outviewer);
}
void PETSC_STDCALL  petscviewerrestoresingleton_(PetscViewer viewer,PetscViewer *outviewer, int *__ierr ){
*__ierr = PetscViewerRestoreSingleton(
	(PetscViewer)PetscToPointer((viewer) ),outviewer);
}
void PETSC_STDCALL  petscviewergetsubcomm_(PetscViewer viewer,MPI_Fint * subcomm,PetscViewer *outviewer, int *__ierr ){
*__ierr = PetscViewerGetSubcomm(
	(PetscViewer)PetscToPointer((viewer) ),
	MPI_Comm_f2c( *(subcomm) ),outviewer);
}
void PETSC_STDCALL  petscviewerrestoresubcomm_(PetscViewer viewer,MPI_Fint * subcomm,PetscViewer *outviewer, int *__ierr ){
*__ierr = PetscViewerRestoreSubcomm(
	(PetscViewer)PetscToPointer((viewer) ),
	MPI_Comm_f2c( *(subcomm) ),outviewer);
}
#if defined(__cplusplus)
}
#endif
