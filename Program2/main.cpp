#include <iostream>

using namespace std;

class Otaczjaca
{
public:
string NapisPublic = "Public";

private:
string NapisPrivate = "Pivate";

protected:
string NapisProtected = "Protected";

class Wewnetrzna
{

};



};

class Dziedziczaca:public Otaczjaca
{
    public:
    void wyswietl()
    {
        cout<<NapisPublic;
    }

};

int main()
{
  //  Dziedziczaca obiekt;
  //  obiekt.wyswietl();

    cout<<"Foo";
  
 return 0;
}