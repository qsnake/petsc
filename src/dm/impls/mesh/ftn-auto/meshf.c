#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* mesh.c */
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
#define dmmeshload_ DMMESHLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshload_ dmmeshload
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshcreatevector_ DMMESHCREATEVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshcreatevector_ dmmeshcreatevector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshcreateglobalscatter_ DMMESHCREATEGLOBALSCATTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshcreateglobalscatter_ dmmeshcreateglobalscatter
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshgetglobalscatter_ DMMESHGETGLOBALSCATTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshgetglobalscatter_ dmmeshgetglobalscatter
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshgetdimension_ DMMESHGETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshgetdimension_ dmmeshgetdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshsetdimension_ DMMESHSETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshsetdimension_ dmmeshsetdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshgetchart_ DMMESHGETCHART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshgetchart_ dmmeshgetchart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshsetchart_ DMMESHSETCHART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshsetchart_ dmmeshsetchart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshgetconesize_ DMMESHGETCONESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshgetconesize_ dmmeshgetconesize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshsetconesize_ DMMESHSETCONESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshsetconesize_ dmmeshsetconesize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshsetcone_ DMMESHSETCONE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshsetcone_ dmmeshsetcone
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshgetsupportsize_ DMMESHGETSUPPORTSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshgetsupportsize_ dmmeshgetsupportsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshgetmaxsizes_ DMMESHGETMAXSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshgetmaxsizes_ dmmeshgetmaxsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshsetup_ DMMESHSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshsetup_ dmmeshsetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshsymmetrize_ DMMESHSYMMETRIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshsymmetrize_ dmmeshsymmetrize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshstratify_ DMMESHSTRATIFY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshstratify_ dmmeshstratify
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshrestrictvector_ DMMESHRESTRICTVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshrestrictvector_ dmmeshrestrictvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshassemblevectorcomplete_ DMMESHASSEMBLEVECTORCOMPLETE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshassemblevectorcomplete_ dmmeshassemblevectorcomplete
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshassemblevector_ DMMESHASSEMBLEVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshassemblevector_ dmmeshassemblevector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshsetmaxdof_ DMMESHSETMAXDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshsetmaxdof_ dmmeshsetmaxdof
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmmeshassemblematrix_ DMMESHASSEMBLEMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmmeshassemblematrix_ dmmeshassemblematrix
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  dmmeshload_(PetscViewer viewer,DM dm, int *__ierr ){
*__ierr = DMMeshLoad(
	(PetscViewer)PetscToPointer((viewer) ),
	(DM)PetscToPointer((dm) ));
}
void PETSC_STDCALL  dmmeshcreatevector_(DM mesh,SectionReal section,Vec *vec, int *__ierr ){
*__ierr = DMMeshCreateVector(
	(DM)PetscToPointer((mesh) ),
	(SectionReal)PetscToPointer((section) ),vec);
}
void PETSC_STDCALL  dmmeshcreateglobalscatter_(DM dm,SectionReal section,VecScatter *scatter, int *__ierr ){
*__ierr = DMMeshCreateGlobalScatter(
	(DM)PetscToPointer((dm) ),
	(SectionReal)PetscToPointer((section) ),scatter);
}
void PETSC_STDCALL  dmmeshgetglobalscatter_(DM dm,VecScatter *scatter, int *__ierr ){
*__ierr = DMMeshGetGlobalScatter(
	(DM)PetscToPointer((dm) ),scatter);
}
void PETSC_STDCALL  dmmeshgetdimension_(DM dm,PetscInt *dim, int *__ierr ){
*__ierr = DMMeshGetDimension(
	(DM)PetscToPointer((dm) ),dim);
}
void PETSC_STDCALL  dmmeshsetdimension_(DM dm,PetscInt *dim, int *__ierr ){
*__ierr = DMMeshSetDimension(
	(DM)PetscToPointer((dm) ),*dim);
}
void PETSC_STDCALL  dmmeshgetchart_(DM dm,PetscInt *pStart,PetscInt *pEnd, int *__ierr ){
*__ierr = DMMeshGetChart(
	(DM)PetscToPointer((dm) ),pStart,pEnd);
}
void PETSC_STDCALL  dmmeshsetchart_(DM dm,PetscInt *pStart,PetscInt *pEnd, int *__ierr ){
*__ierr = DMMeshSetChart(
	(DM)PetscToPointer((dm) ),*pStart,*pEnd);
}
void PETSC_STDCALL  dmmeshgetconesize_(DM dm,PetscInt *p,PetscInt *size, int *__ierr ){
*__ierr = DMMeshGetConeSize(
	(DM)PetscToPointer((dm) ),*p,size);
}
void PETSC_STDCALL  dmmeshsetconesize_(DM dm,PetscInt *p,PetscInt *size, int *__ierr ){
*__ierr = DMMeshSetConeSize(
	(DM)PetscToPointer((dm) ),*p,*size);
}
void PETSC_STDCALL  dmmeshsetcone_(DM dm,PetscInt *p, PetscInt cone[], int *__ierr ){
*__ierr = DMMeshSetCone(
	(DM)PetscToPointer((dm) ),*p,cone);
}
void PETSC_STDCALL  dmmeshgetsupportsize_(DM dm,PetscInt *p,PetscInt *size, int *__ierr ){
*__ierr = DMMeshGetSupportSize(
	(DM)PetscToPointer((dm) ),*p,size);
}
void PETSC_STDCALL  dmmeshgetmaxsizes_(DM dm,PetscInt *maxConeSize,PetscInt *maxSupportSize, int *__ierr ){
*__ierr = DMMeshGetMaxSizes(
	(DM)PetscToPointer((dm) ),maxConeSize,maxSupportSize);
}
void PETSC_STDCALL  dmmeshsetup_(DM dm, int *__ierr ){
*__ierr = DMMeshSetUp(
	(DM)PetscToPointer((dm) ));
}
void PETSC_STDCALL  dmmeshsymmetrize_(DM dm, int *__ierr ){
*__ierr = DMMeshSymmetrize(
	(DM)PetscToPointer((dm) ));
}
void PETSC_STDCALL  dmmeshstratify_(DM dm, int *__ierr ){
*__ierr = DMMeshStratify(
	(DM)PetscToPointer((dm) ));
}
void PETSC_STDCALL  dmmeshrestrictvector_(Vec g,Vec l,InsertMode *mode, int *__ierr ){
*__ierr = DMMeshRestrictVector(
	(Vec)PetscToPointer((g) ),
	(Vec)PetscToPointer((l) ),*mode);
}
void PETSC_STDCALL  dmmeshassemblevectorcomplete_(Vec g,Vec l,InsertMode *mode, int *__ierr ){
*__ierr = DMMeshAssembleVectorComplete(
	(Vec)PetscToPointer((g) ),
	(Vec)PetscToPointer((l) ),*mode);
}
void PETSC_STDCALL  dmmeshassemblevector_(Vec b,PetscInt *e,PetscScalar v[],InsertMode *mode, int *__ierr ){
*__ierr = DMMeshAssembleVector(
	(Vec)PetscToPointer((b) ),*e,v,*mode);
}
void PETSC_STDCALL  dmmeshsetmaxdof_(DM dm,PetscInt *maxDof, int *__ierr ){
*__ierr = DMMeshSetMaxDof(
	(DM)PetscToPointer((dm) ),*maxDof);
}
void PETSC_STDCALL  dmmeshassemblematrix_(Mat A,DM dm,SectionReal section,PetscInt *e,PetscScalar v[],InsertMode *mode, int *__ierr ){
*__ierr = DMMeshAssembleMatrix(
	(Mat)PetscToPointer((A) ),
	(DM)PetscToPointer((dm) ),
	(SectionReal)PetscToPointer((section) ),*e,v,*mode);
}
#if defined(__cplusplus)
}
#endif
