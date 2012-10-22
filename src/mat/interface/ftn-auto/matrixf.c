#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* matrix.c */
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
#define matfindnonzerorows_ MATFINDNONZEROROWS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matfindnonzerorows_ matfindnonzerorows
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetdiagonalblock_ MATGETDIAGONALBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetdiagonalblock_ matgetdiagonalblock
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgettrace_ MATGETTRACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgettrace_ matgettrace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matrealpart_ MATREALPART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matrealpart_ matrealpart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matimaginarypart_ MATIMAGINARYPART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matimaginarypart_ matimaginarypart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matmissingdiagonal_ MATMISSINGDIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmissingdiagonal_ matmissingdiagonal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matconjugate_ MATCONJUGATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matconjugate_ matconjugate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetrowuppertriangular_ MATGETROWUPPERTRIANGULAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetrowuppertriangular_ matgetrowuppertriangular
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matrestorerowuppertriangular_ MATRESTOREROWUPPERTRIANGULAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matrestorerowuppertriangular_ matrestorerowuppertriangular
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetup_ MATSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetup_ matsetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matdestroy_ MATDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matdestroy_ matdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetvalues_ MATSETVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetvalues_ matsetvalues
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetvaluesrowlocal_ MATSETVALUESROWLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetvaluesrowlocal_ matsetvaluesrowlocal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetvaluesrow_ MATSETVALUESROW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetvaluesrow_ matsetvaluesrow
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetvaluesstencil_ MATSETVALUESSTENCIL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetvaluesstencil_ matsetvaluesstencil
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetstencil_ MATSETSTENCIL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetstencil_ matsetstencil
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetvaluesblocked_ MATSETVALUESBLOCKED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetvaluesblocked_ matsetvaluesblocked
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetvalues_ MATGETVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetvalues_ matgetvalues
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetvaluesbatch_ MATSETVALUESBATCH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetvaluesbatch_ matsetvaluesbatch
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetlocaltoglobalmapping_ MATSETLOCALTOGLOBALMAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetlocaltoglobalmapping_ matsetlocaltoglobalmapping
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetlocaltoglobalmappingblock_ MATSETLOCALTOGLOBALMAPPINGBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetlocaltoglobalmappingblock_ matsetlocaltoglobalmappingblock
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetlocaltoglobalmapping_ MATGETLOCALTOGLOBALMAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetlocaltoglobalmapping_ matgetlocaltoglobalmapping
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetlocaltoglobalmappingblock_ MATGETLOCALTOGLOBALMAPPINGBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetlocaltoglobalmappingblock_ matgetlocaltoglobalmappingblock
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetvalueslocal_ MATSETVALUESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetvalueslocal_ matsetvalueslocal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetvaluesblockedlocal_ MATSETVALUESBLOCKEDLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetvaluesblockedlocal_ matsetvaluesblockedlocal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matmultdiagonalblock_ MATMULTDIAGONALBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmultdiagonalblock_ matmultdiagonalblock
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matmult_ MATMULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmult_ matmult
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matmulttranspose_ MATMULTTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmulttranspose_ matmulttranspose
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matmulthermitiantranspose_ MATMULTHERMITIANTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmulthermitiantranspose_ matmulthermitiantranspose
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matmultadd_ MATMULTADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmultadd_ matmultadd
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matmulttransposeadd_ MATMULTTRANSPOSEADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmulttransposeadd_ matmulttransposeadd
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matmulthermitiantransposeadd_ MATMULTHERMITIANTRANSPOSEADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmulthermitiantransposeadd_ matmulthermitiantransposeadd
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matmultconstrained_ MATMULTCONSTRAINED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmultconstrained_ matmultconstrained
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matmulttransposeconstrained_ MATMULTTRANSPOSECONSTRAINED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmulttransposeconstrained_ matmulttransposeconstrained
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsolve_ MATSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsolve_ matsolve
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matmatsolve_ MATMATSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmatsolve_ matmatsolve
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matforwardsolve_ MATFORWARDSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matforwardsolve_ matforwardsolve
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matbackwardsolve_ MATBACKWARDSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matbackwardsolve_ matbackwardsolve
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsolveadd_ MATSOLVEADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsolveadd_ matsolveadd
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsolvetranspose_ MATSOLVETRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsolvetranspose_ matsolvetranspose
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsolvetransposeadd_ MATSOLVETRANSPOSEADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsolvetransposeadd_ matsolvetransposeadd
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsor_ MATSOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsor_ matsor
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matcopy_ MATCOPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcopy_ matcopy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matduplicate_ MATDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matduplicate_ matduplicate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetdiagonal_ MATGETDIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetdiagonal_ matgetdiagonal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetrowmin_ MATGETROWMIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetrowmin_ matgetrowmin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetrowminabs_ MATGETROWMINABS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetrowminabs_ matgetrowminabs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetrowmax_ MATGETROWMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetrowmax_ matgetrowmax
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetrowmaxabs_ MATGETROWMAXABS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetrowmaxabs_ matgetrowmaxabs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetrowsum_ MATGETROWSUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetrowsum_ matgetrowsum
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mattranspose_ MATTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mattranspose_ mattranspose
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matistranspose_ MATISTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matistranspose_ matistranspose
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mathermitiantranspose_ MATHERMITIANTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mathermitiantranspose_ mathermitiantranspose
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matishermitiantranspose_ MATISHERMITIANTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matishermitiantranspose_ matishermitiantranspose
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matpermute_ MATPERMUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matpermute_ matpermute
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matequal_ MATEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matequal_ matequal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matdiagonalscale_ MATDIAGONALSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matdiagonalscale_ matdiagonalscale
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matscale_ MATSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matscale_ matscale
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matnorm_ MATNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matnorm_ matnorm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matassemblybegin_ MATASSEMBLYBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matassemblybegin_ matassemblybegin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matassembled_ MATASSEMBLED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matassembled_ matassembled
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matassemblyend_ MATASSEMBLYEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matassemblyend_ matassemblyend
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetoption_ MATSETOPTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetoption_ matsetoption
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matzeroentries_ MATZEROENTRIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matzeroentries_ matzeroentries
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetsize_ MATGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetsize_ matgetsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetlocalsize_ MATGETLOCALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetlocalsize_ matgetlocalsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetownershiprangecolumn_ MATGETOWNERSHIPRANGECOLUMN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetownershiprangecolumn_ matgetownershiprangecolumn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetownershiprange_ MATGETOWNERSHIPRANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetownershiprange_ matgetownershiprange
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matincreaseoverlap_ MATINCREASEOVERLAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matincreaseoverlap_ matincreaseoverlap
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetblocksize_ MATGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetblocksize_ matgetblocksize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetblocksizes_ MATGETBLOCKSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetblocksizes_ matgetblocksizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetblocksize_ MATSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetblocksize_ matsetblocksize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetblocksizes_ MATSETBLOCKSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetblocksizes_ matsetblocksizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetunfactored_ MATSETUNFACTORED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetunfactored_ matsetunfactored
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetsubmatrix_ MATGETSUBMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetsubmatrix_ matgetsubmatrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matstashsetinitialsize_ MATSTASHSETINITIALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matstashsetinitialsize_ matstashsetinitialsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matinterpolateadd_ MATINTERPOLATEADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matinterpolateadd_ matinterpolateadd
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matinterpolate_ MATINTERPOLATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matinterpolate_ matinterpolate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matrestrict_ MATRESTRICT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matrestrict_ matrestrict
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetnullspace_ MATGETNULLSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetnullspace_ matgetnullspace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetnullspace_ MATSETNULLSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetnullspace_ matsetnullspace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetnearnullspace_ MATSETNEARNULLSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetnearnullspace_ matsetnearnullspace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetnearnullspace_ MATGETNEARNULLSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetnearnullspace_ matgetnearnullspace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetvaluesadic_ MATSETVALUESADIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetvaluesadic_ matsetvaluesadic
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetcoloring_ MATSETCOLORING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetcoloring_ matsetcoloring
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetvaluesadifor_ MATSETVALUESADIFOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetvaluesadifor_ matsetvaluesadifor
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matdiagonalscalelocal_ MATDIAGONALSCALELOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matdiagonalscalelocal_ matdiagonalscalelocal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetinertia_ MATGETINERTIA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetinertia_ matgetinertia
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matissymmetric_ MATISSYMMETRIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matissymmetric_ matissymmetric
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matishermitian_ MATISHERMITIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matishermitian_ matishermitian
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matissymmetricknown_ MATISSYMMETRICKNOWN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matissymmetricknown_ matissymmetricknown
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matishermitianknown_ MATISHERMITIANKNOWN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matishermitianknown_ matishermitianknown
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matisstructurallysymmetric_ MATISSTRUCTURALLYSYMMETRIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matisstructurallysymmetric_ matisstructurallysymmetric
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matstashgetinfo_ MATSTASHGETINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matstashgetinfo_ matstashgetinfo
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matptap_ MATPTAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matptap_ matptap
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matptapnumeric_ MATPTAPNUMERIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matptapnumeric_ matptapnumeric
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matptapsymbolic_ MATPTAPSYMBOLIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matptapsymbolic_ matptapsymbolic
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matrart_ MATRART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matrart_ matrart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matrartnumeric_ MATRARTNUMERIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matrartnumeric_ matrartnumeric
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matrartsymbolic_ MATRARTSYMBOLIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matrartsymbolic_ matrartsymbolic
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matmatmult_ MATMATMULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmatmult_ matmatmult
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matmatmultsymbolic_ MATMATMULTSYMBOLIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmatmultsymbolic_ matmatmultsymbolic
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matmatmultnumeric_ MATMATMULTNUMERIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmatmultnumeric_ matmatmultnumeric
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matmattransposemult_ MATMATTRANSPOSEMULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmattransposemult_ matmattransposemult
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mattransposematmult_ MATTRANSPOSEMATMULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mattransposematmult_ mattransposematmult
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetlocalsubmatrix_ MATGETLOCALSUBMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetlocalsubmatrix_ matgetlocalsubmatrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matrestorelocalsubmatrix_ MATRESTORELOCALSUBMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matrestorelocalsubmatrix_ matrestorelocalsubmatrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matfindzerodiagonals_ MATFINDZERODIAGONALS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matfindzerodiagonals_ matfindzerodiagonals
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  matfindnonzerorows_(Mat mat,IS *keptrows, int *__ierr ){
*__ierr = MatFindNonzeroRows(
	(Mat)PetscToPointer((mat) ),keptrows);
}
void PETSC_STDCALL  matgetdiagonalblock_(Mat A,Mat *a, int *__ierr ){
*__ierr = MatGetDiagonalBlock(
	(Mat)PetscToPointer((A) ),a);
}
void PETSC_STDCALL  matgettrace_(Mat mat,PetscScalar *trace, int *__ierr ){
*__ierr = MatGetTrace(
	(Mat)PetscToPointer((mat) ),trace);
}
void PETSC_STDCALL  matrealpart_(Mat mat, int *__ierr ){
*__ierr = MatRealPart(
	(Mat)PetscToPointer((mat) ));
}
void PETSC_STDCALL  matimaginarypart_(Mat mat, int *__ierr ){
*__ierr = MatImaginaryPart(
	(Mat)PetscToPointer((mat) ));
}
void PETSC_STDCALL  matmissingdiagonal_(Mat mat,PetscBool  *missing,PetscInt *dd, int *__ierr ){
*__ierr = MatMissingDiagonal(
	(Mat)PetscToPointer((mat) ),missing,dd);
}
void PETSC_STDCALL  matconjugate_(Mat mat, int *__ierr ){
*__ierr = MatConjugate(
	(Mat)PetscToPointer((mat) ));
}
void PETSC_STDCALL  matgetrowuppertriangular_(Mat mat, int *__ierr ){
*__ierr = MatGetRowUpperTriangular(
	(Mat)PetscToPointer((mat) ));
}
void PETSC_STDCALL  matrestorerowuppertriangular_(Mat mat, int *__ierr ){
*__ierr = MatRestoreRowUpperTriangular(
	(Mat)PetscToPointer((mat) ));
}
void PETSC_STDCALL  matsetup_(Mat A, int *__ierr ){
*__ierr = MatSetUp(
	(Mat)PetscToPointer((A) ));
}
void PETSC_STDCALL  matdestroy_(Mat *A, int *__ierr ){
*__ierr = MatDestroy(A);
}
void PETSC_STDCALL  matsetvalues_(Mat mat,PetscInt *m, PetscInt idxm[],PetscInt *n, PetscInt idxn[], PetscScalar v[],InsertMode *addv, int *__ierr ){
*__ierr = MatSetValues(
	(Mat)PetscToPointer((mat) ),*m,idxm,*n,idxn,v,*addv);
}
void PETSC_STDCALL  matsetvaluesrowlocal_(Mat mat,PetscInt *row, PetscScalar v[], int *__ierr ){
*__ierr = MatSetValuesRowLocal(
	(Mat)PetscToPointer((mat) ),*row,v);
}
void PETSC_STDCALL  matsetvaluesrow_(Mat mat,PetscInt *row, PetscScalar v[], int *__ierr ){
*__ierr = MatSetValuesRow(
	(Mat)PetscToPointer((mat) ),*row,v);
}
void PETSC_STDCALL  matsetvaluesstencil_(Mat mat,PetscInt *m, MatStencil idxm[],PetscInt *n, MatStencil idxn[], PetscScalar v[],InsertMode *addv, int *__ierr ){
*__ierr = MatSetValuesStencil(
	(Mat)PetscToPointer((mat) ),*m,idxm,*n,idxn,v,*addv);
}
void PETSC_STDCALL  matsetstencil_(Mat mat,PetscInt *dim, PetscInt dims[], PetscInt starts[],PetscInt *dof, int *__ierr ){
*__ierr = MatSetStencil(
	(Mat)PetscToPointer((mat) ),*dim,dims,starts,*dof);
}
void PETSC_STDCALL  matsetvaluesblocked_(Mat mat,PetscInt *m, PetscInt idxm[],PetscInt *n, PetscInt idxn[], PetscScalar v[],InsertMode *addv, int *__ierr ){
*__ierr = MatSetValuesBlocked(
	(Mat)PetscToPointer((mat) ),*m,idxm,*n,idxn,v,*addv);
}
void PETSC_STDCALL  matgetvalues_(Mat mat,PetscInt *m, PetscInt idxm[],PetscInt *n, PetscInt idxn[],PetscScalar v[], int *__ierr ){
*__ierr = MatGetValues(
	(Mat)PetscToPointer((mat) ),*m,idxm,*n,idxn,v);
}
void PETSC_STDCALL  matsetvaluesbatch_(Mat mat,PetscInt *nb,PetscInt *bs,PetscInt rows[], PetscScalar v[], int *__ierr ){
*__ierr = MatSetValuesBatch(
	(Mat)PetscToPointer((mat) ),*nb,*bs,rows,v);
}
void PETSC_STDCALL  matsetlocaltoglobalmapping_(Mat x,ISLocalToGlobalMapping rmapping,ISLocalToGlobalMapping cmapping, int *__ierr ){
*__ierr = MatSetLocalToGlobalMapping(
	(Mat)PetscToPointer((x) ),
	(ISLocalToGlobalMapping)PetscToPointer((rmapping) ),
	(ISLocalToGlobalMapping)PetscToPointer((cmapping) ));
}
void PETSC_STDCALL  matsetlocaltoglobalmappingblock_(Mat x,ISLocalToGlobalMapping rmapping,ISLocalToGlobalMapping cmapping, int *__ierr ){
*__ierr = MatSetLocalToGlobalMappingBlock(
	(Mat)PetscToPointer((x) ),
	(ISLocalToGlobalMapping)PetscToPointer((rmapping) ),
	(ISLocalToGlobalMapping)PetscToPointer((cmapping) ));
}
void PETSC_STDCALL  matgetlocaltoglobalmapping_(Mat A,ISLocalToGlobalMapping *rmapping,ISLocalToGlobalMapping *cmapping, int *__ierr ){
*__ierr = MatGetLocalToGlobalMapping(
	(Mat)PetscToPointer((A) ),rmapping,cmapping);
}
void PETSC_STDCALL  matgetlocaltoglobalmappingblock_(Mat A,ISLocalToGlobalMapping *rmapping,ISLocalToGlobalMapping *cmapping, int *__ierr ){
*__ierr = MatGetLocalToGlobalMappingBlock(
	(Mat)PetscToPointer((A) ),rmapping,cmapping);
}
void PETSC_STDCALL  matsetvalueslocal_(Mat mat,PetscInt *nrow, PetscInt irow[],PetscInt *ncol, PetscInt icol[], PetscScalar y[],InsertMode *addv, int *__ierr ){
*__ierr = MatSetValuesLocal(
	(Mat)PetscToPointer((mat) ),*nrow,irow,*ncol,icol,y,*addv);
}
void PETSC_STDCALL  matsetvaluesblockedlocal_(Mat mat,PetscInt *nrow, PetscInt irow[],PetscInt *ncol, PetscInt icol[], PetscScalar y[],InsertMode *addv, int *__ierr ){
*__ierr = MatSetValuesBlockedLocal(
	(Mat)PetscToPointer((mat) ),*nrow,irow,*ncol,icol,y,*addv);
}
void PETSC_STDCALL  matmultdiagonalblock_(Mat mat,Vec x,Vec y, int *__ierr ){
*__ierr = MatMultDiagonalBlock(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  matmult_(Mat mat,Vec x,Vec y, int *__ierr ){
*__ierr = MatMult(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  matmulttranspose_(Mat mat,Vec x,Vec y, int *__ierr ){
*__ierr = MatMultTranspose(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  matmulthermitiantranspose_(Mat mat,Vec x,Vec y, int *__ierr ){
*__ierr = MatMultHermitianTranspose(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  matmultadd_(Mat mat,Vec v1,Vec v2,Vec v3, int *__ierr ){
*__ierr = MatMultAdd(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((v1) ),
	(Vec)PetscToPointer((v2) ),
	(Vec)PetscToPointer((v3) ));
}
void PETSC_STDCALL  matmulttransposeadd_(Mat mat,Vec v1,Vec v2,Vec v3, int *__ierr ){
*__ierr = MatMultTransposeAdd(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((v1) ),
	(Vec)PetscToPointer((v2) ),
	(Vec)PetscToPointer((v3) ));
}
void PETSC_STDCALL  matmulthermitiantransposeadd_(Mat mat,Vec v1,Vec v2,Vec v3, int *__ierr ){
*__ierr = MatMultHermitianTransposeAdd(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((v1) ),
	(Vec)PetscToPointer((v2) ),
	(Vec)PetscToPointer((v3) ));
}
void PETSC_STDCALL  matmultconstrained_(Mat mat,Vec x,Vec y, int *__ierr ){
*__ierr = MatMultConstrained(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  matmulttransposeconstrained_(Mat mat,Vec x,Vec y, int *__ierr ){
*__ierr = MatMultTransposeConstrained(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  matsolve_(Mat mat,Vec b,Vec x, int *__ierr ){
*__ierr = MatSolve(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((b) ),
	(Vec)PetscToPointer((x) ));
}
void PETSC_STDCALL  matmatsolve_(Mat A,Mat B,Mat X, int *__ierr ){
*__ierr = MatMatSolve(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((B) ),
	(Mat)PetscToPointer((X) ));
}
void PETSC_STDCALL  matforwardsolve_(Mat mat,Vec b,Vec x, int *__ierr ){
*__ierr = MatForwardSolve(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((b) ),
	(Vec)PetscToPointer((x) ));
}
void PETSC_STDCALL  matbackwardsolve_(Mat mat,Vec b,Vec x, int *__ierr ){
*__ierr = MatBackwardSolve(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((b) ),
	(Vec)PetscToPointer((x) ));
}
void PETSC_STDCALL  matsolveadd_(Mat mat,Vec b,Vec y,Vec x, int *__ierr ){
*__ierr = MatSolveAdd(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((b) ),
	(Vec)PetscToPointer((y) ),
	(Vec)PetscToPointer((x) ));
}
void PETSC_STDCALL  matsolvetranspose_(Mat mat,Vec b,Vec x, int *__ierr ){
*__ierr = MatSolveTranspose(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((b) ),
	(Vec)PetscToPointer((x) ));
}
void PETSC_STDCALL  matsolvetransposeadd_(Mat mat,Vec b,Vec y,Vec x, int *__ierr ){
*__ierr = MatSolveTransposeAdd(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((b) ),
	(Vec)PetscToPointer((y) ),
	(Vec)PetscToPointer((x) ));
}
void PETSC_STDCALL  matsor_(Mat mat,Vec b,PetscReal *omega,MatSORType *flag,PetscReal *shift,PetscInt *its,PetscInt *lits,Vec x, int *__ierr ){
*__ierr = MatSOR(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((b) ),*omega,*flag,*shift,*its,*lits,
	(Vec)PetscToPointer((x) ));
}
void PETSC_STDCALL  matcopy_(Mat A,Mat B,MatStructure *str, int *__ierr ){
*__ierr = MatCopy(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((B) ),*str);
}
void PETSC_STDCALL  matduplicate_(Mat mat,MatDuplicateOption *op,Mat *M, int *__ierr ){
*__ierr = MatDuplicate(
	(Mat)PetscToPointer((mat) ),*op,M);
}
void PETSC_STDCALL  matgetdiagonal_(Mat mat,Vec v, int *__ierr ){
*__ierr = MatGetDiagonal(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((v) ));
}
void PETSC_STDCALL  matgetrowmin_(Mat mat,Vec v,PetscInt idx[], int *__ierr ){
*__ierr = MatGetRowMin(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((v) ),idx);
}
void PETSC_STDCALL  matgetrowminabs_(Mat mat,Vec v,PetscInt idx[], int *__ierr ){
*__ierr = MatGetRowMinAbs(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((v) ),idx);
}
void PETSC_STDCALL  matgetrowmax_(Mat mat,Vec v,PetscInt idx[], int *__ierr ){
*__ierr = MatGetRowMax(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((v) ),idx);
}
void PETSC_STDCALL  matgetrowmaxabs_(Mat mat,Vec v,PetscInt idx[], int *__ierr ){
*__ierr = MatGetRowMaxAbs(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((v) ),idx);
}
void PETSC_STDCALL  matgetrowsum_(Mat mat,Vec v, int *__ierr ){
*__ierr = MatGetRowSum(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((v) ));
}
void PETSC_STDCALL  mattranspose_(Mat mat,MatReuse *reuse,Mat *B, int *__ierr ){
*__ierr = MatTranspose(
	(Mat)PetscToPointer((mat) ),*reuse,B);
}
void PETSC_STDCALL  matistranspose_(Mat A,Mat B,PetscReal *tol,PetscBool  *flg, int *__ierr ){
*__ierr = MatIsTranspose(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((B) ),*tol,flg);
}
void PETSC_STDCALL  mathermitiantranspose_(Mat mat,MatReuse *reuse,Mat *B, int *__ierr ){
*__ierr = MatHermitianTranspose(
	(Mat)PetscToPointer((mat) ),*reuse,B);
}
void PETSC_STDCALL  matishermitiantranspose_(Mat A,Mat B,PetscReal *tol,PetscBool  *flg, int *__ierr ){
*__ierr = MatIsHermitianTranspose(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((B) ),*tol,flg);
}
void PETSC_STDCALL  matpermute_(Mat mat,IS row,IS col,Mat *B, int *__ierr ){
*__ierr = MatPermute(
	(Mat)PetscToPointer((mat) ),
	(IS)PetscToPointer((row) ),
	(IS)PetscToPointer((col) ),B);
}
void PETSC_STDCALL  matequal_(Mat A,Mat B,PetscBool  *flg, int *__ierr ){
*__ierr = MatEqual(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((B) ),flg);
}
void PETSC_STDCALL  matdiagonalscale_(Mat mat,Vec l,Vec r, int *__ierr ){
*__ierr = MatDiagonalScale(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((l) ),
	(Vec)PetscToPointer((r) ));
}
void PETSC_STDCALL  matscale_(Mat mat,PetscScalar *a, int *__ierr ){
*__ierr = MatScale(
	(Mat)PetscToPointer((mat) ),*a);
}
void PETSC_STDCALL  matnorm_(Mat mat,NormType *type,PetscReal *nrm, int *__ierr ){
*__ierr = MatNorm(
	(Mat)PetscToPointer((mat) ),*type,nrm);
}
void PETSC_STDCALL  matassemblybegin_(Mat mat,MatAssemblyType *type, int *__ierr ){
*__ierr = MatAssemblyBegin(
	(Mat)PetscToPointer((mat) ),*type);
}
void PETSC_STDCALL  matassembled_(Mat mat,PetscBool  *assembled, int *__ierr ){
*__ierr = MatAssembled(
	(Mat)PetscToPointer((mat) ),assembled);
}
void PETSC_STDCALL  matassemblyend_(Mat mat,MatAssemblyType *type, int *__ierr ){
*__ierr = MatAssemblyEnd(
	(Mat)PetscToPointer((mat) ),*type);
}
void PETSC_STDCALL  matsetoption_(Mat mat,MatOption *op,PetscBool  *flg, int *__ierr ){
*__ierr = MatSetOption(
	(Mat)PetscToPointer((mat) ),*op,*flg);
}
void PETSC_STDCALL  matzeroentries_(Mat mat, int *__ierr ){
*__ierr = MatZeroEntries(
	(Mat)PetscToPointer((mat) ));
}
void PETSC_STDCALL  matgetsize_(Mat mat,PetscInt *m,PetscInt* n, int *__ierr ){
*__ierr = MatGetSize(
	(Mat)PetscToPointer((mat) ),m,n);
}
void PETSC_STDCALL  matgetlocalsize_(Mat mat,PetscInt *m,PetscInt* n, int *__ierr ){
*__ierr = MatGetLocalSize(
	(Mat)PetscToPointer((mat) ),m,n);
}
void PETSC_STDCALL  matgetownershiprangecolumn_(Mat mat,PetscInt *m,PetscInt* n, int *__ierr ){
*__ierr = MatGetOwnershipRangeColumn(
	(Mat)PetscToPointer((mat) ),m,n);
}
void PETSC_STDCALL  matgetownershiprange_(Mat mat,PetscInt *m,PetscInt* n, int *__ierr ){
*__ierr = MatGetOwnershipRange(
	(Mat)PetscToPointer((mat) ),m,n);
}
void PETSC_STDCALL  matincreaseoverlap_(Mat mat,PetscInt *n,IS is[],PetscInt *ov, int *__ierr ){
*__ierr = MatIncreaseOverlap(
	(Mat)PetscToPointer((mat) ),*n,is,*ov);
}
void PETSC_STDCALL  matgetblocksize_(Mat mat,PetscInt *bs, int *__ierr ){
*__ierr = MatGetBlockSize(
	(Mat)PetscToPointer((mat) ),bs);
}
void PETSC_STDCALL  matgetblocksizes_(Mat mat,PetscInt *rbs,PetscInt *cbs, int *__ierr ){
*__ierr = MatGetBlockSizes(
	(Mat)PetscToPointer((mat) ),rbs,cbs);
}
void PETSC_STDCALL  matsetblocksize_(Mat mat,PetscInt *bs, int *__ierr ){
*__ierr = MatSetBlockSize(
	(Mat)PetscToPointer((mat) ),*bs);
}
void PETSC_STDCALL  matsetblocksizes_(Mat mat,PetscInt *rbs,PetscInt *cbs, int *__ierr ){
*__ierr = MatSetBlockSizes(
	(Mat)PetscToPointer((mat) ),*rbs,*cbs);
}
void PETSC_STDCALL  matsetunfactored_(Mat mat, int *__ierr ){
*__ierr = MatSetUnfactored(
	(Mat)PetscToPointer((mat) ));
}
void PETSC_STDCALL  matgetsubmatrix_(Mat mat,IS isrow,IS iscol,MatReuse *cll,Mat *newmat, int *__ierr ){
*__ierr = MatGetSubMatrix(
	(Mat)PetscToPointer((mat) ),
	(IS)PetscToPointer((isrow) ),
	(IS)PetscToPointer((iscol) ),*cll,newmat);
}
void PETSC_STDCALL  matstashsetinitialsize_(Mat mat,PetscInt *size,PetscInt *bsize, int *__ierr ){
*__ierr = MatStashSetInitialSize(
	(Mat)PetscToPointer((mat) ),*size,*bsize);
}
void PETSC_STDCALL  matinterpolateadd_(Mat A,Vec x,Vec y,Vec w, int *__ierr ){
*__ierr = MatInterpolateAdd(
	(Mat)PetscToPointer((A) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ),
	(Vec)PetscToPointer((w) ));
}
void PETSC_STDCALL  matinterpolate_(Mat A,Vec x,Vec y, int *__ierr ){
*__ierr = MatInterpolate(
	(Mat)PetscToPointer((A) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  matrestrict_(Mat A,Vec x,Vec y, int *__ierr ){
*__ierr = MatRestrict(
	(Mat)PetscToPointer((A) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  matgetnullspace_(Mat mat,MatNullSpace *nullsp, int *__ierr ){
*__ierr = MatGetNullSpace(
	(Mat)PetscToPointer((mat) ),nullsp);
}
void PETSC_STDCALL  matsetnullspace_(Mat mat,MatNullSpace nullsp, int *__ierr ){
*__ierr = MatSetNullSpace(
	(Mat)PetscToPointer((mat) ),
	(MatNullSpace)PetscToPointer((nullsp) ));
}
void PETSC_STDCALL  matsetnearnullspace_(Mat mat,MatNullSpace nullsp, int *__ierr ){
*__ierr = MatSetNearNullSpace(
	(Mat)PetscToPointer((mat) ),
	(MatNullSpace)PetscToPointer((nullsp) ));
}
void PETSC_STDCALL  matgetnearnullspace_(Mat mat,MatNullSpace *nullsp, int *__ierr ){
*__ierr = MatGetNearNullSpace(
	(Mat)PetscToPointer((mat) ),nullsp);
}
void PETSC_STDCALL  matsetvaluesadic_(Mat mat,void*v, int *__ierr ){
*__ierr = MatSetValuesAdic(
	(Mat)PetscToPointer((mat) ),v);
}
void PETSC_STDCALL  matsetcoloring_(Mat mat,ISColoring coloring, int *__ierr ){
*__ierr = MatSetColoring(
	(Mat)PetscToPointer((mat) ),
	(ISColoring)PetscToPointer((coloring) ));
}
void PETSC_STDCALL  matsetvaluesadifor_(Mat mat,PetscInt *nl,void*v, int *__ierr ){
*__ierr = MatSetValuesAdifor(
	(Mat)PetscToPointer((mat) ),*nl,v);
}
void PETSC_STDCALL  matdiagonalscalelocal_(Mat mat,Vec diag, int *__ierr ){
*__ierr = MatDiagonalScaleLocal(
	(Mat)PetscToPointer((mat) ),
	(Vec)PetscToPointer((diag) ));
}
void PETSC_STDCALL  matgetinertia_(Mat mat,PetscInt *nneg,PetscInt *nzero,PetscInt *npos, int *__ierr ){
*__ierr = MatGetInertia(
	(Mat)PetscToPointer((mat) ),nneg,nzero,npos);
}
void PETSC_STDCALL  matissymmetric_(Mat A,PetscReal *tol,PetscBool  *flg, int *__ierr ){
*__ierr = MatIsSymmetric(
	(Mat)PetscToPointer((A) ),*tol,flg);
}
void PETSC_STDCALL  matishermitian_(Mat A,PetscReal *tol,PetscBool  *flg, int *__ierr ){
*__ierr = MatIsHermitian(
	(Mat)PetscToPointer((A) ),*tol,flg);
}
void PETSC_STDCALL  matissymmetricknown_(Mat A,PetscBool  *set,PetscBool  *flg, int *__ierr ){
*__ierr = MatIsSymmetricKnown(
	(Mat)PetscToPointer((A) ),set,flg);
}
void PETSC_STDCALL  matishermitianknown_(Mat A,PetscBool  *set,PetscBool  *flg, int *__ierr ){
*__ierr = MatIsHermitianKnown(
	(Mat)PetscToPointer((A) ),set,flg);
}
void PETSC_STDCALL  matisstructurallysymmetric_(Mat A,PetscBool  *flg, int *__ierr ){
*__ierr = MatIsStructurallySymmetric(
	(Mat)PetscToPointer((A) ),flg);
}
void PETSC_STDCALL  matstashgetinfo_(Mat mat,PetscInt *nstash,PetscInt *reallocs,PetscInt *bnstash,PetscInt *breallocs, int *__ierr ){
*__ierr = MatStashGetInfo(
	(Mat)PetscToPointer((mat) ),nstash,reallocs,bnstash,breallocs);
}
void PETSC_STDCALL  matptap_(Mat A,Mat P,MatReuse *scall,PetscReal *fill,Mat *C, int *__ierr ){
*__ierr = MatPtAP(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((P) ),*scall,*fill,C);
}
void PETSC_STDCALL  matptapnumeric_(Mat A,Mat P,Mat C, int *__ierr ){
*__ierr = MatPtAPNumeric(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((P) ),
	(Mat)PetscToPointer((C) ));
}
void PETSC_STDCALL  matptapsymbolic_(Mat A,Mat P,PetscReal *fill,Mat *C, int *__ierr ){
*__ierr = MatPtAPSymbolic(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((P) ),*fill,C);
}
void PETSC_STDCALL  matrart_(Mat A,Mat R,MatReuse *scall,PetscReal *fill,Mat *C, int *__ierr ){
*__ierr = MatRARt(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((R) ),*scall,*fill,C);
}
void PETSC_STDCALL  matrartnumeric_(Mat A,Mat R,Mat C, int *__ierr ){
*__ierr = MatRARtNumeric(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((R) ),
	(Mat)PetscToPointer((C) ));
}
void PETSC_STDCALL  matrartsymbolic_(Mat A,Mat R,PetscReal *fill,Mat *C, int *__ierr ){
*__ierr = MatRARtSymbolic(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((R) ),*fill,C);
}
void PETSC_STDCALL  matmatmult_(Mat A,Mat B,MatReuse *scall,PetscReal *fill,Mat *C, int *__ierr ){
*__ierr = MatMatMult(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((B) ),*scall,*fill,C);
}
void PETSC_STDCALL  matmatmultsymbolic_(Mat A,Mat B,PetscReal *fill,Mat *C, int *__ierr ){
*__ierr = MatMatMultSymbolic(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((B) ),*fill,C);
}
void PETSC_STDCALL  matmatmultnumeric_(Mat A,Mat B,Mat C, int *__ierr ){
*__ierr = MatMatMultNumeric(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((B) ),
	(Mat)PetscToPointer((C) ));
}
void PETSC_STDCALL  matmattransposemult_(Mat A,Mat B,MatReuse *scall,PetscReal *fill,Mat *C, int *__ierr ){
*__ierr = MatMatTransposeMult(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((B) ),*scall,*fill,C);
}
void PETSC_STDCALL  mattransposematmult_(Mat A,Mat B,MatReuse *scall,PetscReal *fill,Mat *C, int *__ierr ){
*__ierr = MatTransposeMatMult(
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((B) ),*scall,*fill,C);
}
void PETSC_STDCALL  matgetlocalsubmatrix_(Mat mat,IS isrow,IS iscol,Mat *submat, int *__ierr ){
*__ierr = MatGetLocalSubMatrix(
	(Mat)PetscToPointer((mat) ),
	(IS)PetscToPointer((isrow) ),
	(IS)PetscToPointer((iscol) ),submat);
}
void PETSC_STDCALL  matrestorelocalsubmatrix_(Mat mat,IS isrow,IS iscol,Mat *submat, int *__ierr ){
*__ierr = MatRestoreLocalSubMatrix(
	(Mat)PetscToPointer((mat) ),
	(IS)PetscToPointer((isrow) ),
	(IS)PetscToPointer((iscol) ),submat);
}
void PETSC_STDCALL  matfindzerodiagonals_(Mat mat,IS *is, int *__ierr ){
*__ierr = MatFindZeroDiagonals(
	(Mat)PetscToPointer((mat) ),is);
}
#if defined(__cplusplus)
}
#endif
