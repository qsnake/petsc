
#requiresdefine   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = mgf.c mgfuncf.c
OBJSC    = mgf.o mgfuncf.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE  = libpetscksp
LOCDIR   = src/ksp/pc/impls/mg/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
