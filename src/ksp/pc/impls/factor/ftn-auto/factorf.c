#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* factor.c */
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

#include "petscpc.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcfactorsetupmatsolverpackage_ PCFACTORSETUPMATSOLVERPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcfactorsetupmatsolverpackage_ pcfactorsetupmatsolverpackage
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcfactorsetzeropivot_ PCFACTORSETZEROPIVOT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcfactorsetzeropivot_ pcfactorsetzeropivot
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcfactorsetshifttype_ PCFACTORSETSHIFTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcfactorsetshifttype_ pcfactorsetshifttype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcfactorsetshiftamount_ PCFACTORSETSHIFTAMOUNT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcfactorsetshiftamount_ pcfactorsetshiftamount
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcfactorsetlevels_ PCFACTORSETLEVELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcfactorsetlevels_ pcfactorsetlevels
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcfactorsetallowdiagonalfill_ PCFACTORSETALLOWDIAGONALFILL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcfactorsetallowdiagonalfill_ pcfactorsetallowdiagonalfill
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcfactorreorderfornonzerodiagonal_ PCFACTORREORDERFORNONZERODIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcfactorreorderfornonzerodiagonal_ pcfactorreorderfornonzerodiagonal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcfactorsetfill_ PCFACTORSETFILL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcfactorsetfill_ pcfactorsetfill
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcfactorsetuseinplace_ PCFACTORSETUSEINPLACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcfactorsetuseinplace_ pcfactorsetuseinplace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcfactorsetcolumnpivot_ PCFACTORSETCOLUMNPIVOT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcfactorsetcolumnpivot_ pcfactorsetcolumnpivot
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcfactorsetpivotinblocks_ PCFACTORSETPIVOTINBLOCKS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcfactorsetpivotinblocks_ pcfactorsetpivotinblocks
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcfactorsetreusefill_ PCFACTORSETREUSEFILL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcfactorsetreusefill_ pcfactorsetreusefill
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  pcfactorsetupmatsolverpackage_(PC pc, int *__ierr ){
*__ierr = PCFactorSetUpMatSolverPackage(
	(PC)PetscToPointer((pc) ));
}
void PETSC_STDCALL  pcfactorsetzeropivot_(PC pc,PetscReal *zero, int *__ierr ){
*__ierr = PCFactorSetZeroPivot(
	(PC)PetscToPointer((pc) ),*zero);
}
void PETSC_STDCALL  pcfactorsetshifttype_(PC pc,MatFactorShiftType *shifttype, int *__ierr ){
*__ierr = PCFactorSetShiftType(
	(PC)PetscToPointer((pc) ),*shifttype);
}
void PETSC_STDCALL  pcfactorsetshiftamount_(PC pc,PetscReal *shiftamount, int *__ierr ){
*__ierr = PCFactorSetShiftAmount(
	(PC)PetscToPointer((pc) ),*shiftamount);
}
void PETSC_STDCALL  pcfactorsetlevels_(PC pc,PetscInt *levels, int *__ierr ){
*__ierr = PCFactorSetLevels(
	(PC)PetscToPointer((pc) ),*levels);
}
void PETSC_STDCALL  pcfactorsetallowdiagonalfill_(PC pc, int *__ierr ){
*__ierr = PCFactorSetAllowDiagonalFill(
	(PC)PetscToPointer((pc) ));
}
void PETSC_STDCALL  pcfactorreorderfornonzerodiagonal_(PC pc,PetscReal *rtol, int *__ierr ){
*__ierr = PCFactorReorderForNonzeroDiagonal(
	(PC)PetscToPointer((pc) ),*rtol);
}
void PETSC_STDCALL  pcfactorsetfill_(PC pc,PetscReal *fill, int *__ierr ){
*__ierr = PCFactorSetFill(
	(PC)PetscToPointer((pc) ),*fill);
}
void PETSC_STDCALL  pcfactorsetuseinplace_(PC pc, int *__ierr ){
*__ierr = PCFactorSetUseInPlace(
	(PC)PetscToPointer((pc) ));
}
void PETSC_STDCALL  pcfactorsetcolumnpivot_(PC pc,PetscReal *dtcol, int *__ierr ){
*__ierr = PCFactorSetColumnPivot(
	(PC)PetscToPointer((pc) ),*dtcol);
}
void PETSC_STDCALL  pcfactorsetpivotinblocks_(PC pc,PetscBool  *pivot, int *__ierr ){
*__ierr = PCFactorSetPivotInBlocks(
	(PC)PetscToPointer((pc) ),*pivot);
}
void PETSC_STDCALL  pcfactorsetreusefill_(PC pc,PetscBool  *flag, int *__ierr ){
*__ierr = PCFactorSetReuseFill(
	(PC)PetscToPointer((pc) ),*flag);
}
#if defined(__cplusplus)
}
#endif
