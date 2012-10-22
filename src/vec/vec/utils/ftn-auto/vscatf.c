#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* vscat.c */
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

#include "petscis.h"
#include "petscvec.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecscattergetmerged_ VECSCATTERGETMERGED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecscattergetmerged_ vecscattergetmerged
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecscatterbegin_ VECSCATTERBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecscatterbegin_ vecscatterbegin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecscatterend_ VECSCATTEREND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecscatterend_ vecscatterend
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecscattercopy_ VECSCATTERCOPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecscattercopy_ vecscattercopy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecscatterview_ VECSCATTERVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecscatterview_ vecscatterview
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  vecscattergetmerged_(VecScatter ctx,PetscBool  *flg, int *__ierr ){
*__ierr = VecScatterGetMerged(
	(VecScatter)PetscToPointer((ctx) ),flg);
}
void PETSC_STDCALL  vecscatterbegin_(VecScatter inctx,Vec x,Vec y,InsertMode *addv,ScatterMode *mode, int *__ierr ){
*__ierr = VecScatterBegin(
	(VecScatter)PetscToPointer((inctx) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ),*addv,*mode);
}
void PETSC_STDCALL  vecscatterend_(VecScatter ctx,Vec x,Vec y,InsertMode *addv,ScatterMode *mode, int *__ierr ){
*__ierr = VecScatterEnd(
	(VecScatter)PetscToPointer((ctx) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ),*addv,*mode);
}
void PETSC_STDCALL  vecscattercopy_(VecScatter sctx,VecScatter *ctx, int *__ierr ){
*__ierr = VecScatterCopy(
	(VecScatter)PetscToPointer((sctx) ),ctx);
}
void PETSC_STDCALL  vecscatterview_(VecScatter ctx,PetscViewer viewer, int *__ierr ){
*__ierr = VecScatterView(
	(VecScatter)PetscToPointer((ctx) ),
	(PetscViewer)PetscToPointer((viewer) ));
}
#if defined(__cplusplus)
}
#endif
