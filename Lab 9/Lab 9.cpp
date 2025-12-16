
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
    cout << "Podaj pierwszy bok: " << endl;
    cin >> bok_a;
    cout << "Podaj drugi bok: " << endl;
    cin >> bok_b;
    Prostokat pr;
    pr.bok_a;
    pr.bok_b;
    cout << funkcja_zad2(pr) << endl;

}

