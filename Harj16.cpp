/*Harjoitus16
Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
Tietueeseen talletetaan seuraavat tiedot:
etunimi (merkkijono; C:n merkkitaulukko)
sukunimi (merkkijono; C:n merkkitaulukko)
koulumatka (reaaliluku)
osoite (merkkijono; C:n merkkitaulukko)
postinumero (merkkijono; C:n merkkitaulukko)
kengannumero (kokonaisluku)

Ohjelma tulostaa lopuksi tietueen tiedot naytölle.
5.11.2014
v1.0
Santeri Taponen*/
#include <iostream>
using namespace std;
struct Henktied
{
	char etunimi[30], sukunimi[20];
	int kengannumero, postinumero;
	float koulumatka;
	char osoite[30];
};
void main()
{
	Henktied tiedot;
	cout << "Anna kaikki etunimesi: ";
	cin.get(tiedot.etunimi, 30);
	cin.get();
	cout << "Anna sukunimesi: ";
	cin.get(tiedot.sukunimi, 20);
	cin.get();
	cout << "Anna kengannumero: ";
	cin >> tiedot.kengannumero;
	cout << "Anna koulumatkasi kilometreina: ";
	cin >> tiedot.koulumatka;
	cin.get();
	cout << "Anna osoitteesi: ";
	cin.get(tiedot.osoite, 30);
	cin.get();
	cout << "Anna postinumero: ";
	cin >> tiedot.postinumero;
	cout << tiedot.sukunimi << " " << tiedot.etunimi << endl << tiedot.osoite << endl << tiedot.postinumero << endl << tiedot.kengannumero << " " << tiedot.koulumatka << "km" << endl;

}