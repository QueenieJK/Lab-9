
#include <iostream>
using namespace std;
//Zadanie 2:
struct Prostokat {
    double bok_1;
    double bok_2;
};
double funkcja_zad2(Prostokat p) {
    return p.bok_1 * p.bok_2;
}
//Zadanie 3:
struct Trojkat {
    double a;
    double b;
    double c;
};
void przepisz(Trojkat trojkat_1, Trojkat* trojkat_2) {
    *trojkat_2 = trojkat_1;
}
int main()
{
    //Zadanie 1:
    int a;
    int b;
    cout << "Podaj wspolrzedna x: " << endl;
    cin >> a;
    cout << "Podaj wspolrzedna y: " << endl;
    cin >> b;
    struct MojaStruktura {
        int x;
        int y;
    };
    MojaStruktura obiekt = { a,b };
    cout << "x = " << obiekt.x << " y = " << obiekt.y << endl;
    //Zadanie 2:
    Prostokat pr;
    cout << "Podaj pierwszy bok: " << endl;
    cin >> pr.bok_1;
    cout << "Podaj drugi bok: " << endl;
    cin >> pr.bok_2;
    cout << funkcja_zad2(pr) << endl;
    //Zadanie 3:
    Trojkat t1;
    Trojkat t2;
    cout << "Podaj boki pierwszego trojkata: " << endl;
    cin >> t1.a >> t1.b >> t1.c;
    przepisz(t1, &t2);
    cout << "Boki drugiego trojkata: " << endl;
    cout << t2.a <<" "<< t2.b <<" "<< t2.c << endl;
}
