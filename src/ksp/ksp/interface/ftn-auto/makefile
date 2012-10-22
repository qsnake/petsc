
#requiresdefine   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = xmonf.c iterativf.c itresf.c eigef.c itcreatef.c itfuncf.c itclf.c
OBJSC    = xmonf.o iterativf.o itresf.o eigef.o itcreatef.o itfuncf.o itclf.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE  = libpetscksp
LOCDIR   = src/ksp/ksp/interface/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
