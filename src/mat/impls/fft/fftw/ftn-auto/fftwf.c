#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* fftw.c */
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
#include "petscvec.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetvecsfftw_ MATGETVECSFFTW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetvecsfftw_ matgetvecsfftw
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecscatterpetsctofftw_ VECSCATTERPETSCTOFFTW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecscatterpetsctofftw_ vecscatterpetsctofftw
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecscatterfftwtopetsc_ VECSCATTERFFTWTOPETSC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecscatterfftwtopetsc_ vecscatterfftwtopetsc
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  matgetvecsfftw_(Mat A,Vec *x,Vec *y,Vec *z, int *__ierr ){
*__ierr = MatGetVecsFFTW(
	(Mat)PetscToPointer((A) ),x,y,z);
}
void PETSC_STDCALL  vecscatterpetsctofftw_(Mat A,Vec x,Vec y, int *__ierr ){
*__ierr = VecScatterPetscToFFTW(
	(Mat)PetscToPointer((A) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  vecscatterfftwtopetsc_(Mat A,Vec x,Vec y, int *__ierr ){
*__ierr = VecScatterFFTWToPetsc(
	(Mat)PetscToPointer((A) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
#if defined(__cplusplus)
}
#endif
