#include <iostream>
using namespace std;


int main()
{
    /*
    double gb, bit;
    cout << "Enter the size of the movie(Gb): ", cin >> gb;
    cout << "Enter speed connection (Mbit/s): ", cin >> bit;
    gb = gb * 1024 * 8;
    gb /= bit;
    int hours = gb / 3600;
    int min = gb / 60 - hours * 60;
    int sec = gb - min * 60 - hours * 3600;
    cout << hours << " h " << min << " min " << sec << " sec";
    

    double size;
    const int film = 760;
    cout << "Enter size flashdisk: ", cin >> size;
    cout << "on the flash drive fits " << (int)(size * 1024 / film) << " movies";
    

    double digit;
    cout << "Enter digit: ", cin >> digit;
    digit = digit * 100 + 0.5;
    digit = (int)digit;
    cout << (double)digit / 100;
    

    int sdal, nesdal;
    cout << "passed the exam: ", cin >> sdal;
    cout << "failed the exam: ", cin >> nesdal;
    int res = sdal + nesdal;
    cout << "passed the exam " << sdal * 100.0 / res << endl;
    cout << "failed the exam " << nesdal * 100.0 / res;
    */

    double summ, proc;
    int srok;
    cout << "Enter your deposit (UAH):";
    cin >> summ;
    cout << "Length of deposit(month):";
    cin >> srok;
    cout << "Interest rate(%):";
    cin >> proc;
    proc = (proc / 100.0) / 12 * srok;
    cout << endl << proc << endl;
    summ = summ * proc + summ;
    cout << "Your deposit in future " << summ;
}

