#ifndef MYCLASS_H
#define MYCLASS_H


class Myclass
{
public:
    Myclass();


    //static variable
    static Myclass myClassObject;
    //static function
    static Myclass &getMyClassObject();

    int iD() const;
    void setID(int iD);



private:
    int mID;

};

#endif // MYCLASS_H
