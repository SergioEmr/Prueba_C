#include <cstdio>
#include <cstring>
#include <iostream>
#include <cstdlib>

using namespace std;

class humano
{
public:
	char nombre[20];
	int edad;

public:
	int setedad();
	void setnombre(char[]);
};

int humano::setedad(){
	return edad;
}

void humano::setnombre(char nom[]){
	cout<<nom<<endl;
}

int main()
{

	humano persona1, persona2;
	strcpy(persona1.nombre,"jorge");
    persona1.edad=20;
    cout<<"la edad de "<<persona1.nombre <<" es: "<<persona1.edad<<endl;
    strcpy(persona2.nombre,"juan");
    persona2.edad=25;
    cout<<"la edad de "<<persona2.nombre <<"es: "<< persona2.edad<<endl;
	cin.get();
	return 0;
}
