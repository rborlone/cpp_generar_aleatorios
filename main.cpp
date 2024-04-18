#include <iostream>
#include <cstdlib>
#include <fmt/core.h>
#include <random>
#include <vector>

using namespace std;

vector<int> generarRuta(int tamano){
	random_device rd;
	mt19937 motorRandom(rd()); //Motor Aleatorio

	uniform_int_distribution<int> distr(1, tamano); // Distribución uniforme entre 0 y 52

    std::vector<int> numeros(tamano);
    for (int i = 0; i < tamano; ++i) {
        numeros[i] = distr(motorRandom);
    }

	return numeros;
}

int main()
{
    int tamanoArreglo = 52;
    std::vector<int> numerosAleatorios = generarRuta(tamanoArreglo);

    // Imprimimos los números generados
    std::cout << "Números aleatorios generados: ";
    for (int num : numerosAleatorios) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

