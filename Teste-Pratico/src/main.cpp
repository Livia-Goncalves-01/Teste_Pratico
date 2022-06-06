#include "orcamento.hpp"

struct tm tm; //Struct padrão da biblioteca Time.h

//Função que analisa a data e retorna o dia da semana
int DiaSemana(){
	char data[30];  
	int dia_semana, dia, mes, ano;  
	cout << "Digite uma data no formato xx/xx/xxxx: ";
	cin.get(data, 30);
    //Separa a string em inteiros
	sscanf(data, "%d/%d/%d", &dia, &mes, &ano);

    //Confere se a data inserida pelo usuário é válida
	if(dia > 0 && dia <= 31 && mes >  0 && mes <= 12 && ano> 1900 && ano <= 9999){
        tm.tm_year = ano - 1900;
        tm.tm_mon = mes - 1;
        tm.tm_mday = dia;
        //Retorna a data em segundos
        mktime( &tm );

        //Retorna o dia da semana de 0 a 6
        dia_semana = tm.tm_wday;
    }else{
        cout << "Data inválida." << endl;
        exit(1);
    }
	

    return dia_semana;
    
}


int main() {
    int dia, raca_grande, raca_pequena;
    Orcamento aux;
    cout << "-----------------------------------------------" << endl;
cout << "--------------FACA SEU ORCAMENTO---------------" << endl;
    cout << "-----------------------------------------------" << endl;
    dia = DiaSemana();
    cout << "Digite a quantidade de cães de raca pequena: ";
    cin >> raca_pequena;
    cout << "Digite a quantidade de cães de raca grande: ";
    cin >> raca_grande;
    //Chama métodos
    aux.setDia_Semana(dia);
    aux.setRaca_pequena(raca_pequena);
    aux.setRaca_grande(raca_grande);
    aux.Compara();
    
}