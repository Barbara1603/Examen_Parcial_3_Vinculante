//
// Created by barba on 01/12/2024.
//

#ifndef TAREA_H
#define TAREA_H
#include <string>

class Tarea {
private:
    std::string id;
    std::string descripcion;
    int duracion;

public:
    Tarea(const std::string& id, const std::string& descripcion, int duracion);
    std::string getId() const;
    std::string getDescripcion() const;
    int getDuracion() const;
    std::string toString() const;
};
#endif //TAREA_H
