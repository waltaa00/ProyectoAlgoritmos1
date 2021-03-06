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
CND_CONF=Release
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
	${OBJECTDIR}/Drawing.o \
	${OBJECTDIR}/EliminarVuelo.o \
	${OBJECTDIR}/GrafoViajes.o \
	${OBJECTDIR}/Informe.o \
	${OBJECTDIR}/InicioSesion.o \
	${OBJECTDIR}/Itinerario_2.o \
	${OBJECTDIR}/MainWindows.o \
	${OBJECTDIR}/ModuloAdministrativo.o \
	${OBJECTDIR}/MostrarAerolineas.o \
	${OBJECTDIR}/MostrarItinerario.o \
	${OBJECTDIR}/MuestraDestinos.o \
	${OBJECTDIR}/MuestraSalidas.o \
	${OBJECTDIR}/OrigenDestinoBusiness.o \
	${OBJECTDIR}/OrigenDestinoDataSingleton.o \
	${OBJECTDIR}/RegistrarUsuario.o \
	${OBJECTDIR}/UsuarioBusiness.o \
	${OBJECTDIR}/UsuarioData.o \
	${OBJECTDIR}/Usuario_2.o \
	${OBJECTDIR}/Vuelo_2.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

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
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/proyectoalgoritmosprincipal ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Aerolinea_2.o: Aerolinea_2.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Aerolinea_2.o Aerolinea_2.cpp

${OBJECTDIR}/Avion_2.o: Avion_2.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Avion_2.o Avion_2.cpp

${OBJECTDIR}/ColaAviones.o: ColaAviones.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ColaAviones.o ColaAviones.cpp

${OBJECTDIR}/Drawing.o: Drawing.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Drawing.o Drawing.cpp

${OBJECTDIR}/EliminarVuelo.o: EliminarVuelo.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/EliminarVuelo.o EliminarVuelo.cpp

${OBJECTDIR}/GrafoViajes.o: GrafoViajes.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GrafoViajes.o GrafoViajes.cpp

${OBJECTDIR}/Informe.o: Informe.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Informe.o Informe.cpp

${OBJECTDIR}/InicioSesion.o: InicioSesion.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/InicioSesion.o InicioSesion.cpp

${OBJECTDIR}/Itinerario_2.o: Itinerario_2.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Itinerario_2.o Itinerario_2.cpp

${OBJECTDIR}/MainWindows.o: MainWindows.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MainWindows.o MainWindows.cpp

${OBJECTDIR}/ModuloAdministrativo.o: ModuloAdministrativo.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ModuloAdministrativo.o ModuloAdministrativo.cpp

${OBJECTDIR}/MostrarAerolineas.o: MostrarAerolineas.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MostrarAerolineas.o MostrarAerolineas.cpp

${OBJECTDIR}/MostrarItinerario.o: MostrarItinerario.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MostrarItinerario.o MostrarItinerario.cpp

${OBJECTDIR}/MuestraDestinos.o: MuestraDestinos.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MuestraDestinos.o MuestraDestinos.cpp

${OBJECTDIR}/MuestraSalidas.o: MuestraSalidas.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MuestraSalidas.o MuestraSalidas.cpp

${OBJECTDIR}/OrigenDestinoBusiness.o: OrigenDestinoBusiness.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/OrigenDestinoBusiness.o OrigenDestinoBusiness.cpp

${OBJECTDIR}/OrigenDestinoDataSingleton.o: OrigenDestinoDataSingleton.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/OrigenDestinoDataSingleton.o OrigenDestinoDataSingleton.cpp

${OBJECTDIR}/RegistrarUsuario.o: RegistrarUsuario.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/RegistrarUsuario.o RegistrarUsuario.cpp

${OBJECTDIR}/UsuarioBusiness.o: UsuarioBusiness.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/UsuarioBusiness.o UsuarioBusiness.cpp

${OBJECTDIR}/UsuarioData.o: UsuarioData.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/UsuarioData.o UsuarioData.cpp

${OBJECTDIR}/Usuario_2.o: Usuario_2.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Usuario_2.o Usuario_2.cpp

${OBJECTDIR}/Vuelo_2.o: Vuelo_2.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Vuelo_2.o Vuelo_2.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
