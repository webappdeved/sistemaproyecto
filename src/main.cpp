/* 
   ====================================================================
   Materia: Laboratorio de Programación (LPR) - 5°
   E.E.S.T. N° 10 "Hogwarts School of Witchcraft and Wizardry" — Vicente López
   Archivo: src/main.cpp
   Actividad 5: Modelado de Datos con Structs y Punteros
   ====================================================================
*/

#include <iostream>
#include <cstring>

using namespace std;

// 1. DEFINICIÓN DE LA ESTRUCTURA
struct EntidadProyecto {
    int id;
    char nombre[50];
    float metrica; // Representa lecturas de sensores, estado o avance
};

// Prototipo de función con pasaje por dirección mediante puntero
void cargarDatos(EntidadProyecto* ptr);

int main() {
    // Inicialización de seguridad en la memoria Stack
    EntidadProyecto miEntidad = {0, "Modulo Sensor 01 - Prof. York", 0.0f};

    cout << "=====================================================" << endl;
    cout << " MODELADO STRUCT - ESTUDIANTE: Ron Weasley " << endl;
    cout << "=====================================================" << endl;

    // Invocación enviando la dirección física de memoria con '&'
    cargarDatos(&miEntidad);

    cout << "\n=== DATOS VERIFICADOS EN LA MEMORIA RAM ===" << endl;
    cout << "ID Registrado: " << miEntidad.id << endl;
    cout << "Nombre Registrado: " << miEntidad.nombre << endl;
    cout << "Metrica Guardada: " << miEntidad.metrica << endl;
    cout << "Direccion RAM Hexadecimal: " << &miEntidad << endl;
    cout << "=====================================================" << endl;

    return 0; // Código 0: Finalización exitosa
}

void cargarDatos(EntidadProyecto* ptr) {
    cout << "\n-- INGRESO DE DATOS MEDIANTE OPERADOR FLECHA --" << endl;
    cout << "=> Ingrese el ID de la entidad (entero): ";
    cin >> ptr->id;

    // Limpieza del buffer obligatoria antes de cin.getline
    cin.ignore();

    cout << "=> Ingrese el Nombre o Descripcion: ";
    cin.getline(ptr->nombre, 50);

    cout << "=> Ingrese la Metrica de Operacion (decimal/float): ";
    cin >> ptr->metrica;
}