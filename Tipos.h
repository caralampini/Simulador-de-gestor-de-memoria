#ifndef Tipos_H
#define Tipos_H

enum class EstadoProceso
{
    NUEVO, // 0
    LISTO,
    ESPERA_MEM,
    EJECUCION,
    TERMINADO
};

enum class Direction
{
    PRIMER_AJUSTE, // 0
    MEJOR_AJUSTE,
    PEOR_AJUSTE
};

#endif // Tipos_H
