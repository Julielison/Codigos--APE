#include <bits/stdc++.h>
using namespace std;

int main() {
    float valor, receiv;
    int n_cem, resto_cem, n_cinquenta, resto_n_cinquenta, n_vinte, resto_vinte, n_dez, resto_dez, n_cinco, resto_cinco;
    int dois, r2, um, r1, cinq_cent, r_cinq_c, zero25, r_zero25, zero10, r_zero10, zero5, zero1;

    cin >> receiv;

    valor = receiv * 100;
    n_cem = valor / 10000;
    resto_cem = static_cast<int>(valor) % 10000;
    n_cinquenta = resto_cem / 5000;
    resto_n_cinquenta = resto_cem % 5000;
    n_vinte = resto_n_cinquenta / 2000;
    resto_vinte = resto_n_cinquenta % 2000;
    n_dez = resto_vinte / 1000;
    resto_dez = resto_vinte % 1000;
    n_cinco = resto_dez / 500;
    resto_cinco = resto_dez % 500;
    dois = resto_cinco / 200;
    r2 = resto_cinco % 200;
    um = r2 / 100;
    r1 = r2 % 100;
    cinq_cent = r1 / 50;
    r_cinq_c = r1 % 50;
    zero25 = r_cinq_c / 25;
    r_zero25 = r_cinq_c % 25;
    zero10 = r_zero25 / 10;
    r_zero10 = r_zero25 % 10;
    zero5 = r_zero10 / 5;
    zero1 = r_zero10 % 5;

    // Saída formatada
    cout << "NOTAS:" << endl;
    cout << fixed << setprecision(0);
    cout << n_cem << " nota(s) de R$ 100.00" << endl;
    cout << n_cinquenta << " nota(s) de R$ 50.00" << endl;
    cout << n_vinte << " nota(s) de R$ 20.00" << endl;
    cout << n_dez << " nota(s) de R$ 10.00" << endl;
    cout << n_cinco << " nota(s) de R$ 5.00" << endl;
    cout << dois << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << um << " moeda(s) de R$ 1.00" << endl;
    cout << cinq_cent << " moeda(s) de R$ 0.50" << endl;
    cout << zero25 << " moeda(s) de R$ 0.25" << endl;
    cout << zero10 << " moeda(s) de R$ 0.10" << endl;
    cout << zero5 << " moeda(s) de R$ 0.05" << endl;
    cout << zero1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
