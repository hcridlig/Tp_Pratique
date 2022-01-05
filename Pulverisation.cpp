#include <string>
#include "Header.hpp"
using namespace std;

Pulverisation::Pulverisation(int id, double dosage, string datePulverisation){
    this->id = id;
    this->dosage = dosage;
    this->datePulverisation = datePulverisation;
}


Pulverisation::Pulverisation(){
    this->id = 0;
    this->dosage = "";
    this->datePulverisation = "";
}
