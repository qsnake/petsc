
#requiresdefine   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = iscompf.c isltogf.c iscoloringf.c isdifff.c
OBJSC    = iscompf.o isltogf.o iscoloringf.o isdifff.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE	 = libpetscvec
LOCDIR	 = src/vec/is/utils/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
