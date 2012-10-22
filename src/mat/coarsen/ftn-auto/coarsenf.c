#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* coarsen.c */
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
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matcoarsenapply_ MATCOARSENAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcoarsenapply_ matcoarsenapply
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matcoarsensetadjacency_ MATCOARSENSETADJACENCY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcoarsensetadjacency_ matcoarsensetadjacency
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matcoarsensetstrictaggs_ MATCOARSENSETSTRICTAGGS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcoarsensetstrictaggs_ matcoarsensetstrictaggs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matcoarsensetverbose_ MATCOARSENSETVERBOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcoarsensetverbose_ matcoarsensetverbose
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matcoarsendestroy_ MATCOARSENDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcoarsendestroy_ matcoarsendestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matcoarsencreate_ MATCOARSENCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcoarsencreate_ matcoarsencreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matcoarsensetfromoptions_ MATCOARSENSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcoarsensetfromoptions_ matcoarsensetfromoptions
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  matcoarsenapply_(MatCoarsen *coarser, int *__ierr ){
*__ierr = MatCoarsenApply(*coarser);
}
void PETSC_STDCALL  matcoarsensetadjacency_(MatCoarsen *agg,Mat adj, int *__ierr ){
*__ierr = MatCoarsenSetAdjacency(*agg,
	(Mat)PetscToPointer((adj) ));
}
void PETSC_STDCALL  matcoarsensetstrictaggs_(MatCoarsen *agg,PetscBool *str, int *__ierr ){
*__ierr = MatCoarsenSetStrictAggs(*agg,*str);
}
void PETSC_STDCALL  matcoarsensetverbose_(MatCoarsen *agg,PetscInt *vv, int *__ierr ){
*__ierr = MatCoarsenSetVerbose(*agg,*vv);
}
void PETSC_STDCALL  matcoarsendestroy_(MatCoarsen *agg, int *__ierr ){
*__ierr = MatCoarsenDestroy(
	(MatCoarsen* )PetscToPointer((agg) ));
}
void PETSC_STDCALL  matcoarsencreate_(MPI_Fint * comm,MatCoarsen *newcrs, int *__ierr ){
*__ierr = MatCoarsenCreate(
	MPI_Comm_f2c( *(comm) ),
	(MatCoarsen* )PetscToPointer((newcrs) ));
}
void PETSC_STDCALL  matcoarsensetfromoptions_(MatCoarsen *coarser, int *__ierr ){
*__ierr = MatCoarsenSetFromOptions(*coarser);
}
#if defined(__cplusplus)
}
#endif
