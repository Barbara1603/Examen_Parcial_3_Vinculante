//
// Created by barba on 01/12/2024.
//

#ifndef LAUNCHER_H
#define LAUNCHER_H
#include "../Actor/Actor.h"
#include "../Tarea/Tarea.h"
#include <vector>

class Launcher {
public:
    Launcher();
    void ejecutar();
    std::vector<Tarea> getListaDeTareas() const;
    void crearActoresConInput();
    void asignarTareasConInput();
    void imprimirTareas();

private:
    std::vector<Tarea> crearTareas();
    std::vector<Actor> actores;
    std::vector<Tarea> tareas;
};
#endif //LAUNCHER_H
