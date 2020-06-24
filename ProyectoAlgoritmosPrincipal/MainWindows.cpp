

#include "MainWindows.h"

MainWindows::MainWindows() {
    this->set_title("AeroTurri");
    initComponents();
}

MainWindows::~MainWindows() {

}

void MainWindows::initComponents() {
    this->set_size_request(400, 500);
    this->set_resizable(false);
    this->fixed.put(menuBar, 0, 0); // se agrega el menuBar al contenedor fixed
    this->menuArchivo.set_label("Archivo");
    this->menuBar.append(this->menuArchivo);
    this->menuArchivo.set_submenu(this->subMenuArchivo);
    this->menuRegistraUsuario.add_pixlabel("assets/register.png", "Registrar Usuario");
    this->menuIniciaSesion.add_pixlabel("assets/user.png", "Iniciar Sesion");
    this->menuAerolineas.add_pixlabel("assets/plane.png", "Aerolineas");
    this->menuDestinos.add_pixlabel("assets/hiking.png", "Destinos");
    this->menuSalidas.add_pixlabel("assets/itinerary.png", "Salidas");


    this->menuIniciaSesion.signal_activate().connect(sigc::mem_fun(*this, &MainWindows::abrirInicioSesion));
    this->subMenuArchivo.append(this->menuIniciaSesion);

    this->menuRegistraUsuario.signal_activate().connect(sigc::mem_fun(*this, &MainWindows::abrirRegistrarUsuario));
    this->subMenuArchivo.append(this->menuRegistraUsuario);

    this->menuAerolineas.signal_activate().connect(sigc::mem_fun(*this, &MainWindows::abrirAerolineas));
    this->subMenuArchivo.append(this->menuAerolineas);
    this->menuDestinos.signal_activate().connect(sigc::mem_fun(*this, &MainWindows::abrirDestinos));
    this->subMenuArchivo.append(this->menuDestinos);
    
    this->menuSalidas.signal_activate().connect(sigc::mem_fun(*this, &MainWindows::abrirSalidas));
    this->subMenuArchivo.append(this->menuSalidas);


    this->registrarUsuario = 0;
    this->inicioSesion = 0;
    this->mostrarAerolineas = 0;
    this->mostrarDestinos = 0;
    this->muestraSalidas = 0;

    this->add(fixed);
    this->show_all_children();
}

void MainWindows::abrirAerolineas() {
    if (this->mostrarAerolineas != 0)
        return;

    this->mostrarAerolineas = new MostrarAerolineas();
    this->mostrarAerolineas->signal_hide().connect(sigc::mem_fun(*this, &MainWindows::aboutWinClose));
    this->mostrarAerolineas->show_all();
}

void MainWindows::abrirInicioSesion() {
    if (this->inicioSesion != 0)
        return;

    this->inicioSesion = new InicioSesion();
    this->inicioSesion->signal_hide().connect(sigc::mem_fun(*this, &MainWindows::aboutWinClose));
    this->inicioSesion->show_all();
}

void MainWindows::abrirRegistrarUsuario() {
    if (this->registrarUsuario != 0)
        return;

    this->registrarUsuario = new RegistrarUsuario();
    this->registrarUsuario->signal_hide().connect(sigc::mem_fun(*this, &MainWindows::aboutWinClose));
    this->registrarUsuario->show_all();
}

void MainWindows::abrirDestinos() {
    if (this->mostrarDestinos != 0)
        return;

    this->mostrarDestinos = new MuestraDestinos();
    this->mostrarDestinos->signal_hide().connect(sigc::mem_fun(*this, &MainWindows::aboutWinClose));
    this->mostrarDestinos->show_all();
}

void MainWindows::abrirSalidas() {
    if (this->muestraSalidas != 0)
        return;

    this->muestraSalidas = new MuestraSalidas();
    this->muestraSalidas->signal_hide().connect(sigc::mem_fun(*this, &MainWindows::aboutWinClose));
    this->muestraSalidas->show_all();
}

void MainWindows::aboutWinClose() {
    this->registrarUsuario = 0;
    this->inicioSesion = 0;
    this->mostrarAerolineas = 0;
    this->mostrarDestinos = 0;
    this->muestraSalidas = 0;

}
