#include "manuel.h"

using namespace std;



//==================================================
//
//  Constructeur sans parametres
//
//==================================================
Manuel::Manuel():Livre()
{

    this->m_niveau=0;

}
//==================================================
//
//  Constructeur avec 3 parametres
//
//==================================================

Manuel::Manuel(string titre,string auteur,int niveau):Livre(titre, auteur)
{
    this->m_niveau=niveau;

}

//===================================================
//
//   Les Getters
//===================================================
int Manuel::getNiveau()
{
   return this->m_niveau;
}

//===============================================
//  Les setters
//===============================================

void Manuel::setNiveau(int niveau)
{
   this->m_niveau=m_niveau;
}

//================================================

void Manuel::affiche() const
{
    cout << "Manuel : Titre : " <<  this->m_titre << " ,Auteur : " << this->m_auteur << ", Niveau : " << this->m_niveau << endl;
}

double Manuel::fraisLivraison(double distance){

double dis = Livre::fraisLivraison(distance);

return dis;


}
