
#requiresdefine   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = gmresf.c gmpref.c
OBJSC    = gmresf.o gmpref.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE  = libpetscksp
LOCDIR   = src/ksp/ksp/impls/gmres/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
