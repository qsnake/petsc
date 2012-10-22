#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* vector.c */
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
#define vecstashgetinfo_ VECSTASHGETINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecstashgetinfo_ vecstashgetinfo
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecsetlocaltoglobalmapping_ VECSETLOCALTOGLOBALMAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecsetlocaltoglobalmapping_ vecsetlocaltoglobalmapping
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecsetlocaltoglobalmappingblock_ VECSETLOCALTOGLOBALMAPPINGBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecsetlocaltoglobalmappingblock_ vecsetlocaltoglobalmappingblock
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecgetlocaltoglobalmapping_ VECGETLOCALTOGLOBALMAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecgetlocaltoglobalmapping_ vecgetlocaltoglobalmapping
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecgetlocaltoglobalmappingblock_ VECGETLOCALTOGLOBALMAPPINGBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecgetlocaltoglobalmappingblock_ vecgetlocaltoglobalmappingblock
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecassemblybegin_ VECASSEMBLYBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecassemblybegin_ vecassemblybegin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecassemblyend_ VECASSEMBLYEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecassemblyend_ vecassemblyend
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecpointwisemax_ VECPOINTWISEMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecpointwisemax_ vecpointwisemax
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecpointwisemin_ VECPOINTWISEMIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecpointwisemin_ vecpointwisemin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecpointwisemaxabs_ VECPOINTWISEMAXABS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecpointwisemaxabs_ vecpointwisemaxabs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecpointwisedivide_ VECPOINTWISEDIVIDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecpointwisedivide_ vecpointwisedivide
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecduplicate_ VECDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecduplicate_ vecduplicate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecdestroy_ VECDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecdestroy_ vecdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecviewfromoptions_ VECVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecviewfromoptions_ vecviewfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecgetsize_ VECGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecgetsize_ vecgetsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecgetlocalsize_ VECGETLOCALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecgetlocalsize_ vecgetlocalsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecsetoption_ VECSETOPTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecsetoption_ vecsetoption
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecresetarray_ VECRESETARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecresetarray_ vecresetarray
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecreciprocal_ VECRECIPROCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecreciprocal_ vecreciprocal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecstashsetinitialsize_ VECSTASHSETINITIALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecstashsetinitialsize_ vecstashsetinitialsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecconjugate_ VECCONJUGATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecconjugate_ vecconjugate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecpointwisemult_ VECPOINTWISEMULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecpointwisemult_ vecpointwisemult
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecsetrandom_ VECSETRANDOM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecsetrandom_ vecsetrandom
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define veczeroentries_ VECZEROENTRIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define veczeroentries_ veczeroentries
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecsetfromoptions_ VECSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecsetfromoptions_ vecsetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecsetsizes_ VECSETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecsetsizes_ vecsetsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecsetblocksize_ VECSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecsetblocksize_ vecsetblocksize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecgetblocksize_ VECGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecgetblocksize_ vecgetblocksize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecsetup_ VECSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecsetup_ vecsetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define veccopy_ VECCOPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define veccopy_ veccopy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecswap_ VECSWAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecswap_ vecswap
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecstashview_ VECSTASHVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecstashview_ vecstashview
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  vecstashgetinfo_(Vec vec,PetscInt *nstash,PetscInt *reallocs,PetscInt *bnstash,PetscInt *breallocs, int *__ierr ){
*__ierr = VecStashGetInfo(
	(Vec)PetscToPointer((vec) ),nstash,reallocs,bnstash,breallocs);
}
void PETSC_STDCALL  vecsetlocaltoglobalmapping_(Vec x,ISLocalToGlobalMapping mapping, int *__ierr ){
*__ierr = VecSetLocalToGlobalMapping(
	(Vec)PetscToPointer((x) ),
	(ISLocalToGlobalMapping)PetscToPointer((mapping) ));
}
void PETSC_STDCALL  vecsetlocaltoglobalmappingblock_(Vec x,ISLocalToGlobalMapping mapping, int *__ierr ){
*__ierr = VecSetLocalToGlobalMappingBlock(
	(Vec)PetscToPointer((x) ),
	(ISLocalToGlobalMapping)PetscToPointer((mapping) ));
}
void PETSC_STDCALL  vecgetlocaltoglobalmapping_(Vec X,ISLocalToGlobalMapping *mapping, int *__ierr ){
*__ierr = VecGetLocalToGlobalMapping(
	(Vec)PetscToPointer((X) ),mapping);
}
void PETSC_STDCALL  vecgetlocaltoglobalmappingblock_(Vec X,ISLocalToGlobalMapping *mapping, int *__ierr ){
*__ierr = VecGetLocalToGlobalMappingBlock(
	(Vec)PetscToPointer((X) ),mapping);
}
void PETSC_STDCALL  vecassemblybegin_(Vec vec, int *__ierr ){
*__ierr = VecAssemblyBegin(
	(Vec)PetscToPointer((vec) ));
}
void PETSC_STDCALL  vecassemblyend_(Vec vec, int *__ierr ){
*__ierr = VecAssemblyEnd(
	(Vec)PetscToPointer((vec) ));
}
void PETSC_STDCALL  vecpointwisemax_(Vec w,Vec x,Vec y, int *__ierr ){
*__ierr = VecPointwiseMax(
	(Vec)PetscToPointer((w) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  vecpointwisemin_(Vec w,Vec x,Vec y, int *__ierr ){
*__ierr = VecPointwiseMin(
	(Vec)PetscToPointer((w) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  vecpointwisemaxabs_(Vec w,Vec x,Vec y, int *__ierr ){
*__ierr = VecPointwiseMaxAbs(
	(Vec)PetscToPointer((w) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  vecpointwisedivide_(Vec w,Vec x,Vec y, int *__ierr ){
*__ierr = VecPointwiseDivide(
	(Vec)PetscToPointer((w) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  vecduplicate_(Vec v,Vec *newv, int *__ierr ){
*__ierr = VecDuplicate(
	(Vec)PetscToPointer((v) ),newv);
}
void PETSC_STDCALL  vecdestroy_(Vec *v, int *__ierr ){
*__ierr = VecDestroy(v);
}
void PETSC_STDCALL  vecviewfromoptions_(Vec vec, char *title, int *__ierr ){
*__ierr = VecViewFromOptions(
	(Vec)PetscToPointer((vec) ),title);
}
void PETSC_STDCALL  vecgetsize_(Vec x,PetscInt *size, int *__ierr ){
*__ierr = VecGetSize(
	(Vec)PetscToPointer((x) ),size);
}
void PETSC_STDCALL  vecgetlocalsize_(Vec x,PetscInt *size, int *__ierr ){
*__ierr = VecGetLocalSize(
	(Vec)PetscToPointer((x) ),size);
}
void PETSC_STDCALL  vecsetoption_(Vec x,VecOption *op,PetscBool  *flag, int *__ierr ){
*__ierr = VecSetOption(
	(Vec)PetscToPointer((x) ),*op,*flag);
}
void PETSC_STDCALL  vecresetarray_(Vec vec, int *__ierr ){
*__ierr = VecResetArray(
	(Vec)PetscToPointer((vec) ));
}
void PETSC_STDCALL  vecreciprocal_(Vec vec, int *__ierr ){
*__ierr = VecReciprocal(
	(Vec)PetscToPointer((vec) ));
}
void PETSC_STDCALL  vecstashsetinitialsize_(Vec vec,PetscInt *size,PetscInt *bsize, int *__ierr ){
*__ierr = VecStashSetInitialSize(
	(Vec)PetscToPointer((vec) ),*size,*bsize);
}
void PETSC_STDCALL  vecconjugate_(Vec x, int *__ierr ){
*__ierr = VecConjugate(
	(Vec)PetscToPointer((x) ));
}
void PETSC_STDCALL  vecpointwisemult_(Vec w,Vec x,Vec y, int *__ierr ){
*__ierr = VecPointwiseMult(
	(Vec)PetscToPointer((w) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  vecsetrandom_(Vec x,PetscRandom rctx, int *__ierr ){
*__ierr = VecSetRandom(
	(Vec)PetscToPointer((x) ),
	(PetscRandom)PetscToPointer((rctx) ));
}
void PETSC_STDCALL  veczeroentries_(Vec vec, int *__ierr ){
*__ierr = VecZeroEntries(
	(Vec)PetscToPointer((vec) ));
}
void PETSC_STDCALL  vecsetfromoptions_(Vec vec, int *__ierr ){
*__ierr = VecSetFromOptions(
	(Vec)PetscToPointer((vec) ));
}
void PETSC_STDCALL  vecsetsizes_(Vec v,PetscInt *n,PetscInt *N, int *__ierr ){
*__ierr = VecSetSizes(
	(Vec)PetscToPointer((v) ),*n,*N);
}
void PETSC_STDCALL  vecsetblocksize_(Vec v,PetscInt *bs, int *__ierr ){
*__ierr = VecSetBlockSize(
	(Vec)PetscToPointer((v) ),*bs);
}
void PETSC_STDCALL  vecgetblocksize_(Vec v,PetscInt *bs, int *__ierr ){
*__ierr = VecGetBlockSize(
	(Vec)PetscToPointer((v) ),bs);
}
void PETSC_STDCALL  vecsetup_(Vec v, int *__ierr ){
*__ierr = VecSetUp(
	(Vec)PetscToPointer((v) ));
}
void PETSC_STDCALL  veccopy_(Vec x,Vec y, int *__ierr ){
*__ierr = VecCopy(
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  vecswap_(Vec x,Vec y, int *__ierr ){
*__ierr = VecSwap(
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  vecstashview_(Vec v,PetscViewer viewer, int *__ierr ){
*__ierr = VecStashView(
	(Vec)PetscToPointer((v) ),
	(PetscViewer)PetscToPointer((viewer) ));
}
#if defined(__cplusplus)
}
#endif
