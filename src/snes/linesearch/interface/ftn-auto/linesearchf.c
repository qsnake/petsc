#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* linesearch.c */
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

#include "petscsnes.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchcreate_ SNESLINESEARCHCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchcreate_ sneslinesearchcreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchsetup_ SNESLINESEARCHSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchsetup_ sneslinesearchsetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchreset_ SNESLINESEARCHRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchreset_ sneslinesearchreset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchprecheck_ SNESLINESEARCHPRECHECK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchprecheck_ sneslinesearchprecheck
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchpostcheck_ SNESLINESEARCHPOSTCHECK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchpostcheck_ sneslinesearchpostcheck
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchapply_ SNESLINESEARCHAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchapply_ sneslinesearchapply
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchdestroy_ SNESLINESEARCHDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchdestroy_ sneslinesearchdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchsetmonitor_ SNESLINESEARCHSETMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchsetmonitor_ sneslinesearchsetmonitor
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchgetmonitor_ SNESLINESEARCHGETMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchgetmonitor_ sneslinesearchgetmonitor
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchsetfromoptions_ SNESLINESEARCHSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchsetfromoptions_ sneslinesearchsetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchview_ SNESLINESEARCHVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchview_ sneslinesearchview
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchsetsnes_ SNESLINESEARCHSETSNES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchsetsnes_ sneslinesearchsetsnes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchgetsnes_ SNESLINESEARCHGETSNES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchgetsnes_ sneslinesearchgetsnes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchgetlambda_ SNESLINESEARCHGETLAMBDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchgetlambda_ sneslinesearchgetlambda
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchsetlambda_ SNESLINESEARCHSETLAMBDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchsetlambda_ sneslinesearchsetlambda
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchgettolerances_ SNESLINESEARCHGETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchgettolerances_ sneslinesearchgettolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchsettolerances_ SNESLINESEARCHSETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchsettolerances_ sneslinesearchsettolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchgetdamping_ SNESLINESEARCHGETDAMPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchgetdamping_ sneslinesearchgetdamping
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchsetdamping_ SNESLINESEARCHSETDAMPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchsetdamping_ sneslinesearchsetdamping
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchgetorder_ SNESLINESEARCHGETORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchgetorder_ sneslinesearchgetorder
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchsetorder_ SNESLINESEARCHSETORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchsetorder_ sneslinesearchsetorder
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchgetnorms_ SNESLINESEARCHGETNORMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchgetnorms_ sneslinesearchgetnorms
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchsetnorms_ SNESLINESEARCHSETNORMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchsetnorms_ sneslinesearchsetnorms
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchcomputenorms_ SNESLINESEARCHCOMPUTENORMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchcomputenorms_ sneslinesearchcomputenorms
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchsetcomputenorms_ SNESLINESEARCHSETCOMPUTENORMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchsetcomputenorms_ sneslinesearchsetcomputenorms
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchgetvecs_ SNESLINESEARCHGETVECS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchgetvecs_ sneslinesearchgetvecs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchsetvecs_ SNESLINESEARCHSETVECS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchsetvecs_ sneslinesearchsetvecs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchgetwork_ SNESLINESEARCHGETWORK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchgetwork_ sneslinesearchgetwork
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchgetsuccess_ SNESLINESEARCHGETSUCCESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchgetsuccess_ sneslinesearchgetsuccess
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchsetsuccess_ SNESLINESEARCHSETSUCCESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchsetsuccess_ sneslinesearchsetsuccess
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif

void PETSC_STDCALL  sneslinesearchcreate_(MPI_Fint * comm,SNESLineSearch *outlinesearch, int *__ierr ){
*__ierr = SNESLineSearchCreate(
	MPI_Comm_f2c( *(comm) ),outlinesearch);
}

void PETSC_STDCALL  sneslinesearchsetup_(SNESLineSearch linesearch, int *__ierr ){
*__ierr = SNESLineSearchSetUp(
	(SNESLineSearch)PetscToPointer((linesearch) ));
}

void PETSC_STDCALL  sneslinesearchreset_(SNESLineSearch linesearch, int *__ierr ){
*__ierr = SNESLineSearchReset(
	(SNESLineSearch)PetscToPointer((linesearch) ));
}
void PETSC_STDCALL  sneslinesearchprecheck_(SNESLineSearch linesearch,Vec X,Vec Y,PetscBool *changed, int *__ierr ){
*__ierr = SNESLineSearchPreCheck(
	(SNESLineSearch)PetscToPointer((linesearch) ),
	(Vec)PetscToPointer((X) ),
	(Vec)PetscToPointer((Y) ),changed);
}
void PETSC_STDCALL  sneslinesearchpostcheck_(SNESLineSearch linesearch,Vec X,Vec Y,Vec W,PetscBool *changed_Y,PetscBool *changed_W, int *__ierr ){
*__ierr = SNESLineSearchPostCheck(
	(SNESLineSearch)PetscToPointer((linesearch) ),
	(Vec)PetscToPointer((X) ),
	(Vec)PetscToPointer((Y) ),
	(Vec)PetscToPointer((W) ),changed_Y,changed_W);
}
void PETSC_STDCALL  sneslinesearchapply_(SNESLineSearch linesearch,Vec X,Vec F,PetscReal * fnorm,Vec Y, int *__ierr ){
*__ierr = SNESLineSearchApply(
	(SNESLineSearch)PetscToPointer((linesearch) ),
	(Vec)PetscToPointer((X) ),
	(Vec)PetscToPointer((F) ),fnorm,
	(Vec)PetscToPointer((Y) ));
}
void PETSC_STDCALL  sneslinesearchdestroy_(SNESLineSearch * linesearch, int *__ierr ){
*__ierr = SNESLineSearchDestroy(linesearch);
}
void PETSC_STDCALL  sneslinesearchsetmonitor_(SNESLineSearch linesearch,PetscBool *flg, int *__ierr ){
*__ierr = SNESLineSearchSetMonitor(
	(SNESLineSearch)PetscToPointer((linesearch) ),*flg);
}
void PETSC_STDCALL  sneslinesearchgetmonitor_(SNESLineSearch linesearch,PetscViewer *monitor, int *__ierr ){
*__ierr = SNESLineSearchGetMonitor(
	(SNESLineSearch)PetscToPointer((linesearch) ),monitor);
}
void PETSC_STDCALL  sneslinesearchsetfromoptions_(SNESLineSearch linesearch, int *__ierr ){
*__ierr = SNESLineSearchSetFromOptions(
	(SNESLineSearch)PetscToPointer((linesearch) ));
}
void PETSC_STDCALL  sneslinesearchview_(SNESLineSearch linesearch,PetscViewer viewer, int *__ierr ){
*__ierr = SNESLineSearchView(
	(SNESLineSearch)PetscToPointer((linesearch) ),
	(PetscViewer)PetscToPointer((viewer) ));
}
void PETSC_STDCALL  sneslinesearchsetsnes_(SNESLineSearch linesearch,SNES snes, int *__ierr ){
*__ierr = SNESLineSearchSetSNES(
	(SNESLineSearch)PetscToPointer((linesearch) ),
	(SNES)PetscToPointer((snes) ));
}
void PETSC_STDCALL  sneslinesearchgetsnes_(SNESLineSearch linesearch,SNES *snes, int *__ierr ){
*__ierr = SNESLineSearchGetSNES(
	(SNESLineSearch)PetscToPointer((linesearch) ),snes);
}
void PETSC_STDCALL  sneslinesearchgetlambda_(SNESLineSearch linesearch,PetscReal *lambda, int *__ierr ){
*__ierr = SNESLineSearchGetLambda(
	(SNESLineSearch)PetscToPointer((linesearch) ),lambda);
}
void PETSC_STDCALL  sneslinesearchsetlambda_(SNESLineSearch linesearch,PetscReal *lambda, int *__ierr ){
*__ierr = SNESLineSearchSetLambda(
	(SNESLineSearch)PetscToPointer((linesearch) ),*lambda);
}
void PETSC_STDCALL  sneslinesearchgettolerances_(SNESLineSearch linesearch,PetscReal *steptol,PetscReal *maxstep,PetscReal *rtol,PetscReal *atol,PetscReal *ltol,PetscInt *max_its, int *__ierr ){
*__ierr = SNESLineSearchGetTolerances(
	(SNESLineSearch)PetscToPointer((linesearch) ),steptol,maxstep,rtol,atol,ltol,max_its);
}
void PETSC_STDCALL  sneslinesearchsettolerances_(SNESLineSearch linesearch,PetscReal *steptol,PetscReal *maxstep,PetscReal *rtol,PetscReal *atol,PetscReal *ltol,PetscInt *max_its, int *__ierr ){
*__ierr = SNESLineSearchSetTolerances(
	(SNESLineSearch)PetscToPointer((linesearch) ),*steptol,*maxstep,*rtol,*atol,*ltol,*max_its);
}

void PETSC_STDCALL  sneslinesearchgetdamping_(SNESLineSearch linesearch,PetscReal *damping, int *__ierr ){
*__ierr = SNESLineSearchGetDamping(
	(SNESLineSearch)PetscToPointer((linesearch) ),damping);
}
void PETSC_STDCALL  sneslinesearchsetdamping_(SNESLineSearch linesearch,PetscReal *damping, int *__ierr ){
*__ierr = SNESLineSearchSetDamping(
	(SNESLineSearch)PetscToPointer((linesearch) ),*damping);
}

void PETSC_STDCALL  sneslinesearchgetorder_(SNESLineSearch linesearch,PetscInt *order, int *__ierr ){
*__ierr = SNESLineSearchGetOrder(
	(SNESLineSearch)PetscToPointer((linesearch) ),order);
}
void PETSC_STDCALL  sneslinesearchsetorder_(SNESLineSearch linesearch,PetscInt *order, int *__ierr ){
*__ierr = SNESLineSearchSetOrder(
	(SNESLineSearch)PetscToPointer((linesearch) ),*order);
}
void PETSC_STDCALL  sneslinesearchgetnorms_(SNESLineSearch linesearch,PetscReal * xnorm,PetscReal * fnorm,PetscReal * ynorm, int *__ierr ){
*__ierr = SNESLineSearchGetNorms(
	(SNESLineSearch)PetscToPointer((linesearch) ),xnorm,fnorm,ynorm);
}
void PETSC_STDCALL  sneslinesearchsetnorms_(SNESLineSearch linesearch,PetscReal *xnorm,PetscReal *fnorm,PetscReal *ynorm, int *__ierr ){
*__ierr = SNESLineSearchSetNorms(
	(SNESLineSearch)PetscToPointer((linesearch) ),*xnorm,*fnorm,*ynorm);
}
void PETSC_STDCALL  sneslinesearchcomputenorms_(SNESLineSearch linesearch, int *__ierr ){
*__ierr = SNESLineSearchComputeNorms(
	(SNESLineSearch)PetscToPointer((linesearch) ));
}
void PETSC_STDCALL  sneslinesearchsetcomputenorms_(SNESLineSearch linesearch,PetscBool *flg, int *__ierr ){
*__ierr = SNESLineSearchSetComputeNorms(
	(SNESLineSearch)PetscToPointer((linesearch) ),*flg);
}
void PETSC_STDCALL  sneslinesearchgetvecs_(SNESLineSearch linesearch,Vec *X,Vec *F,Vec *Y,Vec *W,Vec *G, int *__ierr ){
*__ierr = SNESLineSearchGetVecs(
	(SNESLineSearch)PetscToPointer((linesearch) ),X,F,Y,W,G);
}
void PETSC_STDCALL  sneslinesearchsetvecs_(SNESLineSearch linesearch,Vec X,Vec F,Vec Y,Vec W,Vec G, int *__ierr ){
*__ierr = SNESLineSearchSetVecs(
	(SNESLineSearch)PetscToPointer((linesearch) ),
	(Vec)PetscToPointer((X) ),
	(Vec)PetscToPointer((F) ),
	(Vec)PetscToPointer((Y) ),
	(Vec)PetscToPointer((W) ),
	(Vec)PetscToPointer((G) ));
}
void PETSC_STDCALL  sneslinesearchgetwork_(SNESLineSearch linesearch,PetscInt *nwork, int *__ierr ){
*__ierr = SNESLineSearchGetWork(
	(SNESLineSearch)PetscToPointer((linesearch) ),*nwork);
}
void PETSC_STDCALL  sneslinesearchgetsuccess_(SNESLineSearch linesearch,PetscBool *success, int *__ierr ){
*__ierr = SNESLineSearchGetSuccess(
	(SNESLineSearch)PetscToPointer((linesearch) ),success);
}
void PETSC_STDCALL  sneslinesearchsetsuccess_(SNESLineSearch linesearch,PetscBool *success, int *__ierr ){
*__ierr = SNESLineSearchSetSuccess(
	(SNESLineSearch)PetscToPointer((linesearch) ),*success);
}
#if defined(__cplusplus)
}
#endif
