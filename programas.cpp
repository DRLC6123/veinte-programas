#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <math.h>
using namespace std;


void gotoxy(int x, int y){
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


void convertir(int num)
{string hex;
while(num>0){
if(num%16==0)hex='0';
if(num%16==1)hex='1';
if(num%16==2)hex='2';
if(num%16==3)hex='3';
if(num%16==4)hex='4';
if(num%16==5)hex='5';
if(num%16==6)hex='6';
if(num%16==7)hex='7';
if(num%16==8)hex='8';
if(num%16==9)hex='9';
if(num%16==10)hex='A';
if(num%16==11)hex='B';
if(num%16==12)hex='C';
if(num%16==13)hex='D';
if(num%16==14)hex='E';
if(num%16==15)hex='F';
num/=16;
cout<<hex;
convertir(num);
}
}
int invierte_numero(int numero) {
    int numero_invertido = 0;
    while (numero > 0) {
        int digito = numero % 10;
        numero_invertido *= 10;
        numero_invertido += digito;
        numero /= 10;
    }
    return numero_invertido;
} 

int es_palindromo(int numero) {
    int numero_invertido = invierte_numero(numero);
    return numero == numero_invertido;
} 

int main(){
	short opcion, un, dec, cen, mill, deci1, deci2;
	int num, numdos,j=0;
	double num1, num2, hip;
	char menu='s';
	int x=10;
	int y=10;
	short int pin, contrasena=1234, saldo=1000;
	int nota[4];
	short int c;
	char oop='s';
	do{
		
		system("cls");
	cout<<"----------MENU-----------"<<endl;
	cout<<"1) SUMA, RESTA, MULTIPLICACIÓN, DIVISION"<<endl;
	cout<<"2) PAR O IMPAR"<<endl;
	cout<<"3) CONVERSION"<<endl;
	cout<<"4) NUMERO PALINDROMO"<<endl;
	cout<<"5) ARABIGOS A ROMANOS "<<endl;
	cout<<"6) ENTEROS A LETRAS"<<endl;
	cout<<"7) DECIMALES A LETRAS"<<endl;
	cout<<"8) TABLA DE MULTIPLICAR"<<endl;
	cout<<"9) TABLAS DEL 1 AL 10"<<endl;
	cout<<"10) MULTIPLICACION GRAFICA"<<endl;
	cout<<"11) CONVERSOR DECIMALES A BINARIO "<<endl;
	cout<<"12) CONVERSOR DECIMAL A HEXA"<<endl;
	cout<<"13) FIGURAS GEOMÉTRICAS BÁSICAS"<<endl;
	cout<<"14) MOVER UN PUNTO"<<endl;
	cout<<"15) CAJERO"<<endl;
	cout<<"16) CALCULAR LA HIPOTENUSA"<<endl;
	cout<<"17) POTENCIA DE UN NUMERO"<<endl;
	cout<<"18) RAIZ DE UN NUMERO"<<endl;
	cout<<"19) INGRESO DE NOTAS Y PROMEDIAR"<<endl;
	cout<<"20) CALCULRA LA EDAD"<<endl;
	cin>>opcion;
	switch (opcion){
		system("cls");
// PROGRAMA SUMA O RESTA
		case 1: 
		 short re;

		 cout<<"1) SUMA"<<endl;
		 cout<<"2) RESTA"<<endl;
		 cout<<"3) MULTIPLICACION"<<endl;
		 cout<<"4) DIVISION"<<endl;
		 switch(re){
		 	case 1: 
			 cout<<"Ingrese num 1"<<endl; cin>>num1;
			 cout<<"Ingrese num 2"<<endl; cin>>num2;
			 cout<<num1<<"  +  "<<num2<<" = "<<num1+num2<<endl;
			 break;
			case 2: 
			 cout<<"Ingrese num 1"<<endl; cin>>num1;
			 cout<<"Ingrese num 2"<<endl; cin>>num2;
			 cout<<num1<<"  -  "<<num2<<" = "<<num1-num2<<endl;
			 break;
			case 3: 
			 cout<<"Ingrese num 1"<<endl; cin>>num1;
			 cout<<"Ingrese num 2"<<endl; cin>>num2;
			 cout<<num1<<"  *  "<<num2<<" = "<<num1*num2<<endl;
			 break;
			case 4: 
			 cout<<"Ingrese num 1"<<endl; cin>>num1;
			 cout<<"Ingrese num 2"<<endl; cin>>num2;
			 if (num2==0){cout<<"NO PUEDE DIVIR POR CERO"<<endl;
			 }
			 else{
			 cout<<num1<<"  /  "<<num2<<" = "<<num1/num2<<endl;}
			 break;
			 default: cout<<" OPCION INVALIDA"<<endl;break;
		 }
		break;
		
// NUMEROS PAR O IMPAR
		case 2:
		
		cout<<"INGRESE SU NÚMERO"<<endl; cin>>num;
		if((num%2)==0){ 
		cout<<"SU NÚMERO ES PAR"<<endl;
		}
		else if (num==0){
		cout<<"SU NÚMERO ES NEUTRO"<<endl;
		}
		else {
			cout<<"SU NÚMERO ES IMPAR"<<endl;
		}
		 break;
		 
// METROS A KILOMETROS
		case 3:
			short op;
			cout<<"---MENU---"<<endl;
			cout<<"1) KILOMETROS A MILLAS"<<endl;
			cout<<"2) MILLAS A MKILOMETROS"<<endl;
			cout<<"3) METROS A PULGADAS"<<endl;
			cout<<"4) PULGADAS A METROS"<<endl;
			cout<<"5) LIBRAS A KILOS"<<endl;
			cout<<"6) KILOS A LIBRAS"<<endl;
			cin>>op;
		switch(op){
			case 1: cout<<" INGRESE SU CANTIDAD EN KILOMETROS"<<endl; cin>>num1;
			num1= num1*(1/1.609);
			cout<<"SU CANTIDAD EN MILLAS ES:  "<<num1;
			 break;
			case 2: cout<<" INGRESE SU CANTIDAD EN MILLAS"<<endl; cin>>num1;
			num1= num1*(1.609/1);
			cout<<"SU CANTIDAD EN KILOMETROS ES:  "<<num1;
			 break;
			case 3: cout<<" INGRESE SU CANTIDAD EN METROS"<<endl; cin>>num1;
			num1= num1*(1/39.37);
			cout<<"SU CANTIDAD EN PULGADAS ES:  "<<num1;
			 break;
			case 4: cout<<" INGRESE SU CANTIDAD EN PULGADAS"<<endl; cin>>num1;
			num1= num1*(39.37/1);
			cout<<"SU CANTIDAD EN METROS ES:  "<<num1;
			 break;
			case 5: cout<<" INGRESE SU CANTIDAD EN LIBRAS"<<endl; cin>>num1;
			num1= num1*(1/2.2);
			cout<<"SU CANTIDAD EN KILOS ES:  "<<num1;
			 break;
			case 6: cout<<" INGRESE SU CANTIDAD EN KILOS"<<endl; cin>>num1;
			num1= num1*(2.2/1);
			cout<<"SU CANTIDAD EN LIBRAS ES:  "<<num1;
			 break;
			default: cout<<"OPCION NO DISPONIBLE ELIGIO MAL"<<endl;
			 break;
		}
		 break;
		 
// NUMEROS PALINDROMOS 
		case 4: 
		cout<<"INGRESE SU NÚMERO"<<endl; cin>>num;
		if (es_palindromo(num)){
		cout<<"SU NUMERO ES PALINDROMO"<<endl;			
		}
		else{
			cout<<"SU NUMERO NO ES UN PALINDROMO"<<endl;
		}
		break;
		
// NUMEROS A ROMANOS
		case 5:
			cout<<" INGRESE EL NÚMERO QUE DESEA EN ROMANO 1-1000"<<endl;
			cin>>num;
			un= num%10; num/=10;
			dec= num%10; num/=10;
			cen= num%10; num/=10;
			mill= num%10;
			switch (mill){
				case 1: cout<<"M"; break;
			}
			switch(cen){
				case 1: cout<<"C"; break;
				case 2: cout<<"CC"; break;
				case 3: cout<<"CCC"; break;
				case 4: cout<<"CD"; break;
				case 5: cout<<"D"; break;
				case 6: cout<<"DC"; break;
				case 7: cout<<"DCC"; break;
				case 8: cout<<"DCCC"; break;
				case 9: cout<<"DM"; break; 
			}
			switch (dec){
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
			switch (un){
				case 1: cout<<"I"<<endl; break;
				case 2: cout<<"II"<<endl; break;
				case 3: cout<<"III"<<endl; break;
				case 4: cout<<"IV"<<endl; break;
				case 5: cout<<"V"<<endl; break;
				case 6: cout<<"VI"<<endl; break;
				case 7: cout<<"VII"<<endl; break;
				case 8: cout<<"VIII"<<endl; break;
				case 9: cout<<"IX"<<endl; break;
			}
			
		 break; 
		 
//ENTEROS A LETRAS
	    case 6: 
		cout<<"INGRESE SU NÚMERO 1-100"<<endl;
		cin>>num;
		if (num<1||num>100){
			cout<<"SOLO SE PERMITEN NÚMEROS DEL 1 AL 100"<<endl;
		}
			un= num%10; num/=10;
			dec= num%10; num/=10;
			cen= num%10; num/=10;
			
			
			switch(cen){
				case 1: cout<<"CIEN"; break;
			}
			
				if (un==1&&dec==1){ cout<<"ONCE"<<endl;
			}
			else if (un==2&&dec==1){
				cout<<"DOCE"<<endl;
			}
			else if (un==3 && dec==1){
				cout<<"TRECE"<<endl;
			}
			else if (un==4&& dec==1){
				cout<<"CATORCE"<<endl;
			}
			else if (un==5&&dec==1){
				cout<<"QUINCE"<<endl;
			}
			else{
			
			switch (dec){
				case 1: cout<<"DIEZ "; break;
				case 2: cout<<"VEINTE "; break;
				case 3: cout<<"TREINTA "; break;
				case 4: cout<<"CUARENTA"; break;
				case 5: cout<<"CINCUENTA "; break;
				case 6: cout<<"SESENTA "; break;
				case 7: cout<<"SETENTA"; break;
				case 8: cout<<"OCHENTA "; break;
				case 9: cout<<"NOVENTA "; break;
				
			}
			if (un!=0){ cout<<"Y ";
			}
		
			switch (un){
				case 1: cout<<"UNO"<<endl; break;
				case 2: cout<<"DOS"<<endl; break;
				case 3: cout<<"TRES"<<endl; break;
				case 4: cout<<"CUATRO"<<endl; break;
				case 5: cout<<"CINCO"<<endl; break;
				case 6: cout<<"SEIS"<<endl; break;
				case 7: cout<<"SIETE"<<endl; break;
				case 8: cout<<"OCHO"<<endl; break;
				case 9: cout<<"NUEVE"<<endl; break;
			}
	}
	break;
//DECIMALES A LETRAS
	    case 7:
		cout<<"INGRESE SU NÚMERO  1-99.99"<<endl;
		cin>>num1;
		if (num1<1||num1>99.99){
			cout<<"SOLO SE PERMITEN NÚMEROS DEL 1 AL 99.99"<<endl;
		}
			deci1=num%10; num/10;
			deci2=num%10; num/10;
			un= num%10; num/=10;
			dec= num%10; num/=10;

			
			
			if (un==1&&dec==1){ cout<<"ONCE"<<endl;
			}
			else if (un==2&&dec==1){
				cout<<"DOCE"<<endl;
			}
			else if (un==3 && dec==1){
				cout<<"TRECE"<<endl;
			}
			else if (un==4&& dec==1){
				cout<<"CATORCE"<<endl;
			}
			else if (un==5&&dec==1){
				cout<<"QUINCE"<<endl;
			}
			else{
			
			switch (dec){
				case 1: cout<<"DIEZ "; break;
				case 2: cout<<"VEINTE "; break;
				case 3: cout<<"TREINTA "; break;
				case 4: cout<<"CUARENTA"; break;
				case 5: cout<<"CINCUENTA "; break;
				case 6: cout<<"SESENTA "; break;
				case 7: cout<<"SETENTA"; break;
				case 8: cout<<"OCHENTA "; break;
				case 9: cout<<"NOVENTA "; break;
				
			}
			if (un!=0){ cout<<"Y ";
			}
		
			switch (un){
				case 1: cout<<"UNO"; break;
				case 2: cout<<"DOS"; break;
				case 3: cout<<"TRES"; break;
				case 4: cout<<"CUATRO"; break;
				case 5: cout<<"CINCO"; break;
				case 6: cout<<"SEIS"; break;
				case 7: cout<<"SIETE"; break;
				case 8: cout<<"OCHO"; break;
				case 9: cout<<"NUEVE"; break;
			}
	}
			switch(deci2){
				case 1: cout<<" 1"; break; 
				case 2: cout<<" 2"; break; 
				case 3: cout<<" 3"; break; 
				case 4: cout<<" 4"; break; 
				case 5: cout<<" 5"; break; 
				case 6: cout<<" 6"; break;
				case 7: cout<<" 7"; break;
				case 8: cout<<" 8"; break;
				case 9: cout<<" 9"; break;
			}
			switch(deci1){
				case 1: cout<<" 1/100"<<endl; break; 
				case 2: cout<<" 2/100"<<endl; break; 
				case 3: cout<<" 3/100"<<endl; break; 
				case 4: cout<<" 4/100"<<endl; break; 
				case 5: cout<<" 5/100"<<endl; break; 
				case 6: cout<<" 6/100"<<endl; break;
				case 7: cout<<" 7/100"<<endl; break;
				case 8: cout<<" 8/100"<<endl; break;
				case 9: cout<<" 9/100"<<endl; break;
			}
			
		 break;
	    
//TABLAS
	    case 8:
		cout<<"INGRESE EL NÚMERO DEL QUE DESEA SU TABLA"<<endl; cin>>num;
		for (int i=1; i<=10; i++){
			cout<<num<<" * "<<i<<" = "<<num*i<<endl;
		}
		 break;
		 
//TABLAS DEL 1 AL 10
	    case 9:
	    	
	    	for(int i=1; i<=10;i++){
	    		for(int j=1; j<=10;j++){
	    			cout<< i <<" * "<<j<<" = "<<i*j<<endl;
				}
			}
		 break;
//MULTIPLICACION GRAFICA
	    case 10:
		short opmul;
		cout<<"1) UNA CIFRA POR UNA CIFRA"<<endl;
		cout<<"2) DOS CIFRAS POR UNA CIFRA"<<endl;
		cout<<"3) DOS CIFRAS POR DOS CIFRAS"<<endl;
		cin>>opmul;
		switch(opmul){
			case 1:
			cout<<"INGRESE SU PRIMERA CIFRA"<<endl;
			cin>>num;
			cout<<"INGRESE SU SEGUNDA CIFRA"<<endl;
			cin>>numdos;
			cout<<"     "<<num<<endl;
			cout<<"     "<<numdos<<endl;
			cout<<"---------------"<<endl;
			cout<<"     "<<num*numdos<<endl;
			 break;
			case 2:
			cout<<"INGRESE SU PRIMERA CIFRA"<<endl;
			cin>>num;
			cout<<"INGRESE SU SEGUNDA CIFRA"<<endl;
			cin>>numdos;
			cout<<"     "<<num<<endl;
			cout<<"     "<<numdos<<endl;
			cout<<"---------------"<<endl;
			cout<<"     "<<num*numdos<<endl; break;
			case 3:
			int un2, dec2,val,val2;
			cout<<"INGRESE SU PRIMERA CIFRA"<<endl;
			cin>>num;
			cout<<"INGRESE SU SEGUNDA CIFRA"<<endl;
			cin>>numdos;
			val=num; val2=numdos;
			un= num%10; num/=10;
			dec= num%10; num/=10;
			un2= numdos%10; num/=10;
			dec2= numdos%10; num/=10;
			
			cout<<"     "<<val<<endl;
			cout<<"     "<<val2<<endl;
			cout<<"---------------"<<endl;
			cout<<"    "<<un2*dec<<un*un2<<endl;
			cout<<"   "<<dec*dec2<<un*dec2<<endl;
			cout<<"-----------------"<<endl;
			cout<<"   "<<val*val2<<endl;
			 break;
		}
		break;
// DECIMAL A BINARIO
	    case 11:
	    int residuo;
	    int cantidad[10];
		cout<<"INGRESE UN NÚMEROE ENTERO"<<endl;
		cin>>num; 
		cout<<"SU NUMERO ES: "<<endl;
		
		for (int i=0; i<=10; i++){
			residuo= num%2;
			num/=2;
			cantidad [i]= residuo;
		}
		for (int i=10; i >=0; i--){
			cout<<cantidad[i];
		}
		break;
	
//DECIMAL A HEXADECIMAL
	    case 12: 
	    cout<<"INGRESE SU DÍGITO"<<endl;
	    cin>>num;
	    convertir(num);
		
		break;
//DIBUJO FIGURAS
	    case 13:
		cout<<"        			*"<<endl;
		cout<<"       		   ***"<<endl;
		cout<<"      		  *****"<<endl;
		cout<<"     		 *******"<<endl;
		cout<<"    		    *********"<<endl;
		cout<<"   		   ************"<<endl;
		cout<<"  		  **************"<<endl;
		cout<<"\n";
		cout<<"                       ******"<<endl;
		cout<<"                     *********"<<endl;
		cout<<"                    ***********"<<endl;
		cout<<"                  ***************"<<endl;
		cout<<"                 *****************"<<endl;
		cout<<"                  ***************"<<endl;
		cout<<"                   *************"<<endl;
		cout<<"                    ***********"<<endl;
		cout<<"                      *******"<<endl;
		cout<<"\n"<<endl;
		cout<<"                **************"<<endl;
		cout<<"                **************"<<endl;
		cout<<"                **************"<<endl;
		cout<<"                **************"<<endl;
		cout<<"                **************"<<endl; 
		cout<<"                **************"<<endl;
		cout<<"                **************"<<endl;
		cout<<"\n"<<endl;
		cout<<"            *"<<endl;
		cout<<"           ***"<<endl;
		cout<<"          *****"<<endl;
		cout<<"         *******"<<endl;
		cout<<"        *********"<<endl;
		cout<<"       ***********"<<endl;
		cout<<"        *********"<<endl;
		cout<<"         *******"<<endl;
		cout<<"          *****"<<endl;
		cout<<"           ***"<<endl;
		cout<<"            *"<<endl;
		 break;
//mover un punto
	    case 14: 
	    char seguir;

		while(seguir!='x')
		{
			system("cls");
			gotoxy (x,y); cout<<".";
			seguir=getch();
			switch(seguir){
				case 'w': y--; break;
				case 'W': y--; break;
				case 's': y++; break;
				case 'S': y++; break;
				case 'A': x--; break;
				case 'a': x--; break;
				case 'D': x++; break;
				case 'd': x++; break;
			}
		}
		
		break;
// CAJERO
	    case 15:

		do{
		
		cout<<"1) CONSULTAR SALDO"<<endl;
		cout<<"2) RETIRAR DINERO"<<endl;
		cout<<"3) CAMBIO DE PIN"<<endl;
		cin>>c;
		switch(c){
			case 1: 
			cout<<"INGRESE SU PIN"<<endl;
			cin>>pin;
			if(pin==contrasena){
				cout<<"SU SALDO ES DE: Q"<<saldo<<endl;
			}
			else {
				cout<<"PIN INVALIDO"<<endl;
			}
			case 2: 
				cout<<"INGRESE SU PIN"<<endl;
			cin>>pin;
			if(pin==contrasena){
				cout<<"CUANTO DESEA RETIRAR"<<endl;
				cin>>num;
				if(num<saldo||num==saldo){
					cout<<"RETIRO ACEPTADO"<<endl;
					saldo-=num;
				}
				else {
					cout<<"SU SALDO ES INSUFICIENTE"<<endl;
				}
			}
			else {
				cout<<"PIN INVALIDO"<<endl;
			}
			break;
			case 3:
					cout<<"INGRESE SU PIN"<<endl;
			cin>>pin;
			if(pin==contrasena){
				cout<<" INGRESE SU NUEVO PIN"<<endl;
				cin>>pin;
				contrasena=pin;
				cout<<" SU PIN SE A ACTULIZADO"<<endl;
			}
			else {
				cout<<"PIN INVALIDO"<<endl;
			}
			break;
			cout<<"DESEA REGRESAR AL MENU PRINCIPAL s/n"<<endl;
		}
		} while(oop=='s');
		 break;
//HIPOTENUSA
	    case 16:
		cout<<"INGRESE SU CATETO OPUESTO"<<endl;
		cin>>num1;
		cout<<"INGRESE SU CATETO ADYASENTE"<<endl;
		cin>>num2;
		hip= sqrt(pow(num1,2)+pow(num2,2));
		cout<<"SU HIPOTENUSA ES: "<<hip;
		 break;
//POTENCIA DE UN NUMERO
	    case 17:
		cout<<"INGRESE EL NUMERO QUE DESEA ELEVAR"<<endl;
		cin>>num1;
		cout<<"INGRESE A CUANTO LO QUIERE ELEVAR"<<endl;
		cin>>num2;
		hip= pow(num1,num2);
		cout<<"SU RESULTADO ES: "<<hip<<endl; break;
//RAIZ CUADRADA
	    case 18:cout<<"INGRESE EL NUMERO"<<endl;
		cin>>num1;
		if(num<0){
			cout<<"SOLO SE PERMITEN NUMEROS POSITIVOS"<<endl;
		}
		else {
		hip= sqrt(num1);
		cout<<"LA RAIZ DE: "<<num1<<" ES: "<<hip;
		} break;
//CALIFICACIONES
	    case 19:
	    	
	    	for (int i=0; i<=4; i++){
		cout<<"INGRESE SU NOTA (MAX 4)"<<endl; 
		cin>>nota[i];
	}
	 for(int i=0; i<=4; i++){
	 	num1=num1+nota[i];
	 }
	 num2= num1/4;
	 cout<<" EL PROMEDIO ES DE: "<<num2;
		break;
//DETERMINAR LA EDAD
	    case 20: cout<<"INGRESE SU AÑO DE NACIMIENTO"<<endl;
	    cin>>num;
		cout<<"INGRES EL AÑO ACTUAL"<<endl;
		cin>>num1;
		num2= num1-num;
		cout<<"SU EDAD ES DE:  "<<num2<<endl;
		break;
	    
	    
	    default: cout<<"ELECCIÓN INVALIDA"<<endl; break;
	}
	cout<<"\n";
	cout<<"Desea volver al menu s/n"<<endl; cin>>menu;
}
while(menu=='s');	
}
