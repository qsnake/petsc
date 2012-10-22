
#requiresdefine   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = sortipf.c psplitf.c memcf.c sortif.c psleepf.c sortdf.c mpiuf.c
OBJSC    = sortipf.o psplitf.o memcf.o sortif.o psleepf.o sortdf.o mpiuf.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE	  = libpetscsys
LOCDIR	  = src/sys/utils/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
