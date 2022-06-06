#include "orcamento.hpp"

using namespace std;

//Implementação dos métodos 
void Orcamento::setRaca_pequena(int raca_pequena) {
    this->raca_pequena = raca_pequena;

}
void Orcamento::setRaca_grande(int raca_grande) {
    this->raca_grande = raca_grande;
}
void Orcamento::setDia_Semana(int dia_semana) {
    this-> dia_semana = dia_semana;
}

//Analisa o dia da semana e realiza o cálculo do orçamento Meu Canino Feliz
float Orcamento::MeuCaninoFeliz(){
	float valor = 0;
	if(dia_semana == 5 || dia_semana == 6){
		valor = (raca_pequena * (20+(20*0.2))) + (raca_grande * (40+(40*0.2))); 
	}else{
		valor = (raca_pequena* 20) + (raca_grande * 40);
	}
	
	return valor;
}

//Analisa o dia da semana e realiza o cálculo do orçamento Vai Rex
float Orcamento::VaiRex(){
	float valor = 0;
	if(dia_semana == 5 || dia_semana == 6){
		valor = (raca_pequena * 20) + (raca_grande * 55);
		
	}else{
		valor = (raca_pequena * 15) + (raca_grande * 50);
	}
	
	return valor;
}

//Analisa o dia da semana e realiza o cálculo do orçamento ChowChawgas
float Orcamento::ChowChawgas(){
	float valor = 0;
		valor = (raca_pequena * (30)) + (raca_grande * (45)); 

	return valor;
}

//Compara os valores do orçamento e retorna o de melhor custo;
void Orcamento::Compara(){
    float valorMCF, valorVR, valorCC;

    //Atribui as variáveis os valores retornados nas funções acima
    valorMCF = MeuCaninoFeliz();
    valorVR = VaiRex();
    valorCC = ChowChawgas();

	if(valorMCF < valorVR && valorMCF < valorCC ){
		printf("\nO petshop mais barato: Meu Canino Feliz no valor de: R$%.2f\n", valorMCF);
	}else if(valorVR <= valorMCF && valorVR < valorCC ){
		printf("\nO petshop mais barato: Vai Rex no valor de: R$%.2f\n", valorVR);
	}else if(valorCC <= valorMCF && valorCC <= valorVR ){
		printf("\nO petshop mais barato: ChowChawgas no valor de: R$%.2f\n", valorCC);
	}

}
