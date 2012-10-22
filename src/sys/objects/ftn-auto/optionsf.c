#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* options.c */
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

#include "petscsys.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscoptionsvalidkey_ PETSCOPTIONSVALIDKEY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscoptionsvalidkey_ petscoptionsvalidkey
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscoptionsprefixpush_ PETSCOPTIONSPREFIXPUSH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscoptionsprefixpush_ petscoptionsprefixpush
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscoptionsprefixpop_ PETSCOPTIONSPREFIXPOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscoptionsprefixpop_ petscoptionsprefixpop
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscoptionsleft_ PETSCOPTIONSLEFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscoptionsleft_ petscoptionsleft
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscoptionssetfromoptions_ PETSCOPTIONSSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscoptionssetfromoptions_ petscoptionssetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscoptionsmonitorcancel_ PETSCOPTIONSMONITORCANCEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscoptionsmonitorcancel_ petscoptionsmonitorcancel
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscoptionsvalidkey_( char in_str[],PetscBool  *key, int *__ierr ){
*__ierr = PetscOptionsValidKey(in_str,key);
}
void PETSC_STDCALL  petscoptionsprefixpush_( char prefix[], int *__ierr ){
*__ierr = PetscOptionsPrefixPush(prefix);
}
void PETSC_STDCALL  petscoptionsprefixpop_(int *__ierr ){
*__ierr = PetscOptionsPrefixPop();
}
void PETSC_STDCALL  petscoptionsleft_(int *__ierr ){
*__ierr = PetscOptionsLeft();
}
void PETSC_STDCALL  petscoptionssetfromoptions_(int *__ierr ){
*__ierr = PetscOptionsSetFromOptions();
}
void PETSC_STDCALL  petscoptionsmonitorcancel_(int *__ierr ){
*__ierr = PetscOptionsMonitorCancel();
}
#if defined(__cplusplus)
}
#endif
