#include <iostream>
using namespace std;

// Función para sumar los elementos de un arreglo
int sumaArreglo(int arr[], int tam) {
    int suma = 0; // Inicializar la suma a 0
    for (int i = 0; i < tam; ++i) {
        suma += arr[i]; // Suma los elementos del arreglo
    }
    return suma; // Devuelve la suma de los elementos
}

int main() {
    int arreglo[] = {1, 2, 3, 4, 5}; // Declarar un arreglo con 5 elementos
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]); // Calcula el tamaño del arreglo
    int resultado = sumaArreglo(arreglo, tamano); // Llama a la función para sumar los elementos del arreglo
    cout << "La suma de los elementos del arreglo es: " << resultado << endl; // Imprime el resultado
    int abc ;
    cin >> abc ;
    return 0;
}

