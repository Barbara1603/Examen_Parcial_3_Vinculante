#include "Launcher/Launcher.h"
#include <iostream>


int main() {
    try {
        Launcher launcher;
        launcher.imprimirTareas();
        launcher.ejecutar();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}