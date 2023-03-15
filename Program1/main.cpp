#include <iostream>

using namespace std;

class Otaczjaca
{
public:
int pub=1;
string NapisPublic = "Public";

private:
int priv = 2;
string NapisPrivate = "Pivate";

protected:
int prot = 3;
string NapisProtected = "Protected";

class Wewnetrzna
{

};



};

class Dziedziczaca:private Otaczjaca
{
   
    public:
    void wyswietl()
    {
      //  cout<<NapisPublic<<endl;
        cout<<NapisProtected<<endl;
      //  cout<<NapisPrivate<<endl;
    }
    
    int temp =2;
};

class Dupa
{


};

int main()
{
    int a;
    Dziedziczaca obiekt;
    Otaczjaca obiektO;
    obiekt.wyswietl();
   // cout<<obiekt.prot<<endl;
    cout << "Foo";
  cin>>a;
 return 0;
}