#include "Human.hpp"
#include <iostream>
#include <list>
#include <vector>

using namespace std;

std::vector< char > foo(std::list< Human >& people)
{
    vector< char > v;
    vector< char > vout;
    // Twoja implementacja tutaj
    for (Human e : people) {
        e.birthday();
        if (e.isMonster())
            v.push_back('y');
        else
            v.push_back('n');
    }
    for (unsigned int i = 0; i < v.size(); i++) {
        vout.push_back(v[v.size() - i]);
    }
    return {vout};
}

int main()
{
    /*vector< int > vint;
    int           numer;
    for (int i = 0; i < 100; i++) {
        numer = rand() % 100;
        vint.push_back(numer);
        cout << "wielkosc " << vint.size() << " pojemnosc " << vint.capacity() << " adres "
             << &vint[0] << endl;
    }*/
    /*
    vector< int > v(100, 42);
    cout << v.size() << " " << v.capacity() << endl;
    vector< int > vi{100, 42};
    cout << vi.size() << " " << vi.capacity() << endl;
    */

    // Zadanie 4
    /*
        vector< Human > vh1;
        vector< Human > vh2;
        for (unsigned int i = 0; i < 5; i++) {
            string       imie;
            unsigned int wiek;
            cout << "Podaj imie: ";
            cin >> imie;
            cout << endl;
            cout << "Podaj wiek: ";
            cin >> wiek;
            cout << endl;
            Human h{imie, wiek, true, true};
            vh1.push_back(h);
            vh2.emplace_back(h);
        }
        cout << vh1.size() << " " << vh2.size() << endl;
        string cons;
        // cin >> cons;
        while (vh1.size() > 0) {
            cin >> cons;
            if (cons == "pop") {
                vh1.pop_back();
                for (vector< Human >::iterator it = vh1.begin(); it != vh1.end(); it++) {
                    cout << "Human: " << it->getName() << " rozmiar " << vh1.size() << endl;
                }
            }
        }
        */

    // Zadanie 7
    /*
    list< int > l;
    l.push_back(15);
    l.push_front(1);
    cout << &l.front() << " ostatni " << &l.back() << endl;
    l.push_front(2);
    l.push_front(4);
    l.push_front(6);
    cout << &l.front() << " ostatni " << &l.back() << endl;
    for (int e : l) {
        cout << e << " rozmiar " << l.size() << endl;
    }
    */
}
