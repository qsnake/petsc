#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* da2.c */
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

#include "petscdmda.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdacomputefunction_ DMDACOMPUTEFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdacomputefunction_ dmdacomputefunction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdacomputefunction1_ DMDACOMPUTEFUNCTION1
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdacomputefunction1_ dmdacomputefunction1
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdacomputefunctioni1_ DMDACOMPUTEFUNCTIONI1
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdacomputefunctioni1_ dmdacomputefunctioni1
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdacomputefunctionib1_ DMDACOMPUTEFUNCTIONIB1
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdacomputefunctionib1_ dmdacomputefunctionib1
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdacomputejacobian1_ DMDACOMPUTEJACOBIAN1
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdacomputejacobian1_ dmdacomputejacobian1
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  dmdacomputefunction_(DM da,PetscErrorCode (*lf)(void),Vec vu,Vec vfu,void*w, int *__ierr ){
*__ierr = DMDAComputeFunction(
	(DM)PetscToPointer((da) ),lf,
	(Vec)PetscToPointer((vu) ),
	(Vec)PetscToPointer((vfu) ),w);
}
void PETSC_STDCALL  dmdacomputefunction1_(DM da,Vec vu,Vec vfu,void*w, int *__ierr ){
*__ierr = DMDAComputeFunction1(
	(DM)PetscToPointer((da) ),
	(Vec)PetscToPointer((vu) ),
	(Vec)PetscToPointer((vfu) ),w);
}
void PETSC_STDCALL  dmdacomputefunctioni1_(DM da,PetscInt *i,Vec vu,PetscScalar *vfu,void*w, int *__ierr ){
*__ierr = DMDAComputeFunctioni1(
	(DM)PetscToPointer((da) ),*i,
	(Vec)PetscToPointer((vu) ),vfu,w);
}
void PETSC_STDCALL  dmdacomputefunctionib1_(DM da,PetscInt *i,Vec vu,PetscScalar *vfu,void*w, int *__ierr ){
*__ierr = DMDAComputeFunctionib1(
	(DM)PetscToPointer((da) ),*i,
	(Vec)PetscToPointer((vu) ),vfu,w);
}
void PETSC_STDCALL  dmdacomputejacobian1_(DM da,Vec vu,Mat J,void*w, int *__ierr ){
*__ierr = DMDAComputeJacobian1(
	(DM)PetscToPointer((da) ),
	(Vec)PetscToPointer((vu) ),
	(Mat)PetscToPointer((J) ),w);
}
#if defined(__cplusplus)
}
#endif
