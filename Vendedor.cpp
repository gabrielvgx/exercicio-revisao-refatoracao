#include <string>
#include "Empregado.hpp"
#define NUMERO_MESES_ANO 12

class Vendedor : public Empregado {

  private:
	double quotaMensalVendas;
	
  public:

	Vendedor(std::string nome, double salarioHora, double quotaMensalVendas) : Empregado{ nome, salarioHora } {
		this->quotaMensalVendas = quotaMensalVendas;
	}

	double quotaTotalAnual() {
	  return this->quotaMensalVendas * NUMERO_MESES_ANO;
	}

	void geraFolhaPagamento( double horasTrabalhadas ) override {
		std::cout << "Nome: " << this->getNome() << std::endl
		          << "Salário Mês: " << this->pagamentoMes(horasTrabalhadas) << std::endl
				  << "Quota Vendas: " << this->quotaTotalAnual() << std::endl << std::endl;
	}	
};

