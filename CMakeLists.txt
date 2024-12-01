cmake_minimum_required(VERSION 3.29)
project(Examen_Parcial_3_Vinculante)

set(CMAKE_CXX_STANDARD 14)

include_directories(Actor)
include_directories(Tarea)

add_executable(Examen_Parcial_3_Vinculante
    main.cpp
        Actor/Actor.h
        Actor/Actor.cpp
        Crud/crud.cpp
        Crud/crud.h
        Launcher/Launcher.cpp
        Launcher/Launcher.h
        Tarea/Tarea.cpp
        Tarea/Tarea.h)
