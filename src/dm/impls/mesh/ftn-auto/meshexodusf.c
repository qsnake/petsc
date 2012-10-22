#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* meshexodus.c */
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

#include "petscdmmesh.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshcreateexodusng_ DMMESHCREATEEXODUSNG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshcreateexodusng_ dmmeshcreateexodusng
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshviewexodussplit_ DMMESHVIEWEXODUSSPLIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshviewexodussplit_ dmmeshviewexodussplit
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshcreatescattertozerovertex_ DMMESHCREATESCATTERTOZEROVERTEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshcreatescattertozerovertex_ dmmeshcreatescattertozerovertex
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshcreatescattertozerovertexset_ DMMESHCREATESCATTERTOZEROVERTEXSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshcreatescattertozerovertexset_ dmmeshcreatescattertozerovertexset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshcreatescattertozerocell_ DMMESHCREATESCATTERTOZEROCELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshcreatescattertozerocell_ dmmeshcreatescattertozerocell
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshcreatescattertozerocellset_ DMMESHCREATESCATTERTOZEROCELLSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshcreatescattertozerocellset_ dmmeshcreatescattertozerocellset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecviewexodusvertex_ VECVIEWEXODUSVERTEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecviewexodusvertex_ vecviewexodusvertex
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecloadexodusvertex_ VECLOADEXODUSVERTEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecloadexodusvertex_ vecloadexodusvertex
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecviewexodusvertexset_ VECVIEWEXODUSVERTEXSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecviewexodusvertexset_ vecviewexodusvertexset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecloadexodusvertexset_ VECLOADEXODUSVERTEXSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecloadexodusvertexset_ vecloadexodusvertexset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecviewexoduscell_ VECVIEWEXODUSCELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecviewexoduscell_ vecviewexoduscell
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecloadexoduscell_ VECLOADEXODUSCELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecloadexoduscell_ vecloadexoduscell
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecviewexoduscellset_ VECVIEWEXODUSCELLSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecviewexoduscellset_ vecviewexoduscellset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecloadexoduscellset_ VECLOADEXODUSCELLSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecloadexoduscellset_ vecloadexoduscellset
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  dmmeshcreateexodusng_(MPI_Fint * comm,PetscInt *exoid,DM *dm, int *__ierr ){
*__ierr = DMMeshCreateExodusNG(
	MPI_Comm_f2c( *(comm) ),*exoid,dm);
}
void PETSC_STDCALL  dmmeshviewexodussplit_(DM dm,PetscInt *exoid, int *__ierr ){
*__ierr = DMMeshViewExodusSplit(
	(DM)PetscToPointer((dm) ),*exoid);
}
void PETSC_STDCALL  dmmeshcreatescattertozerovertex_(DM dm,VecScatter *scatter, int *__ierr ){
*__ierr = DMMeshCreateScatterToZeroVertex(
	(DM)PetscToPointer((dm) ),scatter);
}
void PETSC_STDCALL  dmmeshcreatescattertozerovertexset_(DM dm,IS is_local,IS is_zero,VecScatter *scatter, int *__ierr ){
*__ierr = DMMeshCreateScatterToZeroVertexSet(
	(DM)PetscToPointer((dm) ),
	(IS)PetscToPointer((is_local) ),
	(IS)PetscToPointer((is_zero) ),scatter);
}
void PETSC_STDCALL  dmmeshcreatescattertozerocell_(DM dm,VecScatter *scatter, int *__ierr ){
*__ierr = DMMeshCreateScatterToZeroCell(
	(DM)PetscToPointer((dm) ),scatter);
}
void PETSC_STDCALL  dmmeshcreatescattertozerocellset_(DM dm,IS is_local,IS is_zero,VecScatter *scatter, int *__ierr ){
*__ierr = DMMeshCreateScatterToZeroCellSet(
	(DM)PetscToPointer((dm) ),
	(IS)PetscToPointer((is_local) ),
	(IS)PetscToPointer((is_zero) ),scatter);
}
void PETSC_STDCALL  vecviewexodusvertex_(DM dm,Vec v,MPI_Fint * comm,PetscInt *exoid,PetscInt *step,PetscInt *exofield, int *__ierr ){
*__ierr = VecViewExodusVertex(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((v) ),
	MPI_Comm_f2c( *(comm) ),*exoid,*step,*exofield);
}
void PETSC_STDCALL  vecloadexodusvertex_(DM dm,Vec v,MPI_Fint * comm,PetscInt *exoid,PetscInt *step,PetscInt *exofield, int *__ierr ){
*__ierr = VecLoadExodusVertex(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((v) ),
	MPI_Comm_f2c( *(comm) ),*exoid,*step,*exofield);
}
void PETSC_STDCALL  vecviewexodusvertexset_(DM dm,Vec v,PetscInt *vsID,MPI_Fint * comm,PetscInt *exoid,PetscInt *step,PetscInt *exofield, int *__ierr ){
*__ierr = VecViewExodusVertexSet(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((v) ),*vsID,
	MPI_Comm_f2c( *(comm) ),*exoid,*step,*exofield);
}
void PETSC_STDCALL  vecloadexodusvertexset_(DM dm,Vec v,PetscInt *vsID,MPI_Fint * comm,PetscInt *exoid,PetscInt *step,PetscInt *exofield, int *__ierr ){
*__ierr = VecLoadExodusVertexSet(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((v) ),*vsID,
	MPI_Comm_f2c( *(comm) ),*exoid,*step,*exofield);
}
void PETSC_STDCALL  vecviewexoduscell_(DM dm,Vec v,MPI_Fint * comm,PetscInt *exoid,PetscInt *step,PetscInt *exofield, int *__ierr ){
*__ierr = VecViewExodusCell(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((v) ),
	MPI_Comm_f2c( *(comm) ),*exoid,*step,*exofield);
}
void PETSC_STDCALL  vecloadexoduscell_(DM dm,Vec v,MPI_Fint * comm,PetscInt *exoid,PetscInt *step,PetscInt *exofield, int *__ierr ){
*__ierr = VecLoadExodusCell(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((v) ),
	MPI_Comm_f2c( *(comm) ),*exoid,*step,*exofield);
}
void PETSC_STDCALL  vecviewexoduscellset_(DM dm,Vec v,PetscInt *csID,MPI_Fint * comm,PetscInt *exoid,PetscInt *step,PetscInt *exofield, int *__ierr ){
*__ierr = VecViewExodusCellSet(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((v) ),*csID,
	MPI_Comm_f2c( *(comm) ),*exoid,*step,*exofield);
}
void PETSC_STDCALL  vecloadexoduscellset_(DM dm,Vec v,PetscInt *csID,MPI_Fint * comm,PetscInt *exoid,PetscInt *step,PetscInt *exofield, int *__ierr ){
*__ierr = VecLoadExodusCellSet(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((v) ),*csID,
	MPI_Comm_f2c( *(comm) ),*exoid,*step,*exofield);
}
#if defined(__cplusplus)
}
#endif
