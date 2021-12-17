//AGUILA O SOL
#include<iostream>
#define CLEAR "cls"
#include<fstream>
#include<time.h>
#include<stdlib.h>
using namespace std;
fstream escritura;
int menu();
void NueP();
void CarP();
void Inst();
void escribir();
void juego();
int vida=4;
int monedas=200;
 string nombre;
    string edad;
int main(){

menu();
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
case 4: cout<<"\t\t\tVuelva Pronto"<<endl;break;
default: cout<<"Coloque una opcion correcta"<<endl;break;

}
system("pause");
system(CLEAR);
}

void NueP(){
   
    
    escritura.open("registro.txt",ios::out | ios::app);//abriendo el archivo para escribir
    if(escritura.is_open()){
        cout<<"Bienvenido al juego 'Aguila o sol'"<<endl;
cout<<"Para tener un registro de tus partidas proporciona tu nombre y edad"<<endl;
cout<<"Nombre: ";
cin>>nombre;
cout<<"Edad: ";
cin>>edad;
        escritura<<nombre<<" "<<edad<<" "<<endl;
escritura.close();//cerrar el archivo
system(CLEAR);

juego();



}else{
    cout<<"Error no se pudo abrir el archivo"<<endl;
    system("pause");
}
}


void CarP(){
	string usuario,edaD;
	bool encontrado=false;
	fstream lectura;
	lectura.open("registro.txt",ios::app);
	if(lectura.is_open()){
		cout<<"Bienvenido al Juego"<<endl;
		cout<<"Para cargar la partida digite su nombre"<<endl;
		cin>>usuario;
		getline(lectura,nombre);
		if(usuario==nombre){
		cout<<"Usted se encuentra en el sistema"<<endl;
		cout<<"Que se divierta";
		juego();
		}else{
			
			cout<<"Usted no se encuentra en el sistema"<<endl;
		}
	}else{
		
		cout<<"Error no se pudo abrir el archivo";
	}

}



void Inst(){
	int salir;

	
	do{
	
cout<<"Bienvenido al juego 'Aguila o sol'"<<endl;
cout<<"Manual de juego"<<endl;
cout<<"Este es un pequeño juego de azar , tienes que elegir una cara de la moneda: AGUILA O SOL"<<endl;
cout<<"El numero 1 equivale a Aguila , el numero 2 equivale a Sol"<<endl;
cout<<"Cada vez que le atines al volado ganaras 100 monedas , si fallas perderas una vida."<<endl;
cout<<"Al iniciar el juego tendras 4 vidas y 200 moneda"<<endl;
cout<<"Si te quedas sin vidas tienes la oportunidad de comprarlas , cada vida extra te costara 50 monedas"<<endl;
cout<<"Presione 1 para regresar al menu"<<endl;
cin>>salir;
system(CLEAR);
}while(salir!=1);

	if(salir=2){
		
		menu();
		
	}
}
void juego()
{
	int dato,eleccion,salir;

	
	escritura.open("datos.txt",ios::out | ios::app);
	if(escritura.is_open()){
		
	do{
	
	srand(time(NULL));
	dato=1+rand()%(2);
	cout<<"\t\t\tBienvenido al juego\t\t\t"<<"MONEDAS: "<< monedas <<" VIDAS: "<< vida <<endl;
	cout<<"El numero 1 equivale a Aguila , el numero 2 equivale a Sol"<<endl;
	cout<<"Que eliges Aguila o Sol"<<endl;
	cout<<"Eleccion: "; cin>>eleccion;
	if(dato==eleccion){
		monedas=monedas+100;
		cout<<"FELICIDADES LE ATINASTE"<<endl;
			cout<<"Tienes "<< monedas << "monedas "<<"Y te quedan "<< vida <<"vidas";
	
		
	}else{
		
		vida=vida-1;
		cout<<"TSS PERDISTE"<<endl;
		cout<<" Tienes "<< monedas << " monedas "<<" Y te quedan "<< vida <<" vidas ";;
	}
	cout<<"\nPresiona 0 para seguir jugando"<<endl;
	cout<<"\nPresiona 1 para  guardar partida y regresar al menu"<<endl;
	cin>>salir;
	system(CLEAR);
}while(salir!=1);

escritura<<monedas<<" "<<vida<<" "<<endl;

escritura.close();
	if(salir=2){
		
		menu();
		
	}

	
		
	}else{
		cout<<"Error no se puede abrir el archivo"<<endl;
	}
	

}

