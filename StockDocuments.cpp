#include "StockDocuments.h"

using namespace std;

StockDocuments::StockDocuments()
{
    m_listeDocument.clear();
}

StockDocuments::~StockDocuments()
{
    for (int i(0); i<m_listeDocument.size();++i)
    {
        delete m_listeDocument[i]; // libèrev le tableau
        m_listeDocument[i] = 0;
    }
}

void StockDocuments::ajouterLivre(Livre livre)
{
    m_listeDocument.push_back(new Livre(livre));
}

void StockDocuments::ajouterDictionnaire(Dictionnaire dictionnaire)
{
    m_listeDocument.push_back(new Dictionnaire(dictionnaire));
}

void StockDocuments::affiche() const
{

    for(int i(0);i<m_listeDocument.size();++i)
    {
        m_listeDocument[i]->affiche();
    }
   
}

double StockDocuments::fraisLivraison(double distance)
{
    double somme = 0;

    for(int i(0);i<m_listeDocument.size();++i)
    {
       somme += m_listeDocument[i]->fraisLivraison(distance);
    }

   return somme;
}

void StockDocuments::ajouterDocument(Document* document)
{
    m_listeDocument.push_back(document);
}

void bonDeCommande(StockDocuments liste, double distance)
{

    cout << "------------------------------------" << endl;

    liste.affiche();
    
    cout << "------------------------------------" << endl;
    
    
    cout << "Frais Livraison pour une distance de " << distance << " km est : "<< liste.fraisLivraison(distance) << " Euros" << endl;
}

