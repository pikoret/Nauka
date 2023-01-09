#include <iostream>

using namespace std;

// konstruktor kopiujący, operator przypsania, move konstruktor, move assighment
class MyString
{
public:
    MyString(const char * tekst, int dlugosc)
    {
        this->tekst = new char[dlugosc];
        strncpy(this->tekst ,tekst, dlugosc);
    }

    MyString(const MyString & other):MyString(other.tekst, other.dlugosc)
    {

    }


private:
    char * tekst;
    int a;

};

// lvalue , rvalue, xvalue

int main()
{
    MyString obj1("bardzo dlugi tekst", 17);

// 1. kopiujaćy konstuktor
    MyString obj2(obj1);
// wyswetl
// 2. przypisanie
    MyString obj3("bardt", 5);
// wyswietl
    obj3 = obj1;
    //wystielt
    //3. move constructor
    MyString obj4(std::move(obj1));
    //wyswietl
    //4. move asignthem
        MyString obj5("obj5", 4);
        //wyswietl
        MyString obj5=std::move(obj2);



    return 0;
}


class ksztalt 
{


public: 
    virtual void niepowtarzalna()
    {
        cout<<"pierwsza";
    }
    virtual void oblicz_pole() = 0;

};

class kolo: public ksztalt
{
public:
 
    float r;
    float pi=3.14;

    
      
    kolo (kolo &a)
    {
        r=a.r;
        cout <<"konstruktor kopiujący"<<endl;
    }
 
    public:
    kolo(float x)
    {
        r=x;
    }
  
    void niepowtarzalna() const override
    {  
        cout << "Pole kola:"<<pi*r*r<<endl;
    }
    virtual void oblicz_pole() override
    {
        cout << "Pole kola:"<<pi*r*r<<endl;
    }

};

class kwadrat : public ksztalt
{
    int bok;
    public:
 kwadrat(float x)
{
    bok=x;
 
}


virtual void oblicz_pole() override
{
    cout <<"Pole kwadratu:"<<bok*bok<< endl;

}


};


int main()
{
    


    ////
kolo k(1);
kwadrat kw(2);

    std::cout<<"ho \n";

ksztalt *wsk;  

wsk = &k;
wsk -> oblicz_pole();
wsk->niepowtarzalna();
 std::cout<<"\n------\n";   
wsk = &kw;
wsk -> oblicz_pole();

kolo *a = new kolo(10);
kolo b (*a);




   
 return 0;
}