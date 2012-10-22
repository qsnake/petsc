#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* binv.c */
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
#define petscviewerbinaryskipinfo_ PETSCVIEWERBINARYSKIPINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerbinaryskipinfo_ petscviewerbinaryskipinfo
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerbinarysetskipoptions_ PETSCVIEWERBINARYSETSKIPOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerbinarysetskipoptions_ petscviewerbinarysetskipoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerbinarygetskipoptions_ PETSCVIEWERBINARYGETSKIPOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerbinarygetskipoptions_ petscviewerbinarygetskipoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerbinarysetskipheader_ PETSCVIEWERBINARYSETSKIPHEADER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerbinarysetskipheader_ petscviewerbinarysetskipheader
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerbinarygetskipheader_ PETSCVIEWERBINARYGETSKIPHEADER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerbinarygetskipheader_ petscviewerbinarygetskipheader
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerbinarysetmpiio_ PETSCVIEWERBINARYSETMPIIO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerbinarysetmpiio_ petscviewerbinarysetmpiio
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscviewerbinaryskipinfo_(PetscViewer viewer, int *__ierr ){
*__ierr = PetscViewerBinarySkipInfo(
	(PetscViewer)PetscToPointer((viewer) ));
}
void PETSC_STDCALL  petscviewerbinarysetskipoptions_(PetscViewer viewer,PetscBool  *skip, int *__ierr ){
*__ierr = PetscViewerBinarySetSkipOptions(
	(PetscViewer)PetscToPointer((viewer) ),*skip);
}
void PETSC_STDCALL  petscviewerbinarygetskipoptions_(PetscViewer viewer,PetscBool  *skip, int *__ierr ){
*__ierr = PetscViewerBinaryGetSkipOptions(
	(PetscViewer)PetscToPointer((viewer) ),skip);
}
void PETSC_STDCALL  petscviewerbinarysetskipheader_(PetscViewer viewer,PetscBool  *skip, int *__ierr ){
*__ierr = PetscViewerBinarySetSkipHeader(
	(PetscViewer)PetscToPointer((viewer) ),*skip);
}
void PETSC_STDCALL  petscviewerbinarygetskipheader_(PetscViewer viewer,PetscBool  *skip, int *__ierr ){
*__ierr = PetscViewerBinaryGetSkipHeader(
	(PetscViewer)PetscToPointer((viewer) ),skip);
}
void PETSC_STDCALL  petscviewerbinarysetmpiio_(PetscViewer viewer, int *__ierr ){
*__ierr = PetscViewerBinarySetMPIIO(
	(PetscViewer)PetscToPointer((viewer) ));
}
#if defined(__cplusplus)
}
#endif
