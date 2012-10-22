#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* schurm.c */
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

#include "petscmat.h"
#include "petscksp.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matcreateschurcomplement_ MATCREATESCHURCOMPLEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcreateschurcomplement_ matcreateschurcomplement
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matschurcomplementgetksp_ MATSCHURCOMPLEMENTGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matschurcomplementgetksp_ matschurcomplementgetksp
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matschurcomplementupdate_ MATSCHURCOMPLEMENTUPDATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matschurcomplementupdate_ matschurcomplementupdate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetschurcomplement_ MATGETSCHURCOMPLEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetschurcomplement_ matgetschurcomplement
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  matcreateschurcomplement_(Mat A00,Mat Ap00,Mat A01,Mat A10,Mat A11,Mat *N, int *__ierr ){
*__ierr = MatCreateSchurComplement(
	(Mat)PetscToPointer((A00) ),
	(Mat)PetscToPointer((Ap00) ),
	(Mat)PetscToPointer((A01) ),
	(Mat)PetscToPointer((A10) ),
	(Mat)PetscToPointer((A11) ),N);
}
void PETSC_STDCALL  matschurcomplementgetksp_(Mat A,KSP *ksp, int *__ierr ){
*__ierr = MatSchurComplementGetKSP(
	(Mat)PetscToPointer((A) ),ksp);
}
void PETSC_STDCALL  matschurcomplementupdate_(Mat N,Mat A,Mat Ap,Mat B,Mat C,Mat D,MatStructure *str, int *__ierr ){
*__ierr = MatSchurComplementUpdate(
	(Mat)PetscToPointer((N) ),
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((Ap) ),
	(Mat)PetscToPointer((B) ),
	(Mat)PetscToPointer((C) ),
	(Mat)PetscToPointer((D) ),*str);
}
void PETSC_STDCALL  matgetschurcomplement_(Mat mat,IS isrow0,IS iscol0,IS isrow1,IS iscol1,MatReuse *mreuse,Mat *newmat,MatReuse *preuse,Mat *newpmat, int *__ierr ){
*__ierr = MatGetSchurComplement(
	(Mat)PetscToPointer((mat) ),
	(IS)PetscToPointer((isrow0) ),
	(IS)PetscToPointer((iscol0) ),
	(IS)PetscToPointer((isrow1) ),
	(IS)PetscToPointer((iscol1) ),*mreuse,newmat,*preuse,newpmat);
}
#if defined(__cplusplus)
}
#endif
