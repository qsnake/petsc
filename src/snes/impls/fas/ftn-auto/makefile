
#requiresdefine   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = fasf.c fasgalerkinf.c fasfuncf.c
OBJSC    = fasf.o fasgalerkinf.o fasfuncf.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE  = libpetscsnes
LOCDIR   = src/snes/impls/fas/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
