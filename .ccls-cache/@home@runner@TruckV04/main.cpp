
//Llamado a librerias
#include <iostream>
#include <cstdlib>
#include <iomanip>

//Inicializacion de funciones standar
using namespace std;

//Inicializacion de variables

int n,opcion,contador,numero,numero1,cargaatransportar;
int numero3,numero4,numero5,capacidad;
int rendimiento,cmnseleccionado,cargacmnselecc;
int vrkilometro,numfactura,kilometros;

double vrtransporte,vrcamionkilometro;
double iva,vriva,vrtransporteeiva;
string matricula,conductor,cmnestado,nombrecliente,nitocccliente,resp;

bool estado;


/*
int contador=0;

int numero3=1;
int numero4=1;
int numero5=1;
*/
//Estructura camion
struct Camion
{
string matricula;
string conductor;
int numero;
int capacidad;
int vrkilometro;
int rendimiento;
bool estado;
};
int contadorfactura=10000;

int main()
{
 
//*********************************************
//Creacion del camion en struct
//*********************************************

// Camion #1
struct Camion cmn1;  
  cmn1.numero = 1;
  cmn1.matricula="WER456";
  cmn1.conductor="Ernesto Perez";
  cmn1.capacidad=5500;
  cmn1.vrkilometro=2000;
  cmn1.estado=0;


  
//*********************************************
//Creacion del camion en struct
//*********************************************

// Camion #2
struct Camion cmn2;  
  cmn2.numero = 2;
  cmn2.matricula="COF000";
  cmn2.conductor="Juan Valdez";
  cmn2.capacidad=6500;
  cmn2.vrkilometro=3000;
  cmn2.estado=0;
  
//*********************************************
//Creacion del camion en struct
//*********************************************


// Camion #3  
struct Camion cmn3;  
  cmn3.numero = 3;
  cmn3.matricula="ASD067";
  cmn3.conductor="Juanito Pepas";
  cmn3.capacidad=7500;
  cmn3.vrkilometro=4000;
  cmn3.estado=0;
  
//*********************************************
//Creacion del camion en struct
//*********************************************
 
// Camion #4
struct Camion cmn4;  
  cmn4.numero = 4;
  cmn4.matricula="GHJ496";
  cmn4.conductor="Perenzejo Dominguez";
  cmn4.capacidad=8500;
  cmn4.vrkilometro=4000;
  cmn4.estado=0;

//*********************************************
//Menu de seleccion
//*********************************************



int ;
do
    {

        printf( "\n   1. Solicitar un Camion"  );      
        printf( "\n   2. Solicitar un Camion"  );
        
        printf( "\n   3. Cargar  un Camion." );

        printf( "\n   4. Generar factura ");
        
        printf( "\n   5. Descargar un Camion." );
          
        printf( "\n   6. Generar Estadisticas." );
      
        printf( "\n   7. Salir." );  
    
        printf( "\n\n   Introduzca opcion (1-7): ");

        scanf( "%d", &opcion );
      contador=contador+1;
 cout << "\n";
        /* Inicio menu de opciones */

        switch ( opcion )
        {   
/* Ingreso de Datos de camion  */
case 1:

          
//Ingreso de solicitud de carga  Camion 

case 2: 
   cout << "\n";
  cout << "Ingresar el Numero de camion  : ";
cin >> numero1;
cout << "Ingresar el peso de la carga que desea llevar :  ";
cin >> cargaatransportar;  


//Ingreso de solicitud de carga  Camion No1
if (numero1 == cmn1.numero && cmn1.estado==0 && cargaatransportar<=cmn1.capacidad) {
cout << "\n";
cout << "Bien, el camion No "<< cmn1.numero << " puede llevar la carga"<< "\n";
cout << "\n";
cmn1.estado=1;
vrcamionkilometro=cmn1.vrkilometro;
cmnestado="Seleccionado";
}    
           
else if (numero1 == cmn2.numero && cmn2.estado==0 && cargaatransportar<=cmn2.capacidad) {
cout << "\n";
cout << "Bien, el camion No "<< numero1 << " puede llevar la carga"<< "\n";
cout << "\n";
cmn2.estado=1;
vrcamionkilometro=cmn2.vrkilometro;  
cmnestado="Seleccionado";  
} 

//Ingreso de solicitud de carga  Camion No3
else if (numero1 == cmn3.numero && cmn3.estado==0 && cargaatransportar<=cmn3.capacidad) {
cout << "\n";
cout << "Bien, el camion No "<< numero1 << " puede llevar la carga"<< "\n";
cout << "\n";
cmn3.estado=1;
vrcamionkilometro=cmn3.vrkilometro;
cmnestado="Seleccionado";
  }

  
//Ingreso de solicitud de carga  Camion No4
else if (numero1 == cmn4.numero && cmn4.estado==0 && cargaatransportar<=cmn4.capacidad) {
cout << "\n";
cout << "Bien, el camion No "<< numero1 << " puede llevar la carga"<< "\n";
cout << "\n";
cmn4.estado=1;
vrcamionkilometro=cmn4.vrkilometro;
cmnestado="Seleccionado";
  
} 
  
else {
  cout << "\n";
cout << "Lo siento, el camion No "<< numero1 << " no puede llevar la carga"<< "\n";
  
}  
contador=contador+1;
//system ("cls");      
       break;

      
/* Ingreso de solicitud de carga */
case 3:
if (contador>0){  
cout << "\n";
cout << ("Camion seleccionado :") << numero1 << "\n";
cout<<("Estado Camion seleccionado :")<< cmnestado << "\n";

cout<<("Carga al camion :")<< cargaatransportar <<(" kg") << "\n";

cout<<("Distancia en kilometros a transportar Carga : ");
cin>>numero3;
vrtransporte=numero3*vrcamionkilometro;  
cout<<(" Valor de transporte : %c")<< vrtransporte << (" COP.")<<"\n",36;
cout << "\n";
cout << "\n";
//a revisar
cout<<("Autoriza generar factura y realizar transporte [S/n]");
cin>>resp;
if (resp == "n" or "N" or "no" or "No" or "NO"){
//if else de poner el camion seleccionado en estado 0  
} 
/*  
ifelse { 

  break;
}
  */
//a revisar
  
else {
  cout << "\n";
  cout << ("No ha usado el programa y por tanto no ha seleccionado un camion, por favor seleccione uno.");
  cout << "\n";
  break;
}

cout << "\n";

break;


/*Generar Factura */
case 4: 
printf( "\n   Factura");
       
numfactura=contadorfactura+1;
cout << ("\n Numero de factura : ")<<numfactura;              
cout << ("\n Nombre Cliente : ");
cin>>nombrecliente;  
cout << ("\n Nit o CC : ");
cin>>nitocccliente;
cout << ("\n Nombre Conductor : ")<<conductor; 
cout << ("\n Peso de mercancia : ")<<  cargaatransportar<<(" kg ");
iva=0.19;
cout << ("\n Valor Servicio : ")<<vrtransporte<<(" COP ");
vriva=vrtransporte*iva;   
cout << ("\n Valor Iva : ")<<vriva<<(" COP ");
vrtransporteeiva=vrtransporte+vriva;  
cout << ("\n Valor a pagar  : ")<<vrtransporteeiva<<(" COP ") ;             
cout << "\n";

break;
/*Descargar camion */
case 5: 
printf( "\n   Descargar camion" );
       
   break;                 
  /*Generar estadisticas */
case 6: 
            printf( "\n   Generar Estadisticas");
             
break;                    
          }}
//system ("cls");
         /* Fin del anidamiento */

    } while ( opcion != 7 ); 
  
  cout<<("este menu se ha usado : ")<<contador;
}
void clrscr()
{
  system("cls");
}  
  
  
  
  


