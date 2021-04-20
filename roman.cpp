#include "roman.h"

using namespace std;



//==================================================
//
//  Constructeur sans parametres
//
//==================================================
Roman::Roman():Livre()
{

    this->m_prix=0;

}
//==================================================
//
//  Constructeur avec 3 parametres
//
//==================================================

Roman::Roman(string titre,string auteur,int prix):Livre(titre, auteur)
{
 
    this->m_prix=prix;

}

//===================================================
//
//   Les Getters
//===================================================
int Roman::getPrix()
{
   return this->m_prix;
}

//===============================================
//  Les setters
//===============================================

void Roman::setPrix(int prix)
{
   this->m_prix=m_prix;
}

//================================================

void Roman::affiche() const
{
    cout << "Roman : Titre : " <<  this->m_titre << " ,Auteur : " << this->m_auteur << ", Nbprix : " << this->m_prix << endl;
}

double Roman::fraisLivraison(double distance){

double dis = Livre::fraisLivraison(distance);

return dis;

}
