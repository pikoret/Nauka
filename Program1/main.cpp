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
  ~Person()
{
  cout<<"~Person"<<endl;
}
};

class Father: virtual public Person
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
class Mother: virtual public Person
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
class Child:public Mother, public Father
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
   // Dziedziczaca obiekt;
   // Otaczjaca obiektO;
   // obiekt.wyswietl();
   // cout<<obiekt.prot<<endl;
   Child obiektCh;
    cout << "Foo";
  cin>>a;
 return 0;
}