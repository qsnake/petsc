#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* vecpthread.c */
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

#include "petscvec.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecgetthreadownershiprange_ VECGETTHREADOWNERSHIPRANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecgetthreadownershiprange_ vecgetthreadownershiprange
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecsetnthreads_ VECSETNTHREADS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecsetnthreads_ vecsetnthreads
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecgetnthreads_ VECGETNTHREADS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecgetnthreads_ vecgetnthreads
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecsetthreadaffinities_ VECSETTHREADAFFINITIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecsetthreadaffinities_ vecsetthreadaffinities
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define veccreateseqpthread_ VECCREATESEQPTHREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define veccreateseqpthread_ veccreateseqpthread
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  vecgetthreadownershiprange_(Vec X,PetscInt *thread_id,PetscInt *start,PetscInt *end, int *__ierr ){
*__ierr = VecGetThreadOwnershipRange(
	(Vec)PetscToPointer((X) ),*thread_id,start,end);
}
void PETSC_STDCALL  vecsetnthreads_(Vec v,PetscInt *nthreads, int *__ierr ){
*__ierr = VecSetNThreads(
	(Vec)PetscToPointer((v) ),*nthreads);
}
void PETSC_STDCALL  vecgetnthreads_(Vec v,PetscInt *nthreads, int *__ierr ){
*__ierr = VecGetNThreads(
	(Vec)PetscToPointer((v) ),nthreads);
}
void PETSC_STDCALL  vecsetthreadaffinities_(Vec v, PetscInt affinities[], int *__ierr ){
*__ierr = VecSetThreadAffinities(
	(Vec)PetscToPointer((v) ),affinities);
}
void PETSC_STDCALL  veccreateseqpthread_(MPI_Fint * comm,PetscInt *n,PetscInt *nthreads,PetscInt affinities[],Vec *v, int *__ierr ){
*__ierr = VecCreateSeqPThread(
	MPI_Comm_f2c( *(comm) ),*n,*nthreads,affinities,v);
}
#if defined(__cplusplus)
}
#endif
