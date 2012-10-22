#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* pcset.c */
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
#define pcregisterdestroy_ PCREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcregisterdestroy_ pcregisterdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcsetfromoptions_ PCSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcsetfromoptions_ pcsetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcsetdm_ PCSETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcsetdm_ pcsetdm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcgetdm_ PCGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcgetdm_ pcgetdm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcsetapplicationcontext_ PCSETAPPLICATIONCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcsetapplicationcontext_ pcsetapplicationcontext
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcgetapplicationcontext_ PCGETAPPLICATIONCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcgetapplicationcontext_ pcgetapplicationcontext
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  pcregisterdestroy_(int *__ierr ){
*__ierr = PCRegisterDestroy();
}
void PETSC_STDCALL  pcsetfromoptions_(PC pc, int *__ierr ){
*__ierr = PCSetFromOptions(
	(PC)PetscToPointer((pc) ));
}
void PETSC_STDCALL  pcsetdm_(PC pc,DM dm, int *__ierr ){
*__ierr = PCSetDM(
	(PC)PetscToPointer((pc) ),
	(DM)PetscToPointer((dm) ));
}
void PETSC_STDCALL  pcgetdm_(PC pc,DM *dm, int *__ierr ){
*__ierr = PCGetDM(
	(PC)PetscToPointer((pc) ),dm);
}
void PETSC_STDCALL  pcsetapplicationcontext_(PC pc,void*usrP, int *__ierr ){
*__ierr = PCSetApplicationContext(
	(PC)PetscToPointer((pc) ),usrP);
}
void PETSC_STDCALL  pcgetapplicationcontext_(PC pc,void*usrP, int *__ierr ){
*__ierr = PCGetApplicationContext(
	(PC)PetscToPointer((pc) ),usrP);
}
#if defined(__cplusplus)
}
#endif
