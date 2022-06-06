#include "orcamento.hpp"

struct tm tm;

int DiaSemana(){
	char data[30];  
	int dia_semana, dia, mes, ano;  
	cout << "Digite uma data: ";
	cin.get(data, 30);
	sscanf(data, "%d/%d/%d", &dia, &mes, &ano);
	
	tm.tm_year = ano - 1900;
    tm.tm_mon = mes - 1;
    tm.tm_mday = dia;
    
    mktime( &tm );
    dia_semana = tm.tm_wday;

    return dia_semana;
    
}


int main() {
    int dia, raca_grande, raca_pequena;
    Orcamento aux;

    dia = DiaSemana();
    cout << "Digite a quantidadde de cães de raca pequena: ";
    cin >> raca_pequena;
    cout << "Digite a quantidadde de cães de raca grande: ";
    cin >> raca_grande;
    
    aux.setDia_Semana(dia);
    aux.setRaca_pequena(raca_pequena);
    aux.setRaca_grande(raca_grande);
    aux.Compara();
    
}