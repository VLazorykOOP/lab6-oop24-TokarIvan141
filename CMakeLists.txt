cmake_minimum_required(VERSION 3.29)
project(Lab6)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab6 main.cpp
        Task1/Base1NV.cpp
        Task1/Base1NV.h
        Task1/Base2NV.cpp
        Task1/Base2NV.h
        Task1/Derived1NV.cpp
        Task1/Derived1NV.h
        Task1/Derived2NV.cpp
        Task1/Derived2NV.h
        Task1/Derived3NV.cpp
        Task1/Derived3NV.h
        Task1/Base1V.cpp
        Task1/Base1V.h
        Task1/Base2V.cpp
        Task1/Base2V.h
        Task1/Derived1V.cpp
        Task1/Derived1V.h
        Task1/Derived2V.cpp
        Task1/Derived2V.h
        Task1/Derived3V.cpp
        Task1/Derived3V.h
        Task2/Figure.h
        Task2/Parallelepiped.cpp
        Task2/Parallelepiped.h
        Task2/Tetrahedron.cpp
        Task2/Tetrahedron.h
        Task2/Sphere.cpp
        Task2/Sphere.h
        Task3/WaterBody.h
        Task3/Bay.cpp
        Task3/Bay.h
        Task3/Gulf.cpp
        Task3/Gulf.h
        Task3/Sea.cpp
        Task3/Sea.h)
