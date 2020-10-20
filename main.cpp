#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro *eng1 = new Engenheiro("Joao Snow", 35, 3);
  eng1->geraFolhaPagamento(9.5);
  
  Engenheiro *eng2 = new Engenheiro("Daniela Targaryen", 30, 1);
  eng2->geraFolhaPagamento(8);
  
  Engenheiro *eng3 = new Engenheiro("Bruno Stark", 30, 2);
  eng3->geraFolhaPagamento(8);
  
  Vendedor *vend1 = new Vendedor("Tonho Lannister", 20, 5000);
  vend1->geraFolhaPagamento(6);
  
  Vendedor *vend2 = new Vendedor("Jose Mormont", 25, 3000);
  vend2->geraFolhaPagamento(8);
	
  Vendedor *vend3 = new Vendedor("Sonia Stark", 30, 4000);
  vend3->geraFolhaPagamento(8);
  
  return 0;	
}