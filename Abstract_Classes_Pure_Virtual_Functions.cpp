#include <iostream>

using namespace std;
//////////////////////////////////////////////////////////////////////////////
class Tanimal //abstract class
{
public:
    virtual void speak() = 0;
    virtual void run() = 0;
    virtual void eat() = 0;
};
/////////////////////////////////////////////////////////////////////////////
class Tdog: public Tanimal // abstract class
{
public:
    void speak() override
    {
      cout << "whooh";
    }
};
/////////////////////////////////////////////////////////////////////////////
class Tlabrador: public Tdog
{
    public:
        Tlabrador()
        {
            cout << "Labrador created" << endl;
        }
    //***************************
     void run() override
        {

            cout << "pata taj pata taj.Labrador running\n";
        }
    //*************************
    void eat() override
    {

        cout << "mniam mniam";
    }

};
/////////////////////////////////////////////////////////////
class Tkangal: public Tdog
{
    public:
        Tkangal()
        {
            cout << "Anatolian Shepherd created" << endl;
        }
    //********************
     void run() override
        {
            cout << "Kangal running.Be careful!!!\n";
        }
    //*****************
    void eat() override
        {

            cout << "mniam mniam";
        }

};
////////////////////////////////////////////////////////////////////////
void fun(Tanimal &r)
{
   r.run();
}
//***********************************************************************
int main()
{
      Tlabrador lab;
      Tkangal anatol;
/// you cannot create array of animals or dogs because it needs a constructors(abstract class cannot have representation)
    ///but you can create array of Kangals
    //Tkangal kangals[5];
///you can create an array of pointers to animals
    Tanimal *animalPtrs[3];
    animalPtrs[0] = &lab;
    animalPtrs[1] = &anatol;
    animalPtrs[2] = &lab;

    fun(lab);
    cout << endl;
    return 0;

}


