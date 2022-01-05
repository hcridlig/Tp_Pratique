#include <string>
#include "Header.hpp"
using namespace std;

Parcelle::Parcelle(int id, string dateSemis, string dateRecoltePrevue, double surface){
    this->id = id;
    this->dateSemis = dateSemis;
    this->dateRecoltePrevue = dateRecoltePrevue;
    this->surface = surface;
}


Parcelle::Parcelle(){
    this->id = 0;
    this->libelle = "";
    this->dateRecoltePrevue = "";
    this->surface = 0;
}


Parcelle::ajouterUnTraitement(){
}
