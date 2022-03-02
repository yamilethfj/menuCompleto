#include <iostream>
#include <stdio.h>
#include <string>
#include <windows.h>
#include <conio.h>  
#include <unistd.h>
using namespace std;

using std::cout;
using std::cin;
using std::endl;
using std::string;

string toBinary(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
}


int main(void){
int num;
int opcion;
float n1,n2,resultado;	
int x;
float medida = 0;
float respuesta = 0;
string texto;
int aux = 0, igual = 0;
int numero, unidades, decenas, centenas, millares;
int num1 ;
int num2;
struct persona{
        char nombre[15];
        char apellido[15];
        int edad;
        char sexo[15];
        int telefono;
};



cout<<"Menu"<<endl;
cout<<"1. Suma, Resta, Multiplicaci�n y Divisi�n de dos n�meros"<<endl;
cout<<"2. Determinar si un n�mero es par o impar"<<endl;
cout<<"3. Convertir de kil�metros a millas, metros a pulgadas, de libras a kilos y viceversa "<<endl;
cout<<"4. Determinar si una palabra o un n�mero es pal�ndromo"<<endl;
cout<<"5. Conversi�n de n�meros ar�bigos a romanos "<<endl;
cout<<"6. Conversi�n de n�meros enteros a letras"<<endl;
cout<<"7. Conversi�n de n�meros enteros con decimal a letras"<<endl;
cout<<"8. Una tabla de multiplicar"<<endl;
cout<<"9. Todas las tablas de multiplicar del 1 al 10"<<endl;
cout<<"10. Crear de forma gr�fica la multiplicaci�n manual"<<endl;
cout<<"11. Conversi�n de n�meros decimales a binario"<<endl;
cout<<"12. Conversi�n de n�meros decimales a hexadecimales"<<endl;
cout<<"13. Crear Figuras Geom�tricas B�sicas"<<endl;
cout<<"14. Mover un punto en toda la pantalla"<<endl;
cout<<"15. Simulaci�n de un Cajero"<<endl;
cout<<"16. Calcular la hipotenusa"<<endl;
cout<<"17. Numeros del 1 al 100" <<endl;
cout<<"18. Multiplos de los numeros" <<endl;
cout<<"19. Promedios"<<endl;
cout<<"20. Registros de datos"<<endl;
cin>>opcion;

system("cls");
switch(opcion){
	case 1:{
	
	cout<<"Bienvenidos"<<endl<<"A continuacion presione el numero de la operacion a realizar"
	<<endl<<"[1].....Suma....."<<endl<<"[2]....Resta...."<<endl<<"[3]....Multiplicacion...."
	<<endl<<"[4]....Division...."<<endl;
	cin>> opcion;
	cout<<"Ingrese el primer numero: "<<endl;
	cin>> n1;
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>> n2;
	
	if(opcion == 1){
		resultado = n1+n2;
		cout<<"El resultado de la suma es: "<<resultado;
	}else if(opcion == 2){
		resultado = n1-n2;
		cout<<"El resultado de la Resta es: "<<resultado;
	}else if(opcion == 3){
		resultado = n1*n2;
		cout<<"El resultado de la multipicacion es: "<<resultado;

	}else if(opcion == 4){
		resultado = n1/n2;
		cout<<"El resultado de la division es: "<<resultado;
	}else{
		cout<<"El numero ingresado es incorrecto";
	}
	
	return 0;
	


		break;
	}
		case 2: {
		  cout<<"Esciba un numero: "<<endl;
cin>>num;

if(num %2 == 0){
	cout<<"El numero es par"<<endl;
}else{
	cout<<"El numero es impar";
}
return 0;
		break;
	}
	    case 3:{
	    	cout<<"Menu"<<endl;
cout<<"1. kilometros a millas"<<endl;
cout<<"2. Metros a pulgadas"<<endl;
cout<<"3. Libras a kilos "<<endl;
cout<<"4. millas a kilometros"<<endl;
cout<<"5. pulgadas a Metros"<<endl;
cout<<"6. kilos a Libras"<<endl;
cout<<"7. Salir"<<endl;
cin>>opcion;

system("cls");
cout<<"Ingresa valor de la medida"<<endl;
cin>>medida;
switch(opcion){
	case 1:{
		cout<<"kilometros a millas es:"<<(medida *0.621371)<<endl;
		break;
	}
	
	case 2: {
		cout<<"Metros a pulgadas es:"<<(medida*39.3701)<<endl;
		break;
	}
	
	case 3: {
		cout<<"Libras a kilos es:"<<(medida/0.45)<<endl;
		break;
	}
	
	case 4:{
		cout<<"Millas a kilometros es:"<<(medida*1.60934)<<endl;
		break;
	}
	
	case 5:{
		cout<<"Pulgadas a metros es:"<<(medida*0.0254)<<endl;
		break;
	}
	
	case 6:{
		cout<<"Kilos a libras:"<<(medida*2.20462)<<endl;
		break;
	}
	
	default:{
		
	}
}
system("pause");

return 0;
			break;
		}
		
		case 4:{
			cout << "Ingrese la palabra a evaluar: ";
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
        cout << "La palabra ingresada es palindromo!! :D" << endl;
    } else {
        cout << "La palabra ingresada no es palindromo!! :D" << endl;
    }
    
    return 0;

			break;
		}
	
	case 5:{
		cout<< "Ingrese un numero"<<endl;
 cin>> numero;


 unidades = numero % 10; numero /= 10;
 decenas = numero % 10; numero /= 10;
 centenas = numero % 10; numero /= 10;
 millares = numero % 10; numero /= 10;

 switch (millares)
 {
  case 1: cout<<"M"; break;
  case 2: cout<<"MM"; break;
  case 3: cout<<"MMM"; break;
 }
 
 switch (centenas)
 {
  case 1: cout<<"C"; break;
  case 2: cout<<"CC"; break;
  case 3: cout<<"CCC"; break;
  case 4: cout<<"CD"; break;
  case 5: cout<<"D"; break;
  case 6: cout<<"DC"; break;
  case 7: cout<<"DCC"; break;
  case 8: cout<<"DCCC"; break;
  case 9: cout<<"CM"; break; 
 }
 
 switch (decenas)
 {
  case 1: cout<<"X"; break;
  case 2: cout<<"XX"; break;
  case 3: cout<<"XXX"; break;
  case 4: cout<<"XL"; break;
  case 5: cout<<"L"; break;
  case 6: cout<<"LX"; break;
  case 7: cout<<"LXX"; break;
  case 8: cout<<"LXXX"; break;
  case 9: cout<<"XC"; break; 
 }
 
 switch (unidades)
 {
  case 1: cout<<"I"; break;
  case 2: cout<<"II"; break;
  case 3: cout<<"III"; break;
  case 4: cout<<"IV"; break;
  case 5: cout<<"V"; break;
  case 6: cout<<"VI"; break;
  case 7: cout<<"VII"; break;
  case 8: cout<<"VIII"; break;
  case 9: cout<<"IX"; break;
 }

 return 0;

		break;
	}
	case 6:{
		int x;
    cout << "ingrese un numero" << endl;
    cin >> x;
    if ((x < 1) || (x > 999))
        cout << "INGRESA UN NUMERO DEL 1 AL 999\n";
    else

    {
        if (x >= 900)
        {
            cout << "NOVECIENTOS ";
            x = x - 900;
        }
        else if (x >= 800)
        {
            cout << "OCHOCIENTOS ";
            x = x - 800;
        }
        else if (x >= 700)
        {
            cout << "SETECIENTOS ";
            x = x - 700;
        }
        else if (x >= 600)
        {
            cout << "SEISCIENTOS ";
            x = x - 600;
        }
        else if (x >= 500)
        {
            cout << "QUINIENTOS ";
            x = x - 500;
        }
        else if (x >= 400)
        {
            cout << "CUATROCIENTOS ";
            x = x - 400;
        }
        else if (x >= 300)
        {
            cout << "TRESCIENTOS ";
            x = x - 300;
        }
        else if (x >= 200)
        {
            cout << "DOSCIENTOS ";
            x = x - 200;
        }
        else if (x > 100)
        {
            cout << "CIENTO ";
            x = x - 100;
        }
        else if (x == 100)
        {
            cout << "CIEN";
            x = x - 100;
        }
        if (x > 90)
        {
            cout << "NOVENTA Y ";
            x = x - 90;
        }
        if (x == 90)
        {
            cout << "NOVENTA";
            x = x - 90;
        }
        if (x > 80)
        {
            cout << "OCHENTA Y ";
            x = x - 80;
        }
        if (x == 80)
        {
            cout << "OCHENTA";
            x = x - 80;
        }
        if (x > 70)
        {
            cout << "SETENTA Y ";
            x = x - 70;
        }
        if (x == 70)
        {
            cout << "SETENTA";
            x = x - 70;
        }
        if (x > 60)
        {
            cout << "SESENTA Y ";
            x = x - 60;
        }
        if (x == 60)
        {
            cout << "SESENTA";
            x = x - 60;
        }
        if (x > 50)
        {
            cout << "CINCUENTA Y ";
            x = x - 50;
        }
        if (x == 50)
        {
            cout << "CINCUENTA";
            x = x - 50;
        }
        if (x > 40)
        {
            cout << "CUARENTA Y ";
            x = x - 40;
        }
        if (x == 40)
        {
            cout << "CUARENTA";
            x = x - 40;
        }
        if (x > 30)
        {
            cout << "TREINTA Y ";
            x = x - 30;
        }
        if (x == 30)
        {
            cout << "TREINTA";
            x = x - 30;
        }
        if (x > 20)
        {
            cout << "VEINTI";
            x = x - 20;
        }
        if (x == 20)
        {
            cout << "VEINTE";
            x = x - 20;
        }
        if (x >= 16)
        {
            cout << "DIECI";
            x = x - 10;
        }
        else if (x == 15)
        {
            cout << "QUINCE";
            x = x - 15;
        }
        else if (x == 14)
        {
            cout << "CATORCE";
            x = x - 14;
        }
        else if (x == 13)
        {
            cout << "TRECE";
            x = x - 13;
        }
        else if (x == 12)
        {
            cout << "DOCE";
            x = x - 12;
        }
        else if (x == 11)
        {
            cout << "ONCE";
            x = x - 11;
        }
        else if (x == 10)
        {
            cout << "DIEZ";
            x = x - 10;
        }
        if (x == 9)
        {
            cout << "NUEVE";
            x = x - 9;
        }
        if (x == 8)
        {
            cout << "OCHO";
            x = x - 8;
        }
        if (x == 7)
        {
            cout << "SIETE";
            x = x - 7;
        }
        if (x == 6)
        {
            cout << "SEIS";
            x = x - 6;
        }
        else if (x == 5)
        {
            cout << "CINCO";
            x = x - 5;
        }
        else if (x == 4)
        {
            cout << "CUATRO";
            x = x - 4;
        }
        else if (x == 3)
        {
            cout << "TRES";
            x = x - 3;
        }
        else if (x == 2)
        {
            cout << "DOS";
            x = x - 2;
        }
        else if (x == 1)
        {
            cout << "UNO";
            x = x - 1;
        }
    }
    cout << endl;
    cin.ignore();
    return 0;
		break;
	}
	
	case 7:{
		int numero;
	do{
		cout<<"INGRESE UN NUMERO: ";
		cin>>numero;
		
	}while((numero<1) || (numero>20));
	
	for(int i=1; i<=20; i++){
		cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
	}
	return 0;
	}
	case 8:{
		int numero;
	do{
		cout<<"INGRESE UN NUMERO: ";
		cin>>numero;
		
	}while((numero<1) || (numero>10));
	
	for(int i=1; i<=10; i++){
		cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
	}
	return 0;
	}
	case 9:{
		for(int i=1; i <11; i++){
		for(int j=1; j<11; j++){
			cout<<i<<"*"<<j<<"="<<i*j<<endl;
		}
	}
	system("pause");
	return 0;
	}
	case 10:{
		cout<<"Ingrese primer numero a multiplicar: "<<endl;
	cin>>num1;
	cout<<"Ingrese segundo numero a multiplicar: "<<endl;
	cin>>num2;
	
	cout<<"2do_                     "<<num1<<endl;
	cout<<"1ro_                     "<<num2<<endl;
	
	resultado=num1*num2;
	cout<<"                    *       "<<endl;
	    cout<<"                  _____________"<<endl;
		cout<<"Resultado                "<<resultado<<endl;
	
		break;
	}
	case 11:{
		int number = 0;
	    cout<<"Ingresa Numero"<<endl;
		cin>>number;
	    cout << "decimal: " << number << endl;
	    cout << "binary : " << toBinary(number) << endl;
	     system("pause");
	    return 0;
		break;
	}
	
	case 12:{
		int mynum;
	cout << "\n    Entra un numero: ";
	cin >> mynum;
	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::showbase);
	cout << "\n    En hexadecimal: " << mynum;
	cout.unsetf(ios::hex);
	cout.setf(ios::oct);
	cout << "\n\n";
	system("pause");
	return 0;
		break;
	}
	case 13:{
		int opcion;
	cout<<"Menu"<<endl;
	cout<<"1. Rombo"<<endl;
	cout<<"2. Cuadrado"<<endl;
	cout<<"3. Triangulo"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1:{
			cout<<"      ***     "<<endl;
			cout<<"     *****  "<<endl;
			cout<<"    ********"<<endl;
			cout<<"   **********"<<endl;
			cout<<"   **********"<<endl;
			cout<<"    ********"<<endl;
			cout<<"     ****** "<<endl;
			cout<<"      **** "<<endl;
			break;
		}
		case 2: {
			cout<<"*******************"<<endl;
			cout<<"********************"<<endl;
			cout<<"*******************"<<endl;
			cout<<"********************"<<endl;
			cout<<"*******************"<<endl;
			cout<<"********************"<<endl;
			cout<<"*******************"<<endl;
			cout<<"********************"<<endl;
			cout<<"*******************"<<endl;
			cout<<"********************"<<endl;
			break;
		}
		case 3:{
			cout<<"         *           "<<endl;
			cout<<"		   ***             "<<endl;
			cout<<"       *****         "<<endl;
			cout<<"     *********       "<<endl;
			cout<<"	  *************     "<<endl;
			cout<<" ****************    "<<endl;
			cout<<"*******************  "<<endl;	
			break;
		}
	}
		break;
	}
	case 14:{
		int cc=40,cf=12;
		char tecla;
		while(tecla!='x')
	{
		system("cls");
		gotoxy(cc,cf);printf("*") ;
		tecla=getch();
		switch (tecla)
		{
			case'f':
			        if(cc<79)cc++;else{ sleep(200);}
			break;
			case's':
			        if(cc>2)cc--;else { sleep(200);}
			break;
		}
	}
		break;
	}
	case 15:{
		const string claveCorrecta = "1234";
    cout << "Bienvenido al cajero autom�tico\n";
    cout << "Ingrese la clave: ";
    string clave = "";
    cin >> clave;
    if (clave != claveCorrecta)
    {
        cout << "Clave incorrecta";
        return 0;
    }
    cout << "Clave correcta\nBienvenido\n";
    double fondos = 5000;

    string eleccion = "";
    while (eleccion != "2")
    {
        cout << "Fondos disponibles: " << fondos << endl;
        cout << "1. Retirar dinero\n2. Salir\nSeleccione: ";
        cin >> eleccion;
        if (eleccion == "1")
        {
            double retiro;
            cout << "Ingrese cantidad a retirar: " << endl;
            cin >> retiro;
            if (retiro > fondos || retiro <= 0)
            {
                cout << "No puede retirar esa cantidad";
            }
            else
            {
                cout << "OK. Ha retirado " << retiro << endl;
                fondos = fondos - retiro;
            }
        }
    }
    return 0;
		break;
	}
	case 16:{
		int numero;
    std::cout << "Dime un n�mero: ";
    std::cin >> numero;
    std::cout << "El triple de tu n�mero es " << numero*3;
    return 0;
		break;
	}
	case 17:{
		for (int i = 100; i >= 1; i--)
  { cout << i << endl; }
 
 return 0;
		break;
	}
		case 18:{
			int n, x = 0, y = 1, z = 1;

 cout<<"Ingrese el numero de elementos: "; cin>>n;

 cout<<"1 ";
 for (int i = 1; i < n; i++)
 {
  z = x + y;
  cout<<z<<" ";
  x = y;
  y = z;
 }

 return 0;
			break;
		}
		
	case 19:{
		float nota1, nota2, nota3, promedio = 0;
 cout<<"Ingrese sus notas"<<endl;
 cin>> nota1 >> nota2 >> nota3;
 promedio = (nota1 + nota2 + nota3) / 3;

 if (promedio >= 9.5)
 { 
  cout<<"Aprobado"<<endl;
 }
 else 
 { 
  cout<<"Reprobado"<<endl;
 }

 return 0;
	}
		case 20: {
			persona amigo[5];
    for (int i = 0; i < 5; i++){
        cout <<"Escriba el Nombre "<<i+1<<":";
        cin >> amigo[i].nombre;

        cout <<"\nEscriba el Apellido "<<i+1<<":";
        cin >> amigo[i].apellido;

        cout <<"\nEscriba la Edad de "<<i+1<<":";
        cin >> amigo[i].edad;

        cout <<"\nEscriba el sexo "<<i+1<<":";
        cin >> amigo[i].sexo;

        cout <<"\nEscriba el Telefono de "<<i+1<<":";
        cin >> amigo[i].telefono;
        
        cout <<endl;
    }

    cout<<"El registro de personas que se introdujeron es: \n\n";

    for (int i = 0; i < 5; i++){
        cout<<"\t"<<amigo[i].nombre;
        cout<<"\t"<<amigo[i].apellido;
        cout<<"\t"<<amigo[i].edad;
        cout<<"\t"<<amigo[i].sexo;
        cout<<"\t"<<amigo[i].telefono<<"\n\n";
   }
   
   return 0;
			break;
		}
	
	

system("pause");

return 0;
}
}

