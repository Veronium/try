#include <iostream>
#include <math.h>
using namespace std;
//int x1, x2;
//string zime;
//string dati;

int add(int cip1, int cip2)
{
    return cip1+cip2;
}
int sub(int cip1, int cip2)
{
    return cip1-cip2;
}
int mult(int cip1, int cip2)
{
    return cip1*cip2;
}
int div(int cip1, int cip2)
{
    return cip1/cip2;
}
//int sqrt(int cip1, int cip2)
//{
   // return sqrt(cip1), sqrt(cip2); nestrada
    //}

int main()
{
    string dati;
    int cip1, cip2;
    cout << "Raksti skip, lai turpinatu, vai exit" << endl;

    while(cin >> dati && dati != "exit")
    {
        cout << "Ievadiet abus skaitlus" << endl;

        cin >> cip1 >> cip2;
        cout << "Summa ir:" << add(cip1, cip2)<<endl;
        cout << "Starpiba ir:" << sub(cip1, cip2)<<endl;
        cout << "Reizinajums ir:" << mult(cip1, cip2)<<endl;
        cout << "Dalijums ir:" << div(cip1, cip2)<<endl;
        //cout << "sakne ir:" <<sqrt(cip1, cip2)<<endl;
    }
    return 0;

}
