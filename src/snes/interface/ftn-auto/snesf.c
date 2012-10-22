#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* snes.c */
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
#include "petscdmshell.h"
#include "petscsys.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesseterrorifnotconverged_ SNESSETERRORIFNOTCONVERGED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesseterrorifnotconverged_ snesseterrorifnotconverged
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgeterrorifnotconverged_ SNESGETERRORIFNOTCONVERGED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgeterrorifnotconverged_ snesgeterrorifnotconverged
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetfunctiondomainerror_ SNESSETFUNCTIONDOMAINERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetfunctiondomainerror_ snessetfunctiondomainerror
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetfunctiondomainerror_ SNESGETFUNCTIONDOMAINERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetfunctiondomainerror_ snesgetfunctiondomainerror
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetupmatrices_ SNESSETUPMATRICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetupmatrices_ snessetupmatrices
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetfromoptions_ SNESSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetfromoptions_ snessetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetcomputeapplicationcontext_ SNESSETCOMPUTEAPPLICATIONCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetcomputeapplicationcontext_ snessetcomputeapplicationcontext
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetapplicationcontext_ SNESSETAPPLICATIONCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetapplicationcontext_ snessetapplicationcontext
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetapplicationcontext_ SNESGETAPPLICATIONCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetapplicationcontext_ snesgetapplicationcontext
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetiterationnumber_ SNESGETITERATIONNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetiterationnumber_ snesgetiterationnumber
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetiterationnumber_ SNESSETITERATIONNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetiterationnumber_ snessetiterationnumber
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetfunctionnorm_ SNESGETFUNCTIONNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetfunctionnorm_ snesgetfunctionnorm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetfunctionnorm_ SNESSETFUNCTIONNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetfunctionnorm_ snessetfunctionnorm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetnonlinearstepfailures_ SNESGETNONLINEARSTEPFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetnonlinearstepfailures_ snesgetnonlinearstepfailures
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetmaxnonlinearstepfailures_ SNESSETMAXNONLINEARSTEPFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetmaxnonlinearstepfailures_ snessetmaxnonlinearstepfailures
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetmaxnonlinearstepfailures_ SNESGETMAXNONLINEARSTEPFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetmaxnonlinearstepfailures_ snesgetmaxnonlinearstepfailures
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetnumberfunctionevals_ SNESGETNUMBERFUNCTIONEVALS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetnumberfunctionevals_ snesgetnumberfunctionevals
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetlinearsolvefailures_ SNESGETLINEARSOLVEFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetlinearsolvefailures_ snesgetlinearsolvefailures
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetmaxlinearsolvefailures_ SNESSETMAXLINEARSOLVEFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetmaxlinearsolvefailures_ snessetmaxlinearsolvefailures
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetmaxlinearsolvefailures_ SNESGETMAXLINEARSOLVEFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetmaxlinearsolvefailures_ snesgetmaxlinearsolvefailures
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetlinearsolveiterations_ SNESGETLINEARSOLVEITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetlinearsolveiterations_ snesgetlinearsolveiterations
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetksp_ SNESGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetksp_ snesgetksp
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetksp_ SNESSETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetksp_ snessetksp
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snescreate_ SNESCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snescreate_ snescreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetnormtype_ SNESSETNORMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetnormtype_ snessetnormtype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetnormtype_ SNESGETNORMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetnormtype_ snesgetnormtype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetgssweeps_ SNESSETGSSWEEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetgssweeps_ snessetgssweeps
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetgssweeps_ SNESGETGSSWEEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetgssweeps_ snesgetgssweeps
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snescomputefunction_ SNESCOMPUTEFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snescomputefunction_ snescomputefunction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snescomputegs_ SNESCOMPUTEGS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snescomputegs_ snescomputegs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snescomputejacobian_ SNESCOMPUTEJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snescomputejacobian_ snescomputejacobian
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetup_ SNESSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetup_ snessetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesreset_ SNESRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesreset_ snesreset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesdestroy_ SNESDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesdestroy_ snesdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetlagpreconditioner_ SNESSETLAGPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetlagpreconditioner_ snessetlagpreconditioner
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetgridsequence_ SNESSETGRIDSEQUENCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetgridsequence_ snessetgridsequence
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetlagpreconditioner_ SNESGETLAGPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetlagpreconditioner_ snesgetlagpreconditioner
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetlagjacobian_ SNESSETLAGJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetlagjacobian_ snessetlagjacobian
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetlagjacobian_ SNESGETLAGJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetlagjacobian_ snesgetlagjacobian
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessettolerances_ SNESSETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessettolerances_ snessettolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgettolerances_ SNESGETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgettolerances_ snesgettolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessettrustregiontolerance_ SNESSETTRUSTREGIONTOLERANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessettrustregiontolerance_ snessettrustregiontolerance
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesmonitor_ SNESMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesmonitor_ snesmonitor
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetconvergedreason_ SNESGETCONVERGEDREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetconvergedreason_ snesgetconvergedreason
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetconvergencehistory_ SNESSETCONVERGENCEHISTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetconvergencehistory_ snessetconvergencehistory
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesdefaultupdate_ SNESDEFAULTUPDATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesdefaultupdate_ snesdefaultupdate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesregisterdestroy_ SNESREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesregisterdestroy_ snesregisterdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetsolution_ SNESGETSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetsolution_ snesgetsolution
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetsolutionupdate_ SNESGETSOLUTIONUPDATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetsolutionupdate_ snesgetsolutionupdate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneskspsetuseew_ SNESKSPSETUSEEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneskspsetuseew_ sneskspsetuseew
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneskspgetuseew_ SNESKSPGETUSEEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneskspgetuseew_ sneskspgetuseew
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneskspsetparametersew_ SNESKSPSETPARAMETERSEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneskspsetparametersew_ sneskspsetparametersew
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneskspgetparametersew_ SNESKSPGETPARAMETERSEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneskspgetparametersew_ sneskspgetparametersew
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetdm_ SNESSETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetdm_ snessetdm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetdm_ SNESGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetdm_ snesgetdm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetpc_ SNESSETPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetpc_ snessetpc
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetpc_ SNESGETPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetpc_ snesgetpc
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetsneslinesearch_ SNESSETSNESLINESEARCH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetsneslinesearch_ snessetsneslinesearch
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  snesseterrorifnotconverged_(SNES snes,PetscBool  *flg, int *__ierr ){
*__ierr = SNESSetErrorIfNotConverged(
	(SNES)PetscToPointer((snes) ),*flg);
}
void PETSC_STDCALL  snesgeterrorifnotconverged_(SNES snes,PetscBool  *flag, int *__ierr ){
*__ierr = SNESGetErrorIfNotConverged(
	(SNES)PetscToPointer((snes) ),flag);
}
void PETSC_STDCALL  snessetfunctiondomainerror_(SNES snes, int *__ierr ){
*__ierr = SNESSetFunctionDomainError(
	(SNES)PetscToPointer((snes) ));
}
void PETSC_STDCALL  snesgetfunctiondomainerror_(SNES snes,PetscBool *domainerror, int *__ierr ){
*__ierr = SNESGetFunctionDomainError(
	(SNES)PetscToPointer((snes) ),domainerror);
}
void PETSC_STDCALL  snessetupmatrices_(SNES snes, int *__ierr ){
*__ierr = SNESSetUpMatrices(
	(SNES)PetscToPointer((snes) ));
}
void PETSC_STDCALL  snessetfromoptions_(SNES snes, int *__ierr ){
*__ierr = SNESSetFromOptions(
	(SNES)PetscToPointer((snes) ));
}
void PETSC_STDCALL  snessetcomputeapplicationcontext_(SNES snes,PetscErrorCode (*compute)(SNES,void**),PetscErrorCode (*destroy)(void**), int *__ierr ){
*__ierr = SNESSetComputeApplicationContext(
	(SNES)PetscToPointer((snes) ),compute,destroy);
}
void PETSC_STDCALL  snessetapplicationcontext_(SNES snes,void*usrP, int *__ierr ){
*__ierr = SNESSetApplicationContext(
	(SNES)PetscToPointer((snes) ),usrP);
}
void PETSC_STDCALL  snesgetapplicationcontext_(SNES snes,void*usrP, int *__ierr ){
*__ierr = SNESGetApplicationContext(
	(SNES)PetscToPointer((snes) ),usrP);
}
void PETSC_STDCALL  snesgetiterationnumber_(SNES snes,PetscInt* iter, int *__ierr ){
*__ierr = SNESGetIterationNumber(
	(SNES)PetscToPointer((snes) ),iter);
}
void PETSC_STDCALL  snessetiterationnumber_(SNES snes,PetscInt *iter, int *__ierr ){
*__ierr = SNESSetIterationNumber(
	(SNES)PetscToPointer((snes) ),*iter);
}
void PETSC_STDCALL  snesgetfunctionnorm_(SNES snes,PetscReal *fnorm, int *__ierr ){
*__ierr = SNESGetFunctionNorm(
	(SNES)PetscToPointer((snes) ),fnorm);
}
void PETSC_STDCALL  snessetfunctionnorm_(SNES snes,PetscReal *fnorm, int *__ierr ){
*__ierr = SNESSetFunctionNorm(
	(SNES)PetscToPointer((snes) ),*fnorm);
}
void PETSC_STDCALL  snesgetnonlinearstepfailures_(SNES snes,PetscInt* nfails, int *__ierr ){
*__ierr = SNESGetNonlinearStepFailures(
	(SNES)PetscToPointer((snes) ),nfails);
}
void PETSC_STDCALL  snessetmaxnonlinearstepfailures_(SNES snes,PetscInt *maxFails, int *__ierr ){
*__ierr = SNESSetMaxNonlinearStepFailures(
	(SNES)PetscToPointer((snes) ),*maxFails);
}
void PETSC_STDCALL  snesgetmaxnonlinearstepfailures_(SNES snes,PetscInt *maxFails, int *__ierr ){
*__ierr = SNESGetMaxNonlinearStepFailures(
	(SNES)PetscToPointer((snes) ),maxFails);
}
void PETSC_STDCALL  snesgetnumberfunctionevals_(SNES snes,PetscInt *nfuncs, int *__ierr ){
*__ierr = SNESGetNumberFunctionEvals(
	(SNES)PetscToPointer((snes) ),nfuncs);
}
void PETSC_STDCALL  snesgetlinearsolvefailures_(SNES snes,PetscInt* nfails, int *__ierr ){
*__ierr = SNESGetLinearSolveFailures(
	(SNES)PetscToPointer((snes) ),nfails);
}
void PETSC_STDCALL  snessetmaxlinearsolvefailures_(SNES snes,PetscInt *maxFails, int *__ierr ){
*__ierr = SNESSetMaxLinearSolveFailures(
	(SNES)PetscToPointer((snes) ),*maxFails);
}
void PETSC_STDCALL  snesgetmaxlinearsolvefailures_(SNES snes,PetscInt *maxFails, int *__ierr ){
*__ierr = SNESGetMaxLinearSolveFailures(
	(SNES)PetscToPointer((snes) ),maxFails);
}
void PETSC_STDCALL  snesgetlinearsolveiterations_(SNES snes,PetscInt* lits, int *__ierr ){
*__ierr = SNESGetLinearSolveIterations(
	(SNES)PetscToPointer((snes) ),lits);
}
void PETSC_STDCALL  snesgetksp_(SNES snes,KSP *ksp, int *__ierr ){
*__ierr = SNESGetKSP(
	(SNES)PetscToPointer((snes) ),ksp);
}
void PETSC_STDCALL  snessetksp_(SNES snes,KSP ksp, int *__ierr ){
*__ierr = SNESSetKSP(
	(SNES)PetscToPointer((snes) ),
	(KSP)PetscToPointer((ksp) ));
}
void PETSC_STDCALL  snescreate_(MPI_Fint * comm,SNES *outsnes, int *__ierr ){
*__ierr = SNESCreate(
	MPI_Comm_f2c( *(comm) ),outsnes);
}
void PETSC_STDCALL  snessetnormtype_(SNES snes,SNESNormType *normtype, int *__ierr ){
*__ierr = SNESSetNormType(
	(SNES)PetscToPointer((snes) ),*normtype);
}
void PETSC_STDCALL  snesgetnormtype_(SNES snes,SNESNormType *normtype, int *__ierr ){
*__ierr = SNESGetNormType(
	(SNES)PetscToPointer((snes) ),
	(SNESNormType* )PetscToPointer((normtype) ));
}

void PETSC_STDCALL  snessetgssweeps_(SNES snes,PetscInt *sweeps, int *__ierr ){
*__ierr = SNESSetGSSweeps(
	(SNES)PetscToPointer((snes) ),*sweeps);
}
void PETSC_STDCALL  snesgetgssweeps_(SNES snes,PetscInt * sweeps, int *__ierr ){
*__ierr = SNESGetGSSweeps(
	(SNES)PetscToPointer((snes) ),sweeps);
}
void PETSC_STDCALL  snescomputefunction_(SNES snes,Vec x,Vec y, int *__ierr ){
*__ierr = SNESComputeFunction(
	(SNES)PetscToPointer((snes) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  snescomputegs_(SNES snes,Vec b,Vec x, int *__ierr ){
*__ierr = SNESComputeGS(
	(SNES)PetscToPointer((snes) ),
	(Vec)PetscToPointer((b) ),
	(Vec)PetscToPointer((x) ));
}
void PETSC_STDCALL  snescomputejacobian_(SNES snes,Vec X,Mat *A,Mat *B,MatStructure *flg, int *__ierr ){
*__ierr = SNESComputeJacobian(
	(SNES)PetscToPointer((snes) ),
	(Vec)PetscToPointer((X) ),A,B,flg);
}
void PETSC_STDCALL  snessetup_(SNES snes, int *__ierr ){
*__ierr = SNESSetUp(
	(SNES)PetscToPointer((snes) ));
}
void PETSC_STDCALL  snesreset_(SNES snes, int *__ierr ){
*__ierr = SNESReset(
	(SNES)PetscToPointer((snes) ));
}
void PETSC_STDCALL  snesdestroy_(SNES *snes, int *__ierr ){
*__ierr = SNESDestroy(snes);
}
void PETSC_STDCALL  snessetlagpreconditioner_(SNES snes,PetscInt *lag, int *__ierr ){
*__ierr = SNESSetLagPreconditioner(
	(SNES)PetscToPointer((snes) ),*lag);
}
void PETSC_STDCALL  snessetgridsequence_(SNES snes,PetscInt *steps, int *__ierr ){
*__ierr = SNESSetGridSequence(
	(SNES)PetscToPointer((snes) ),*steps);
}
void PETSC_STDCALL  snesgetlagpreconditioner_(SNES snes,PetscInt *lag, int *__ierr ){
*__ierr = SNESGetLagPreconditioner(
	(SNES)PetscToPointer((snes) ),lag);
}
void PETSC_STDCALL  snessetlagjacobian_(SNES snes,PetscInt *lag, int *__ierr ){
*__ierr = SNESSetLagJacobian(
	(SNES)PetscToPointer((snes) ),*lag);
}
void PETSC_STDCALL  snesgetlagjacobian_(SNES snes,PetscInt *lag, int *__ierr ){
*__ierr = SNESGetLagJacobian(
	(SNES)PetscToPointer((snes) ),lag);
}
void PETSC_STDCALL  snessettolerances_(SNES snes,PetscReal *abstol,PetscReal *rtol,PetscReal *stol,PetscInt *maxit,PetscInt *maxf, int *__ierr ){
*__ierr = SNESSetTolerances(
	(SNES)PetscToPointer((snes) ),*abstol,*rtol,*stol,*maxit,*maxf);
}
void PETSC_STDCALL  snesgettolerances_(SNES snes,PetscReal *atol,PetscReal *rtol,PetscReal *stol,PetscInt *maxit,PetscInt *maxf, int *__ierr ){
*__ierr = SNESGetTolerances(
	(SNES)PetscToPointer((snes) ),atol,rtol,stol,maxit,maxf);
}
void PETSC_STDCALL  snessettrustregiontolerance_(SNES snes,PetscReal *tol, int *__ierr ){
*__ierr = SNESSetTrustRegionTolerance(
	(SNES)PetscToPointer((snes) ),*tol);
}
void PETSC_STDCALL  snesmonitor_(SNES snes,PetscInt *iter,PetscReal *rnorm, int *__ierr ){
*__ierr = SNESMonitor(
	(SNES)PetscToPointer((snes) ),*iter,*rnorm);
}
void PETSC_STDCALL  snesgetconvergedreason_(SNES snes,SNESConvergedReason *reason, int *__ierr ){
*__ierr = SNESGetConvergedReason(
	(SNES)PetscToPointer((snes) ),reason);
}
void PETSC_STDCALL  snessetconvergencehistory_(SNES snes,PetscReal a[],PetscInt its[],PetscInt *na,PetscBool  *reset, int *__ierr ){
*__ierr = SNESSetConvergenceHistory(
	(SNES)PetscToPointer((snes) ),a,its,*na,*reset);
}
void PETSC_STDCALL  snesdefaultupdate_(SNES snes,PetscInt *step, int *__ierr ){
*__ierr = SNESDefaultUpdate(
	(SNES)PetscToPointer((snes) ),*step);
}
void PETSC_STDCALL  snesregisterdestroy_(int *__ierr ){
*__ierr = SNESRegisterDestroy();
}
void PETSC_STDCALL  snesgetsolution_(SNES snes,Vec *x, int *__ierr ){
*__ierr = SNESGetSolution(
	(SNES)PetscToPointer((snes) ),x);
}
void PETSC_STDCALL  snesgetsolutionupdate_(SNES snes,Vec *x, int *__ierr ){
*__ierr = SNESGetSolutionUpdate(
	(SNES)PetscToPointer((snes) ),x);
}
void PETSC_STDCALL  sneskspsetuseew_(SNES snes,PetscBool  *flag, int *__ierr ){
*__ierr = SNESKSPSetUseEW(
	(SNES)PetscToPointer((snes) ),*flag);
}
void PETSC_STDCALL  sneskspgetuseew_(SNES snes,PetscBool  *flag, int *__ierr ){
*__ierr = SNESKSPGetUseEW(
	(SNES)PetscToPointer((snes) ),flag);
}
void PETSC_STDCALL  sneskspsetparametersew_(SNES snes,PetscInt *version,PetscReal *rtol_0,PetscReal *rtol_max,
           PetscReal *gamma,PetscReal *alpha,PetscReal *alpha2,PetscReal *threshold, int *__ierr ){
*__ierr = SNESKSPSetParametersEW(
	(SNES)PetscToPointer((snes) ),*version,*rtol_0,*rtol_max,*gamma,*alpha,*alpha2,*threshold);
}
void PETSC_STDCALL  sneskspgetparametersew_(SNES snes,PetscInt *version,PetscReal *rtol_0,PetscReal *rtol_max,
           PetscReal *gamma,PetscReal *alpha,PetscReal *alpha2,PetscReal *threshold, int *__ierr ){
*__ierr = SNESKSPGetParametersEW(
	(SNES)PetscToPointer((snes) ),version,rtol_0,rtol_max,gamma,alpha,alpha2,threshold);
}
void PETSC_STDCALL  snessetdm_(SNES snes,DM dm, int *__ierr ){
*__ierr = SNESSetDM(
	(SNES)PetscToPointer((snes) ),
	(DM)PetscToPointer((dm) ));
}
void PETSC_STDCALL  snesgetdm_(SNES snes,DM *dm, int *__ierr ){
*__ierr = SNESGetDM(
	(SNES)PetscToPointer((snes) ),dm);
}
void PETSC_STDCALL  snessetpc_(SNES snes,SNES pc, int *__ierr ){
*__ierr = SNESSetPC(
	(SNES)PetscToPointer((snes) ),
	(SNES)PetscToPointer((pc) ));
}
void PETSC_STDCALL  snesgetpc_(SNES snes,SNES *pc, int *__ierr ){
*__ierr = SNESGetPC(
	(SNES)PetscToPointer((snes) ),pc);
}
void PETSC_STDCALL  snessetsneslinesearch_(SNES snes,SNESLineSearch linesearch, int *__ierr ){
*__ierr = SNESSetSNESLineSearch(
	(SNES)PetscToPointer((snes) ),
	(SNESLineSearch)PetscToPointer((linesearch) ));
}
#if defined(__cplusplus)
}
#endif
