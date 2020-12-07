#include "Human.hpp"
#include <iostream>
#include <list>
#include <vector>

using namespace std;

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > v;
    std::vector< char > vout;
    // Twoja implementacja tutaj
    for (Human e : people) {
        e.birthday();
        if (e.isMonster() == true) {
            v.push_back('n');
        }
        else {
            v.push_back('y');
        }
    }

    for (unsigned int i = 1; i <= v.size(); ++i) {
        vout.push_back(v[v.size() - i]);
    }
    return {vout};
}

int main()
{
    list< Human > l;
    for (int i = 0; i < 10; i++) {
        if (i % 3 == 0) {
            Human c{"jan", 15, true, true};
            l.push_back(c);
        }
        else if (i % 3 == 1) {
            Human c{"jan", 15, true, false};
            l.push_back(c);
        }
        else {
            Human c{"jan", 15, false, false};
            l.push_back(c);
        }
    }
    vector< char > v = foo(l);
    for (char e : v) {
        cout << e << endl;
    }
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
