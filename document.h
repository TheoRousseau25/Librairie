#ifndef DOCUMENT_H_INCLUDED
#define DOCUMENT_H_INCLUDED
#include <string.h>
#include <iostream>
using namespace std;

class Document
{
  public:
  Document();
  Document(string titre);
  virtual void affiche() const; // affiche une description du véhicule
  virtual string getTitre();
  virtual void setTitre(string);
  virtual double fraisLivraison(double distance);
  
  protected:
  string m_titre;


};


#endif // DOCUMENT_H_INCLUDED
