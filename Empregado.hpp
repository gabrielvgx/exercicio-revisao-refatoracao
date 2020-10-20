#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    double salarioHora;  
    double qtdHorasDia;
    double percentualHoraExtra;
    std::string nome;

  public:
    Empregado(std::string nome, double salarioHora){
      this->qtdHorasDia = 8;
      this->percentualHoraExtra = 0.5;
      this->salarioHora = salarioHora;
      this->nome = nome;
    }
    Empregado(std::string nome, double salarioHora, double qtdHorasDia, double percentualHoraExtra){
      this->salarioHora = salarioHora;
      this->qtdHorasDia = qtdHorasDia;
      this->percentualHoraExtra = percentualHoraExtra;
      this->nome = nome;
    }

    double calcHoraExtra(double horasTrabalhadas){
        double horasExtras = horasTrabalhadas - this->qtdHorasDia;
        return horasExtras > 0 ? (horasExtras * this->percentualHoraExtra) : 0;
    }

    double calcSalario(double horaTrabalhada, double horaExtra){
        return (horaTrabalhada + horaExtra) * this->salarioHora;
    }

    virtual double pagamentoMes(double horaTrabalhada) {
      double horaExtra = this->calcHoraExtra(horaTrabalhada);
      double salario = this->calcSalario(horaTrabalhada, horaExtra);
	    return salario;
    }

    void setNome(std::string nome){
      this->nome = nome;
    }

    void setSalarioHora(double salarioHora){
      this->salarioHora = salarioHora;
    }

    void setQtdHorasDia(double qtdHorasDia){
      this->qtdHorasDia = qtdHorasDia;
    }

    void setPercentualHoraExtra(double percentualHoraExtra){
      this->percentualHoraExtra = percentualHoraExtra;
    }

    double getSalarioHora(){
      return this->salarioHora;
    }

    double getQtdHorasDia(){
      return this->qtdHorasDia;
    }

    double getPercentualHoraExtra(){
      return this->percentualHoraExtra;
    }

    std::string getNome(){
      return this->nome;
    }

    virtual void geraFolhaPagamento( double horasTrabalhadas ) = 0;
	
};

#endif