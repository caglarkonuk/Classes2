#include <QCoreApplication>
#include "myclass.h"
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //static variable is generated using static function getMyClassObject
    Myclass::getMyClassObject().setID(10); //10 is arbitrary


    Myclass objectNr1;
    Myclass objectNr2;

    qInfo() << "get the static objects ID of object nr 1" << objectNr1.getMyClassObject().iD();
    qInfo() << "get the static objects ID of object nr 2" << objectNr2.getMyClassObject().iD();

    return a.exec();
}
