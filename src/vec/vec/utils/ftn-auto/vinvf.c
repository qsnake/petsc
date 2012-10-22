#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* vinv.c */
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
#define vecstrideset_ VECSTRIDESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecstrideset_ vecstrideset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecstridescale_ VECSTRIDESCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecstridescale_ vecstridescale
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecstridenorm_ VECSTRIDENORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecstridenorm_ vecstridenorm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecstridemax_ VECSTRIDEMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecstridemax_ vecstridemax
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecstridemin_ VECSTRIDEMIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecstridemin_ vecstridemin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecstridescaleall_ VECSTRIDESCALEALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecstridescaleall_ vecstridescaleall
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecstridenormall_ VECSTRIDENORMALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecstridenormall_ vecstridenormall
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecstridemaxall_ VECSTRIDEMAXALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecstridemaxall_ vecstridemaxall
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecstrideminall_ VECSTRIDEMINALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecstrideminall_ vecstrideminall
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecstridegatherall_ VECSTRIDEGATHERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecstridegatherall_ vecstridegatherall
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecstridescatterall_ VECSTRIDESCATTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecstridescatterall_ vecstridescatterall
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecstridegather_ VECSTRIDEGATHER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecstridegather_ vecstridegather
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecstridescatter_ VECSTRIDESCATTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecstridescatter_ vecstridescatter
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecexp_ VECEXP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecexp_ vecexp
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define veclog_ VECLOG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define veclog_ veclog
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecsqrtabs_ VECSQRTABS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecsqrtabs_ vecsqrtabs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecdotnorm2_ VECDOTNORM2
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecdotnorm2_ vecdotnorm2
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecsum_ VECSUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecsum_ vecsum
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecshift_ VECSHIFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecshift_ vecshift
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecabs_ VECABS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecabs_ vecabs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecpermute_ VECPERMUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecpermute_ vecpermute
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecequal_ VECEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecequal_ vecequal
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  vecstrideset_(Vec v,PetscInt *start,PetscScalar *s, int *__ierr ){
*__ierr = VecStrideSet(
	(Vec)PetscToPointer((v) ),*start,*s);
}
void PETSC_STDCALL  vecstridescale_(Vec v,PetscInt *start,PetscScalar *scale, int *__ierr ){
*__ierr = VecStrideScale(
	(Vec)PetscToPointer((v) ),*start,*scale);
}
void PETSC_STDCALL  vecstridenorm_(Vec v,PetscInt *start,NormType *ntype,PetscReal *nrm, int *__ierr ){
*__ierr = VecStrideNorm(
	(Vec)PetscToPointer((v) ),*start,*ntype,nrm);
}
void PETSC_STDCALL  vecstridemax_(Vec v,PetscInt *start,PetscInt *idex,PetscReal *nrm, int *__ierr ){
*__ierr = VecStrideMax(
	(Vec)PetscToPointer((v) ),*start,idex,nrm);
}
void PETSC_STDCALL  vecstridemin_(Vec v,PetscInt *start,PetscInt *idex,PetscReal *nrm, int *__ierr ){
*__ierr = VecStrideMin(
	(Vec)PetscToPointer((v) ),*start,idex,nrm);
}
void PETSC_STDCALL  vecstridescaleall_(Vec v, PetscScalar *scales, int *__ierr ){
*__ierr = VecStrideScaleAll(
	(Vec)PetscToPointer((v) ),scales);
}
void PETSC_STDCALL  vecstridenormall_(Vec v,NormType *ntype,PetscReal nrm[], int *__ierr ){
*__ierr = VecStrideNormAll(
	(Vec)PetscToPointer((v) ),*ntype,nrm);
}
void PETSC_STDCALL  vecstridemaxall_(Vec v,PetscInt idex[],PetscReal nrm[], int *__ierr ){
*__ierr = VecStrideMaxAll(
	(Vec)PetscToPointer((v) ),idex,nrm);
}
void PETSC_STDCALL  vecstrideminall_(Vec v,PetscInt idex[],PetscReal nrm[], int *__ierr ){
*__ierr = VecStrideMinAll(
	(Vec)PetscToPointer((v) ),idex,nrm);
}
void PETSC_STDCALL  vecstridegatherall_(Vec v,Vec s[],InsertMode *addv, int *__ierr ){
*__ierr = VecStrideGatherAll(
	(Vec)PetscToPointer((v) ),s,*addv);
}
void PETSC_STDCALL  vecstridescatterall_(Vec s[],Vec v,InsertMode *addv, int *__ierr ){
*__ierr = VecStrideScatterAll(s,
	(Vec)PetscToPointer((v) ),*addv);
}
void PETSC_STDCALL  vecstridegather_(Vec v,PetscInt *start,Vec s,InsertMode *addv, int *__ierr ){
*__ierr = VecStrideGather(
	(Vec)PetscToPointer((v) ),*start,
	(Vec)PetscToPointer((s) ),*addv);
}
void PETSC_STDCALL  vecstridescatter_(Vec s,PetscInt *start,Vec v,InsertMode *addv, int *__ierr ){
*__ierr = VecStrideScatter(
	(Vec)PetscToPointer((s) ),*start,
	(Vec)PetscToPointer((v) ),*addv);
}
void PETSC_STDCALL  vecexp_(Vec v, int *__ierr ){
*__ierr = VecExp(
	(Vec)PetscToPointer((v) ));
}
void PETSC_STDCALL  veclog_(Vec v, int *__ierr ){
*__ierr = VecLog(
	(Vec)PetscToPointer((v) ));
}
void PETSC_STDCALL  vecsqrtabs_(Vec v, int *__ierr ){
*__ierr = VecSqrtAbs(
	(Vec)PetscToPointer((v) ));
}
void PETSC_STDCALL  vecdotnorm2_(Vec s,Vec t,PetscScalar *dp,PetscScalar *nm, int *__ierr ){
*__ierr = VecDotNorm2(
	(Vec)PetscToPointer((s) ),
	(Vec)PetscToPointer((t) ),dp,nm);
}
void PETSC_STDCALL  vecsum_(Vec v,PetscScalar *sum, int *__ierr ){
*__ierr = VecSum(
	(Vec)PetscToPointer((v) ),sum);
}
void PETSC_STDCALL  vecshift_(Vec v,PetscScalar *shift, int *__ierr ){
*__ierr = VecShift(
	(Vec)PetscToPointer((v) ),*shift);
}
void PETSC_STDCALL  vecabs_(Vec v, int *__ierr ){
*__ierr = VecAbs(
	(Vec)PetscToPointer((v) ));
}
void PETSC_STDCALL  vecpermute_(Vec x,IS row,PetscBool  *inv, int *__ierr ){
*__ierr = VecPermute(
	(Vec)PetscToPointer((x) ),
	(IS)PetscToPointer((row) ),*inv);
}
void PETSC_STDCALL  vecequal_(Vec vec1,Vec vec2,PetscBool  *flg, int *__ierr ){
*__ierr = VecEqual(
	(Vec)PetscToPointer((vec1) ),
	(Vec)PetscToPointer((vec2) ),flg);
}
#if defined(__cplusplus)
}
#endif
