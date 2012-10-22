
#requiresdefine   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = vecmpitoseqf.c vpscatf.c vscatf.c vinvf.c combf.c cmeshf.c
OBJSC    = vecmpitoseqf.o vpscatf.o vscatf.o vinvf.o combf.o cmeshf.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE  = libpetscvec
LOCDIR   = src/vec/vec/utils/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
