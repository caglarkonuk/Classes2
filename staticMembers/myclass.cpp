#include "myclass.h"

Myclass::Myclass()
    :mID(-1)
{

}

Myclass& Myclass::getMyClassObject()
{
    return myClassObject;
}

int Myclass::iD() const
{
    return mID;
}

void Myclass::setID(int iD)
{
    mID = iD;
}

//static variable instantiated
Myclass Myclass::myClassObject;
