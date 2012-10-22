#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* section.c */
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
#define sectionrealdestroy_ SECTIONREALDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealdestroy_ sectionrealdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealdistribute_ SECTIONREALDISTRIBUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealdistribute_ sectionrealdistribute
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealcomplete_ SECTIONREALCOMPLETE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealcomplete_ sectionrealcomplete
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealzero_ SECTIONREALZERO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealzero_ sectionrealzero
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealgetfiberdimension_ SECTIONREALGETFIBERDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealgetfiberdimension_ sectionrealgetfiberdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealsetfiberdimension_ SECTIONREALSETFIBERDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealsetfiberdimension_ sectionrealsetfiberdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealsetfiberdimensionfield_ SECTIONREALSETFIBERDIMENSIONFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealsetfiberdimensionfield_ sectionrealsetfiberdimensionfield
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealgetsize_ SECTIONREALGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealgetsize_ sectionrealgetsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealallocate_ SECTIONREALALLOCATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealallocate_ sectionrealallocate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealcreatelocalvector_ SECTIONREALCREATELOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealcreatelocalvector_ sectionrealcreatelocalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealaddspace_ SECTIONREALADDSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealaddspace_ sectionrealaddspace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealgetfibration_ SECTIONREALGETFIBRATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealgetfibration_ sectionrealgetfibration
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealtovec_ SECTIONREALTOVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealtovec_ sectionrealtovec
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealclear_ SECTIONREALCLEAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealclear_ sectionrealclear
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealset_ SECTIONREALSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealset_ sectionrealset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealaxpy_ SECTIONREALAXPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealaxpy_ sectionrealaxpy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintdestroy_ SECTIONINTDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintdestroy_ sectionintdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintdistribute_ SECTIONINTDISTRIBUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintdistribute_ sectionintdistribute
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintcomplete_ SECTIONINTCOMPLETE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintcomplete_ sectionintcomplete
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintzero_ SECTIONINTZERO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintzero_ sectionintzero
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintgetfiberdimension_ SECTIONINTGETFIBERDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintgetfiberdimension_ sectionintgetfiberdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintsetfiberdimension_ SECTIONINTSETFIBERDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintsetfiberdimension_ sectionintsetfiberdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintsetfiberdimensionfield_ SECTIONINTSETFIBERDIMENSIONFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintsetfiberdimensionfield_ sectionintsetfiberdimensionfield
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintgetsize_ SECTIONINTGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintgetsize_ sectionintgetsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintallocate_ SECTIONINTALLOCATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintallocate_ sectionintallocate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintset_ SECTIONINTSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintset_ sectionintset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintaddspace_ SECTIONINTADDSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintaddspace_ sectionintaddspace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintgetfibration_ SECTIONINTGETFIBRATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintgetfibration_ sectionintgetfibration
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  sectionrealdestroy_(SectionReal *section, int *__ierr ){
*__ierr = SectionRealDestroy(section);
}
void PETSC_STDCALL  sectionrealdistribute_(SectionReal serialSection,DM parallelMesh,SectionReal *parallelSection, int *__ierr ){
*__ierr = SectionRealDistribute(
	(SectionReal)PetscToPointer((serialSection) ),
	(DM)PetscToPointer((parallelMesh) ),parallelSection);
}
void PETSC_STDCALL  sectionrealcomplete_(SectionReal section, int *__ierr ){
*__ierr = SectionRealComplete(
	(SectionReal)PetscToPointer((section) ));
}
void PETSC_STDCALL  sectionrealzero_(SectionReal section, int *__ierr ){
*__ierr = SectionRealZero(
	(SectionReal)PetscToPointer((section) ));
}
void PETSC_STDCALL  sectionrealgetfiberdimension_(SectionReal section,PetscInt *point,PetscInt *size, int *__ierr ){
*__ierr = SectionRealGetFiberDimension(
	(SectionReal)PetscToPointer((section) ),*point,size);
}
void PETSC_STDCALL  sectionrealsetfiberdimension_(SectionReal section,PetscInt *point, PetscInt *size, int *__ierr ){
*__ierr = SectionRealSetFiberDimension(
	(SectionReal)PetscToPointer((section) ),*point,*size);
}
void PETSC_STDCALL  sectionrealsetfiberdimensionfield_(SectionReal section,PetscInt *point, PetscInt *size, PetscInt *field, int *__ierr ){
*__ierr = SectionRealSetFiberDimensionField(
	(SectionReal)PetscToPointer((section) ),*point,*size,*field);
}
void PETSC_STDCALL  sectionrealgetsize_(SectionReal section,PetscInt *size, int *__ierr ){
*__ierr = SectionRealGetSize(
	(SectionReal)PetscToPointer((section) ),size);
}
void PETSC_STDCALL  sectionrealallocate_(SectionReal section, int *__ierr ){
*__ierr = SectionRealAllocate(
	(SectionReal)PetscToPointer((section) ));
}
void PETSC_STDCALL  sectionrealcreatelocalvector_(SectionReal section,Vec *localVec, int *__ierr ){
*__ierr = SectionRealCreateLocalVector(
	(SectionReal)PetscToPointer((section) ),localVec);
}
void PETSC_STDCALL  sectionrealaddspace_(SectionReal section, int *__ierr ){
*__ierr = SectionRealAddSpace(
	(SectionReal)PetscToPointer((section) ));
}
void PETSC_STDCALL  sectionrealgetfibration_(SectionReal section, PetscInt *field,SectionReal *subsection, int *__ierr ){
*__ierr = SectionRealGetFibration(
	(SectionReal)PetscToPointer((section) ),*field,subsection);
}
void PETSC_STDCALL  sectionrealtovec_(SectionReal section,VecScatter scatter,ScatterMode *mode,Vec vec, int *__ierr ){
*__ierr = SectionRealToVec(
	(SectionReal)PetscToPointer((section) ),
	(VecScatter)PetscToPointer((scatter) ),*mode,
	(Vec)PetscToPointer((vec) ));
}
void PETSC_STDCALL  sectionrealclear_(SectionReal section, int *__ierr ){
*__ierr = SectionRealClear(
	(SectionReal)PetscToPointer((section) ));
}
void PETSC_STDCALL  sectionrealset_(SectionReal section,PetscReal *val, int *__ierr ){
*__ierr = SectionRealSet(
	(SectionReal)PetscToPointer((section) ),*val);
}
void PETSC_STDCALL  sectionrealaxpy_(SectionReal section,DM dm,PetscScalar *alpha,SectionReal X, int *__ierr ){
*__ierr = SectionRealAXPY(
	(SectionReal)PetscToPointer((section) ),
	(DM)PetscToPointer((dm) ),*alpha,
	(SectionReal)PetscToPointer((X) ));
}
void PETSC_STDCALL  sectionintdestroy_(SectionInt *section, int *__ierr ){
*__ierr = SectionIntDestroy(section);
}
void PETSC_STDCALL  sectionintdistribute_(SectionInt serialSection,DM parallelMesh,SectionInt *parallelSection, int *__ierr ){
*__ierr = SectionIntDistribute(
	(SectionInt)PetscToPointer((serialSection) ),
	(DM)PetscToPointer((parallelMesh) ),parallelSection);
}
void PETSC_STDCALL  sectionintcomplete_(SectionInt section, int *__ierr ){
*__ierr = SectionIntComplete(
	(SectionInt)PetscToPointer((section) ));
}
void PETSC_STDCALL  sectionintzero_(SectionInt section, int *__ierr ){
*__ierr = SectionIntZero(
	(SectionInt)PetscToPointer((section) ));
}
void PETSC_STDCALL  sectionintgetfiberdimension_(SectionInt section,PetscInt *point,PetscInt *size, int *__ierr ){
*__ierr = SectionIntGetFiberDimension(
	(SectionInt)PetscToPointer((section) ),*point,size);
}
void PETSC_STDCALL  sectionintsetfiberdimension_(SectionInt section,PetscInt *point, PetscInt *size, int *__ierr ){
*__ierr = SectionIntSetFiberDimension(
	(SectionInt)PetscToPointer((section) ),*point,*size);
}
void PETSC_STDCALL  sectionintsetfiberdimensionfield_(SectionInt section,PetscInt *point, PetscInt *size, PetscInt *field, int *__ierr ){
*__ierr = SectionIntSetFiberDimensionField(
	(SectionInt)PetscToPointer((section) ),*point,*size,*field);
}
void PETSC_STDCALL  sectionintgetsize_(SectionInt section,PetscInt *size, int *__ierr ){
*__ierr = SectionIntGetSize(
	(SectionInt)PetscToPointer((section) ),size);
}
void PETSC_STDCALL  sectionintallocate_(SectionInt section, int *__ierr ){
*__ierr = SectionIntAllocate(
	(SectionInt)PetscToPointer((section) ));
}
void PETSC_STDCALL  sectionintset_(SectionInt section,PetscInt *val, int *__ierr ){
*__ierr = SectionIntSet(
	(SectionInt)PetscToPointer((section) ),*val);
}
void PETSC_STDCALL  sectionintaddspace_(SectionInt section, int *__ierr ){
*__ierr = SectionIntAddSpace(
	(SectionInt)PetscToPointer((section) ));
}
void PETSC_STDCALL  sectionintgetfibration_(SectionInt section, PetscInt *field,SectionInt *subsection, int *__ierr ){
*__ierr = SectionIntGetFibration(
	(SectionInt)PetscToPointer((section) ),*field,subsection);
}
#if defined(__cplusplus)
}
#endif
