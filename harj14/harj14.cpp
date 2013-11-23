/*****************************************************
* Harjoitus 14 (Palautus vko 45)
*
* Tee ohjelma, joka kysyy henkilötietosi seuraavasti:
* Anna (kaikki) etunimesi (merkkijono):
* Anna kengannumero (kokonaisluku):
* Anna sukunimi (merkkijono):
* Anna koulumatka (reaaliluku):
* Anna osoitteesi:
* Anna postinumero:
*
* Ohjelma tulostaa tiedot seuraavasti:
* sukunimi etunimet
* osoite
* postinumero
* kengannumero ja koulumatka
*
* Käytä C++:n cin- ja cout-olioita ohjelman toteuttamiseen.
******************************************************/

#include <iostream>

using namespace std;

int main ()
{
	char etunimi[40];
	int numero;
	char sukunimi[20];
	double koulumatka;
	char osoite[20];
	int postinumero;

	cout<<"Anna kaikki etunimesi"<<endl;
	cin>>etunimi;
	cout<<"Anna kengannumero"<<endl;
	cin>>numero;
	cout<<"Anna sukunimi"<<endl;
	cin>>sukunimi;
	cout<<"Anna koulumatkasi pituus"<<endl;
	cin>>koulumatka;
	cout<<"Anna osoitteesi"<<endl;
	cin>>osoite;
	cout<<"Anna postinumero"<<endl;
	cin>>postinumero;
	cout<<"Nimi: "<<sukunimi<<" "<<etunimi<<endl;
	cout<<"Osoite: "<<osoite<<endl;
	cout<<"Postinumero; "<<postinumero<<endl;
	cout<<"Kengannumero: "<<numero<<" Koulumatka: "<<koulumatka<<endl;
}