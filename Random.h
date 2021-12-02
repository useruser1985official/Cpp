/*
* Uso: Crie um objeto do tipo Random e coloque o mínimo e o máximo:
*
* Random ale;

* cout << ale.nextInt(15, 20) << endl; // Gera de 15 a 20
* cout << ale.nextInt(1, 5) << endl; // Gera de 1 a 5
*
*/

#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED
#include <cstdlib>
#include <ctime>

// A implementação da classe está em Random.cpp
class Random {
    public:
        int nextInt(int mini, int maxi);

        Random();
    private:
        int rd;
};

#endif // RANDOM_H_INCLUDED