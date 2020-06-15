#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Aerolinea_2.o \
	${OBJECTDIR}/Avion_2.o \
	${OBJECTDIR}/ColaAviones.o \
	${OBJECTDIR}/GrafoViajes.o \
	${OBJECTDIR}/InicioSesion.o \
	${OBJECTDIR}/Itinerario_2.o \
	${OBJECTDIR}/MainWindows.o \
	${OBJECTDIR}/MostrarAerolineas.o \
	${OBJECTDIR}/MostrarItinerario.o \
	${OBJECTDIR}/RegistrarUsuario.o \
	${OBJECTDIR}/Usuario_2.o \
	${OBJECTDIR}/Vuelo_2.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=`pkg-config gtkmm-3.0 --cflags` -pthread 
CXXFLAGS=`pkg-config gtkmm-3.0 --cflags` -pthread 

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/proyectoalgoritmosprincipal

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/proyectoalgoritmosprincipal: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/proyectoalgoritmosprincipal ${OBJECTFILES} ${LDLIBSOPTIONS} `pkg-config gtkmm-3.0 --libs`

${OBJECTDIR}/Aerolinea_2.o: Aerolinea_2.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Aerolinea_2.o Aerolinea_2.cpp

${OBJECTDIR}/Avion_2.o: Avion_2.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Avion_2.o Avion_2.cpp

${OBJECTDIR}/ColaAviones.o: ColaAviones.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ColaAviones.o ColaAviones.cpp

${OBJECTDIR}/GrafoViajes.o: GrafoViajes.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GrafoViajes.o GrafoViajes.cpp

${OBJECTDIR}/InicioSesion.o: InicioSesion.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/InicioSesion.o InicioSesion.cpp

${OBJECTDIR}/Itinerario_2.o: Itinerario_2.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Itinerario_2.o Itinerario_2.cpp

${OBJECTDIR}/MainWindows.o: MainWindows.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MainWindows.o MainWindows.cpp

${OBJECTDIR}/MostrarAerolineas.o: MostrarAerolineas.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MostrarAerolineas.o MostrarAerolineas.cpp

${OBJECTDIR}/MostrarItinerario.o: MostrarItinerario.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MostrarItinerario.o MostrarItinerario.cpp

${OBJECTDIR}/RegistrarUsuario.o: RegistrarUsuario.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/RegistrarUsuario.o RegistrarUsuario.cpp

${OBJECTDIR}/Usuario_2.o: Usuario_2.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Usuario_2.o Usuario_2.cpp

${OBJECTDIR}/Vuelo_2.o: Vuelo_2.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Vuelo_2.o Vuelo_2.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/proyectoalgoritmosprincipal

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
