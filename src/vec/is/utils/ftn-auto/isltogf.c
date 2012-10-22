#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* isltog.c */
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
#include "petscis.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define islocaltoglobalmappingcreateis_ ISLOCALTOGLOBALMAPPINGCREATEIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define islocaltoglobalmappingcreateis_ islocaltoglobalmappingcreateis
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define islocaltoglobalmappingcreate_ ISLOCALTOGLOBALMAPPINGCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define islocaltoglobalmappingcreate_ islocaltoglobalmappingcreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define islocaltoglobalmappingblock_ ISLOCALTOGLOBALMAPPINGBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define islocaltoglobalmappingblock_ islocaltoglobalmappingblock
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define islocaltoglobalmappingunblock_ ISLOCALTOGLOBALMAPPINGUNBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define islocaltoglobalmappingunblock_ islocaltoglobalmappingunblock
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define islocaltoglobalmappingdestroy_ ISLOCALTOGLOBALMAPPINGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define islocaltoglobalmappingdestroy_ islocaltoglobalmappingdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define islocaltoglobalmappingapplyis_ ISLOCALTOGLOBALMAPPINGAPPLYIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define islocaltoglobalmappingapplyis_ islocaltoglobalmappingapplyis
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define isglobaltolocalmappingapply_ ISGLOBALTOLOCALMAPPINGAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define isglobaltolocalmappingapply_ isglobaltolocalmappingapply
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  islocaltoglobalmappingcreateis_(IS is,ISLocalToGlobalMapping *mapping, int *__ierr ){
*__ierr = ISLocalToGlobalMappingCreateIS(
	(IS)PetscToPointer((is) ),mapping);
}
void PETSC_STDCALL  islocaltoglobalmappingcreate_(MPI_Fint * cm,PetscInt *n, PetscInt indices[],PetscCopyMode *mode,ISLocalToGlobalMapping *mapping, int *__ierr ){
*__ierr = ISLocalToGlobalMappingCreate(
	MPI_Comm_f2c( *(cm) ),*n,indices,*mode,mapping);
}
void PETSC_STDCALL  islocaltoglobalmappingblock_(ISLocalToGlobalMapping inmap,PetscInt *bs,ISLocalToGlobalMapping *outmap, int *__ierr ){
*__ierr = ISLocalToGlobalMappingBlock(
	(ISLocalToGlobalMapping)PetscToPointer((inmap) ),*bs,outmap);
}
void PETSC_STDCALL  islocaltoglobalmappingunblock_(ISLocalToGlobalMapping inmap,PetscInt *bs,ISLocalToGlobalMapping *outmap, int *__ierr ){
*__ierr = ISLocalToGlobalMappingUnBlock(
	(ISLocalToGlobalMapping)PetscToPointer((inmap) ),*bs,outmap);
}
void PETSC_STDCALL  islocaltoglobalmappingdestroy_(ISLocalToGlobalMapping *mapping, int *__ierr ){
*__ierr = ISLocalToGlobalMappingDestroy(mapping);
}
void PETSC_STDCALL  islocaltoglobalmappingapplyis_(ISLocalToGlobalMapping mapping,IS is,IS *newis, int *__ierr ){
*__ierr = ISLocalToGlobalMappingApplyIS(
	(ISLocalToGlobalMapping)PetscToPointer((mapping) ),
	(IS)PetscToPointer((is) ),newis);
}
void PETSC_STDCALL  isglobaltolocalmappingapply_(ISLocalToGlobalMapping mapping,ISGlobalToLocalMappingType *type,
                                  PetscInt *n, PetscInt idx[],PetscInt *nout,PetscInt idxout[], int *__ierr ){
*__ierr = ISGlobalToLocalMappingApply(
	(ISLocalToGlobalMapping)PetscToPointer((mapping) ),*type,*n,idx,nout,idxout);
}
#if defined(__cplusplus)
}
#endif
