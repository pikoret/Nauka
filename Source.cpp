#include <stdio.h>
#include <cstring>
#include <cstdio>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <cctype>
#include <vector>
#include <fstream>
#include <string>
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <memory>


//zmiana
std::unique_ptr<int> ptr = std::unique_ptr<int>(new int());


using namespace std;



int liczenieLinijekTekstuWPlikuTekstowym ( string nazwaPliku)
{
	int licznik=0;
	string linijka;
	ifstream plik ;
	plik.open(nazwaPliku);
	if(!plik.good())
		return false;
	while(!plik.eof())
	{
		getline(plik,linijka);
		licznik++;
	}
	return licznik;
}

string WczytajNazwePliku()
{
	string nazwa;
	nazwa="abc";
	return nazwa;

}

int main()
{
	string dupa;
	char tab[4];
	dupa="dupa";
	dupa = WczytajNazwePliku();
	




	int a;
	cin>>a;
	return 0;


}