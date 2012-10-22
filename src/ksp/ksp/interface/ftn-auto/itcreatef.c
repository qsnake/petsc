#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* itcreate.c */
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

#include "petscksp.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspsetnormtype_ KSPSETNORMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspsetnormtype_ kspsetnormtype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspsetchecknormiteration_ KSPSETCHECKNORMITERATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspsetchecknormiteration_ kspsetchecknormiteration
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspsetlagnorm_ KSPSETLAGNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspsetlagnorm_ kspsetlagnorm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspsetsupportednorm_ KSPSETSUPPORTEDNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspsetsupportednorm_ kspsetsupportednorm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspgetnormtype_ KSPGETNORMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspgetnormtype_ kspgetnormtype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspsetoperators_ KSPSETOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspsetoperators_ kspsetoperators
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspgetoperators_ KSPGETOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspgetoperators_ kspgetoperators
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspcreate_ KSPCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspcreate_ kspcreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspregisterdestroy_ KSPREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspregisterdestroy_ kspregisterdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspsetnullspace_ KSPSETNULLSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspsetnullspace_ kspsetnullspace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspgetnullspace_ KSPGETNULLSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspgetnullspace_ kspgetnullspace
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  kspsetnormtype_(KSP ksp,KSPNormType *normtype, int *__ierr ){
*__ierr = KSPSetNormType(
	(KSP)PetscToPointer((ksp) ),*normtype);
}
void PETSC_STDCALL  kspsetchecknormiteration_(KSP ksp,PetscInt *it, int *__ierr ){
*__ierr = KSPSetCheckNormIteration(
	(KSP)PetscToPointer((ksp) ),*it);
}
void PETSC_STDCALL  kspsetlagnorm_(KSP ksp,PetscBool  *flg, int *__ierr ){
*__ierr = KSPSetLagNorm(
	(KSP)PetscToPointer((ksp) ),*flg);
}
void PETSC_STDCALL  kspsetsupportednorm_(KSP ksp,KSPNormType *normtype,PCSide *pcside,PetscInt *priority, int *__ierr ){
*__ierr = KSPSetSupportedNorm(
	(KSP)PetscToPointer((ksp) ),*normtype,*pcside,*priority);
}
void PETSC_STDCALL  kspgetnormtype_(KSP ksp,KSPNormType *normtype, int *__ierr ){
*__ierr = KSPGetNormType(
	(KSP)PetscToPointer((ksp) ),
	(KSPNormType* )PetscToPointer((normtype) ));
}
void PETSC_STDCALL  kspsetoperators_(KSP ksp,Mat Amat,Mat Pmat,MatStructure *flag, int *__ierr ){
*__ierr = KSPSetOperators(
	(KSP)PetscToPointer((ksp) ),
	(Mat)PetscToPointer((Amat) ),
	(Mat)PetscToPointer((Pmat) ),*flag);
}
void PETSC_STDCALL  kspgetoperators_(KSP ksp,Mat *Amat,Mat *Pmat,MatStructure *flag, int *__ierr ){
*__ierr = KSPGetOperators(
	(KSP)PetscToPointer((ksp) ),Amat,Pmat,flag);
}
void PETSC_STDCALL  kspcreate_(MPI_Fint * comm,KSP *inksp, int *__ierr ){
*__ierr = KSPCreate(
	MPI_Comm_f2c( *(comm) ),inksp);
}
void PETSC_STDCALL  kspregisterdestroy_(int *__ierr ){
*__ierr = KSPRegisterDestroy();
}
void PETSC_STDCALL  kspsetnullspace_(KSP ksp,MatNullSpace nullsp, int *__ierr ){
*__ierr = KSPSetNullSpace(
	(KSP)PetscToPointer((ksp) ),
	(MatNullSpace)PetscToPointer((nullsp) ));
}
void PETSC_STDCALL  kspgetnullspace_(KSP ksp,MatNullSpace *nullsp, int *__ierr ){
*__ierr = KSPGetNullSpace(
	(KSP)PetscToPointer((ksp) ),nullsp);
}
#if defined(__cplusplus)
}
#endif
