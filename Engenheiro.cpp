#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
	  int projetos;
  
  public:
    Engenheiro(std::string nome, double salarioHora, int projetos) : Empregado { nome, salarioHora }{
      this->projetos = projetos;
    }
    
    void setProjetos(int projetos){
      this->projetos = projetos;
    }

    int getProjetos(){
      return this->projetos;
    }
	
    void geraFolhaPagamento( double horasTrabalhadas ) override {
      std::cout << "Nome: " << this->getNome() << std::endl
                << "Salário Mês: " << this->pagamentoMes(horasTrabalhadas) << std::endl
                << "Projetos: " << this->getProjetos() << std::endl << std::endl;
    }	
};

