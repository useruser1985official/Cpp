/*
* Uso: Crie um objeto do tipo Date e use os m�todos para pegar dia, m�s, ano, etc. Por exemplo:
*
* Date atual; 
*
* string dia = atual.day();
* string mes = atual.month();
* string ano = atual.year();
*
* cout << "O dia de hoje �: " << dia << "/" << mes << "/" << ano << endl;
*/

#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace chrono;

// A implementa��o da classe est� em Date.cpp
class Date {
    public:
        string now();
        string week();
        string day();
        string month();
        string year();
        string hours();
        string minutes();
        string seconds();
    private:
        static time_t atual;
        static string semana[7];
        int ds;

        string manip(int quant, const char* tex);
};

#endif // DATE_H