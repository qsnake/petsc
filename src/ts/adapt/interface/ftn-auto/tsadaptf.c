#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* tsadapt.c */
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

#include "petscts.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsadaptsetmonitor_ TSADAPTSETMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsadaptsetmonitor_ tsadaptsetmonitor
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsadaptsetsteplimits_ TSADAPTSETSTEPLIMITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsadaptsetsteplimits_ tsadaptsetsteplimits
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsadaptsetfromoptions_ TSADAPTSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsadaptsetfromoptions_ tsadaptsetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsadaptcandidatesclear_ TSADAPTCANDIDATESCLEAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsadaptcandidatesclear_ tsadaptcandidatesclear
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsadaptcheckstage_ TSADAPTCHECKSTAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsadaptcheckstage_ tsadaptcheckstage
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsadaptcreate_ TSADAPTCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsadaptcreate_ tsadaptcreate
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  tsadaptsetmonitor_(TSAdapt adapt,PetscBool *flg, int *__ierr ){
*__ierr = TSAdaptSetMonitor(
	(TSAdapt)PetscToPointer((adapt) ),*flg);
}
void PETSC_STDCALL  tsadaptsetsteplimits_(TSAdapt adapt,PetscReal *hmin,PetscReal *hmax, int *__ierr ){
*__ierr = TSAdaptSetStepLimits(
	(TSAdapt)PetscToPointer((adapt) ),*hmin,*hmax);
}
void PETSC_STDCALL  tsadaptsetfromoptions_(TSAdapt adapt, int *__ierr ){
*__ierr = TSAdaptSetFromOptions(
	(TSAdapt)PetscToPointer((adapt) ));
}
void PETSC_STDCALL  tsadaptcandidatesclear_(TSAdapt adapt, int *__ierr ){
*__ierr = TSAdaptCandidatesClear(
	(TSAdapt)PetscToPointer((adapt) ));
}
void PETSC_STDCALL  tsadaptcheckstage_(TSAdapt adapt,TS ts,PetscBool *accept, int *__ierr ){
*__ierr = TSAdaptCheckStage(
	(TSAdapt)PetscToPointer((adapt) ),
	(TS)PetscToPointer((ts) ),accept);
}
void PETSC_STDCALL  tsadaptcreate_(MPI_Fint * comm,TSAdapt *inadapt, int *__ierr ){
*__ierr = TSAdaptCreate(
	MPI_Comm_f2c( *(comm) ),inadapt);
}
#if defined(__cplusplus)
}
#endif
