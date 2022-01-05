#include <vector>
#include <map>
#include <string>
using namespace std;

//============ Classe Parcelle ===============//
class Parcelle{

    public:
        Parcelle(int, string, string, double);
        Parcelle();
        void ajouterUnTraitement();


    private:
        int id;
        string dateSemis;
        string dateRecoltePrevue;
        double surface;

};


//============ Classe Exploitation ===============//
class Exploitation{

    public:
        Exploitation(int, string, string);
        Exploitation();

    private:
        int id;
        string nomExploitant;
        string melExploitant;

};


//============ Classe EspeceCultivee ===============//
class EspeceCultivee{

    public:
        EspeceCultivee(int, string, string);
        EspeceCultivee();

    private:
        int id;
        string libelle;
        string type;

};


//============ Classe TraitementPhytosanitaire ===============//
class TraitementPhytosanitaire{

    public:
        TraitementPhytosanitaire(int);
        TraitementPhytosanitaire();
        int quantiteApplliquee();


    private:
        int id;

};


//============ Classe TraitementSemence ===============//
class TraitementSemence : public TraitementPhytosanitaire{

    public:
        TraitementSemence(int, double);
        TraitementSemence();
        int quantiteApplliquee();


    private:
        int id;
        double dosageTraitementSemence;

};


//============ Classe TraitementEnChamp ===============//
class TraitementEnChamp{

    public:
        TraitementEnChamp(int);
        TraitementEnChamp();


    private:
        int id

};


//============ Classe Pulverisation ===============//
class Pulverisation{

    public:
        Pulverisation(int, double, string);
        Pulverisation();


    private:
        int id;
        string dosage;
        string datePulverisation;

};


//============ Classe ProduitPhytosaniraire ===============//
class ProduitPhytosanitaire{

    public:
        ProduitPhytosanitaire(int, string);
        ProduitPhytosanitaire();


    private:
        int id;
        string libelle;

};
