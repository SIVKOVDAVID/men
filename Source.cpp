#include<iostream>
#include<string>
#include<clocale>

using namespace std;

class Ded
{
public:

	int kg;
	string name;
	int old;
	void Print()
	{
		cout << "Имя: "<<name << "\nВозраст: "  << old<<"\nВес: "<< kg<< endl;
	}
};
int main()
{
	
	setlocale(LC_ALL,"ru");
	Ded oneman;
	oneman.kg = 99;
	oneman.name = "Антоха";
	oneman.old = 100;
	oneman.Print();
}


