#ifndef Proceso_H
#define Proceso_H

#include "Tipos.h" // Incluimos

class Proceso
{
private:
    // Atributos
    int id;
    int tamanio;          // Cuanta memoria necesita el proceso
    int tiempoTotalCPU;   // Cuando tiempo total necesita (10 ticks por ejemplo)
    int tiempoEjecutado;  // Cuanto tiempo ya corrio el proceso
    EstadoProceso estado; // Estado actual del proceso

public:
    // Constructor
    Proceso(int id, int tamanio, int tiempoTotalCPU)
    {
        this->id = id;
        this->tamanio = tamanio;
        this->tiempoTotalCPU = tiempoTotalCPU;
    }

    // Getters
    int getId() const { return id; }
    int getTamanio() const { return tamanio; }
    int getTiempoTotalCPU() const { return tiempoTotalCPU; }
    int getTiempoEjecutado() const { return tiempoEjecutado; }
    EstadoProceso getEstado() const { return estado; }

    // Setters
    void setEstado(EstadoProceso estado)
    {
        this->estado = estado;
    }
};

#endif // Proceso_H