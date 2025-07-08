#include <iostream>
#include <string>
#include <cmath>
#include "mainwindow.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "inventario_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    w.show();
    return a.exec();
}




using namespace std;

void Mostrar_menu (){
int opcion;
cout<<"====Bienvenido a tiendas LLS===="<<endl;
cout<<"1.-Registrar Nuevo Cliente"<<endl;
cout<<"2.-Mostrar estado de Cuenta"<<endl;
cout<<"3.-Ingresar datos"<<endl;
cout<<"4.-Salir"<<endl;
cout<<"Ingrese una opcion: ";
cin>>opcion;
}

struct cliente {
string nombre;
string cedula;
string correo;
int ruc;
}

void Agregar_Cliente(){
	cliente nuevo;
	cout<<"Ingrese el Nombre"<<endl;
	cin>>nuevo.nombre;
	cout<<"Ingrese la Cedula"<<endl;
	cin>>nuevo.cedula;
	cout<<"Ingrese el correo"<<endl;
	cin>>nuevo.correo;
	cout<<"Ingrese el RUC"<<endl;
	cin>>nuevo,ruc;
	
}

int main(){
	Mostrar_menu();
	return 0;
}
	

