#include <iostream>

using namespace std;

//Diamond problem
class Person
{
public:
  Person()
  {
    cout<<"Person"<<endl;
  }
  
  int a;
  virtual void fun()
  {
    cout<<"fun\n";
  }
  ~Person()
  {
    cout<<"~Person"<<endl;
  }
};

class Father:  public Person
{
public:
  Father()
  {
    cout<<"Father"<<endl;
  }
  ~Father()
  {
    cout<<"~Father"<<endl;
  }

};

class Mother:  public Person
{
  public:
  Mother()
  {
    cout<<"Mother"<<endl;
  }
  ~Mother()
  {
    cout<<"~Mother"<<endl;

  }
};

class Child: virtual public Mother, virtual public Father
{
  public:
  Child()
  {
    cout<<"Child"<<endl;
  }
  ~Child()
  {
    cout<<"~Child"<<endl;
  }
};

class Otaczjaca
{
public:

  class Wewnetrzna
  {

  };

int pub=1;
string NapisPublic = "Public";

private:
int priv = 2;
string NapisPrivate = "Pivate";

protected:
int prot = 3;
string NapisProtected = "Protected";




};

class Dziedziczaca:protected Otaczjaca
{
   
    public:
    void wyswietl()
    {
        cout<<NapisPublic<<endl;
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
  //  obiekt.pub=3;
    obiektO.pub=2;
   // cout<<obiekt.prot<<endl;
   Otaczjaca::Wewnetrzna objaaa;
   Child obiektCh;
   obiektCh.fun();
    cout << "Foo";
  cin>>a;
 return 0;
}