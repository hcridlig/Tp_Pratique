#include <string>
#include "Header.hpp"
using namespace std;

EspeceCultivee::EspeceCultivee(int id, string libelle, string type){
    this->id = id;
    this->libelle = libelle;
    this->type = type;
}


EspeceCultivee::EspeceCultivee(){
    this->id = 0;
    this->libelle = "";
    this->type = "";
}
