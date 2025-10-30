class MemoryManager;

class BloqueMemoria
{
private:
    int idProceso;  // ID del proceso si esta ocupado, 0 si esta hueco
    int tamanio;    // Tamaño del este bloque memoria

    BloqueMemoria* siguiente;
    BloqueMemoria* previo;

public:
    BloqueMemoria(int tamanio, int idProceso = 0);

    // --- Getters ---
    int getIDProceso() const { return idProceso; }
    int getTamanio() const { return tamanio; }
    bool esHueco() const { return idProceso == 0; }
    BloqueMemoria* getSiguiente() const { return siguiente; }
    BloqueMemoria* getPrevio() const { return previo; }

    friend class MemoryManager; // Se hace amiga a MemoryManager para que pueda modificar los punteros.

};  