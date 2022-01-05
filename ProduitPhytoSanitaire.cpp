#include <string>
#include "Header.hpp"
using namespace std;

ProduitPhytosanitaire::ProduitPhytosanitaire(int id, string libelle){
    this->id = id;
    this->libelle = libelle;
}


ProduitPhytosanitaire::ProduitPhytosanitaire(){
    this->id = 0;
    this->libelle = "";
}
