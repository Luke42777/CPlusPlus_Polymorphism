#include <iostream>

using namespace std;

///////////////////////////////////////////////////////////
class Tparent
{
    int one;
public:
    Tparent(): one(1){}
    Tparent(const Tparent& other)
        {
            one = other.one;
            cout << "\nTparent copy constructor on duty\n";
        }

     virtual void print()
        {
            cout << "Parent";
        }
     virtual ~Tparent(){}
};
//////////////////////////////////////////////////////////
class Tchild: public Tparent
{
    int two;

    public:
    Tchild(): two(2){}

    void print() override
        {
            cout << "child";
        }
};
//**********************************************************
void printer(Tparent* ptr)
    {
        ptr->print();
    }
//**********************************************************
int main()
{
    Tparent p;
    Tchild c;

    Tparent &refP = c;
    refP.print();
    cout << endl;

    Tchild *pChild = &c;
    Tparent *pParent = &p;
    pParent = pChild;
    pParent->print();
    cout << endl;

    printer(pChild);

    cout << endl;

    Tparent p1 = Tchild(); //object slicing idea part of child object is cut of(int two)
                            // obcasting child object to parent type
    p1.print();

}
