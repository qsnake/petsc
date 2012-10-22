
#requiresdefine   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = snesf.c snesutf.c
OBJSC    = snesf.o snesutf.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE  = libpetscsnes
LOCDIR   = src/snes/interface/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
