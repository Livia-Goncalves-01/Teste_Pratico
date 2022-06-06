#ifndef ORCAMENTO_HPP
#define ORCAMENTO_HPP

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Orcamento {
    private:
        int raca_pequena, raca_grande, dia_semana;
    public:

        float MeuCaninoFeliz();
        float VaiRex();
        float ChowChawgas();
        void Compara();

        // metodos set
        void setRaca_pequena(int raca_pequena);
        void setRaca_grande(int raca_grande);
        void setDia_Semana(int dia_semana);
};

#endif