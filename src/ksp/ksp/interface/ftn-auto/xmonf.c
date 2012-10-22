#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* xmon.c */
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
#define kspmonitorlgdestroy_ KSPMONITORLGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspmonitorlgdestroy_ kspmonitorlgdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspmonitorlgrangedestroy_ KSPMONITORLGRANGEDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspmonitorlgrangedestroy_ kspmonitorlgrangedestroy
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  kspmonitorlgdestroy_(PetscDrawLG *drawlg, int *__ierr ){
*__ierr = KSPMonitorLGDestroy(drawlg);
}
void PETSC_STDCALL  kspmonitorlgrangedestroy_(PetscDrawLG *drawlg, int *__ierr ){
*__ierr = KSPMonitorLGRangeDestroy(drawlg);
}
#if defined(__cplusplus)
}
#endif
