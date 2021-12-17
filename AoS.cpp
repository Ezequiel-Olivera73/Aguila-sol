//AGUILA O SOL
#include<iostream>
#define CLEAR "cls"
#include<fstream>
#include<stdlib.h>
using namespace std;
int menu();
void NueP();
void CarP();
void Inst();
void escribir();
int main(){

escribir();

return 0;

}

int menu(){
    int opc;
cout<<"\t\t\t\tBIENVENIDO AL JUEGO\t"<<endl;
cout<<"\t\t\t\t    SOL O AGUILA"<<endl;
cout<<"1.Nueva Partida"<<endl;
cout<<"2.Cargar Partida"<<endl;
cout<<"3.Instrucciones"<<endl;
cout<<"4.Salir"<<endl;
cout<<"\nOpcion: ";
cin>>opc;
system(CLEAR);
switch(opc){

case 1: NueP();break;
case 2: CarP();break;
case 3: Inst();break;
case 4: cout<<"\t\t\tVuelva Pronto";break;
default: cout<<"Coloque una opcion correcta";break;

}

system(CLEAR);
}

void NueP(){
    char nombre[20];
    int edad;
    ofstream escritura;
    escritura.open("regis.txt",ios::out);//abriendo el archivo para escribir
    if(escritura.is_open()){
        cout<<"Bienvenido al juego 'Aguila o sol'"<<endl;
cout<<"Para tener un registro de tus partidas proporciona tu nombre y edad"<<endl;
cout<<"Nombre: "; cin>>nombre;
cout<<"Edad: "; cin>>edad;
        escritura<<nombre;
escritura<<edad;
escritura.close();//cerrar el archivo




}else{
    cout<<"Error no se pudo abrir el archivo"<<endl;
    system("pause");
}
}


void CarP(){
cout<<"Bienvenido al juego 'Aguila o sol'"<<endl;
cout<<"Digite su nombre y edad"<<endl;
cout<<"Nombre: "<<endl;
cout<<"Edad: "<<endl;

}
void Inst(){
cout<<"instrucciones....";
}

void escribir(){
ofstream archivo;
	archivo.open("corazones.txt",ios::out);//abriendo el archivo
	if(archivo.fail()){
		cout<<"Error al abrir el archivo";
		exit(1);
	}
	archivo<<"hola que tal mi nombre es ezequiel";
		archivo.close();//cerrar el archivo





}

