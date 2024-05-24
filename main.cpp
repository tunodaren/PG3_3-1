#include<stdio.h>
#include <list>
#include <iostream>

using namespace std;

int main() {

	list<const char*>Int = {"Tokyo","Kanda","Akihabara","Okachimachi","Ueno",
		                    "Uguisudani","Nippori","Tabata","Komagome",
		                    "Sugamo","Otsuka","Ikebukuro","Mejiro","Takadanobaba",
		                    "Shino-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
		                    "Ebisu","Meguro","Gotanda","Osaki","Shinagawa",
		                    "Tamachi","Hamamatsucho","Shimbashi","Yurakucho\n"
	};

	for (auto itr = Int.begin(); itr != Int.end(); itr++)
	{
		cout << *itr << endl;
	}

	cout << endl;

	for (list<const char*>::iterator itr = Int.begin();
		 itr != Int.end();++itr)
	{
		if (strcmp(*itr,"Tabata") == 0) {
			itr = Int.insert(itr, "Nishi-Nippori");
			++itr;
		}
		
	}

	for (auto itr = Int.begin(); itr != Int.end(); itr++)
	{
		cout << *itr << endl;
	}
	


	for (list<const char*>::iterator itr = Int.begin();
		itr != Int.end(); ++itr)
	{
		if (strcmp(*itr, "Tamachi") == 0) {
			itr = Int.insert(itr, "Takanawa Gateway");
			++itr;
		}
		
	}

	for (auto itr = Int.begin(); itr != Int.end(); itr++)
	{
		cout << *itr << endl;
	}

	return 0;
}