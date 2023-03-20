#include <iostream>

using namespace std;

// std::list implementacja własna
// https://en.cppreference.com/w/cpp/container/list
// push_back
// push_front
// insert wstawianie w środku
// reverse

// https://www.geeksforgeeks.org/containers-cpp-stl/ lista, vector, map, array

struct Pracownik{
  static int numer;
  int Id;
  std::string imie;
  std::string nazwisko;
  std::string adres;
  Pracownik *next;
  Pracownik *prev;
  Pracownik()
  {
    cout<<"konstruktor Pracownik"<<endl;
  }
  int Cunter()
  {
    return numer++;
  }

};

class Lista
{
  Pracownik *head;
  Pracownik *tail;
  class Element
  {
    public:
    Element(Pracownik &p):data(p)
    { 
    }
    Pracownik data;


  };
  public:
  Lista():head(NULL)
  {
    cout<<"konstruktor Lista"<<endl;
  }
  void dodajPracownika(string imie,string nazwisko, string adres);
  void wyswietlListe();
  void usunPracownika(int numerPracownika);

  

};

 void Lista::dodajPracownika( string imie,string nazwisko, string adres)
 {
    Pracownik *nowy = new Pracownik;
    nowy->Id = nowy->Cunter();
    (*nowy).imie = imie;
    nowy->nazwisko = nazwisko;
    nowy->adres = adres;
    if(head == NULL)
    {
      head=nowy;
    }
    else
    {
      Pracownik * temp = head;
      while(temp->next!=NULL)
      {
        temp = temp->next;
      }
      temp->next = nowy; 
    }
    
    

}
void Lista::wyswietlListe()
{
  Pracownik *temp = head;
  if(head == NULL)
  {
    cout<<"Pusto";
  }
  else
  {
    while(temp != NULL)
    {
      cout<<temp->Id<<" "<<temp->imie<<" "<<temp->nazwisko<<" "<<temp->adres<<endl;
      temp = temp->next;
    }
  }
}
int Pracownik::numer = 1;
void Lista::usunPracownika(int numerPracownika)
{

}

int main()
{
  int a;
  Lista Obiekt;
  Lista Obiekt2;
  Obiekt.dodajPracownika("Piotr","Kowalski","Dabrawskiego");
  Obiekt.dodajPracownika("Tomasz","Malinowski","Dabrawskiego");
  Obiekt.dodajPracownika("Alan","Man","Dabrawskiego");
  Obiekt.dodajPracownika("Adam","Dry","Dabrawskiego");
  Obiekt.wyswietlListe();
  cin>>a;
  Obiekt.dodajPracownika("Adam","Dry","Dabrawskiego");
  Obiekt.wyswietlListe();
  

 return 0;
}