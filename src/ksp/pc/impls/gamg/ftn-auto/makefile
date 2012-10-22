
#requiresdefine   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = aggf.c gamgf.c
OBJSC    = aggf.o gamgf.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE  = libpetscksp
LOCDIR   = src/ksp/pc/impls/gamg/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
