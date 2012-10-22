#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* matnull.c */
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
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matnullspacecreaterigidbody_ MATNULLSPACECREATERIGIDBODY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matnullspacecreaterigidbody_ matnullspacecreaterigidbody
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matnullspacecreate_ MATNULLSPACECREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matnullspacecreate_ matnullspacecreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matnullspacedestroy_ MATNULLSPACEDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matnullspacedestroy_ matnullspacedestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matnullspacetest_ MATNULLSPACETEST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matnullspacetest_ matnullspacetest
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  matnullspacecreaterigidbody_(Vec coords,MatNullSpace *sp, int *__ierr ){
*__ierr = MatNullSpaceCreateRigidBody(
	(Vec)PetscToPointer((coords) ),sp);
}
void PETSC_STDCALL  matnullspacecreate_(MPI_Fint * comm,PetscBool  *has_cnst,PetscInt *n, Vec vecs[],MatNullSpace *SP, int *__ierr ){
*__ierr = MatNullSpaceCreate(
	MPI_Comm_f2c( *(comm) ),*has_cnst,*n,vecs,SP);
}
void PETSC_STDCALL  matnullspacedestroy_(MatNullSpace *sp, int *__ierr ){
*__ierr = MatNullSpaceDestroy(sp);
}
void PETSC_STDCALL  matnullspacetest_(MatNullSpace sp,Mat mat,PetscBool  *isNull, int *__ierr ){
*__ierr = MatNullSpaceTest(
	(MatNullSpace)PetscToPointer((sp) ),
	(Mat)PetscToPointer((mat) ),isNull);
}
#if defined(__cplusplus)
}
#endif
