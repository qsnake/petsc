
#requiresdefine   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = lgf.c lgcf.c dscatterf.c histsf.c axisf.c axiscf.c
OBJSC    = lgf.o lgcf.o dscatterf.o histsf.o axisf.o axiscf.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE  = libpetscsys
LOCDIR   = src/sys/draw/utils/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
