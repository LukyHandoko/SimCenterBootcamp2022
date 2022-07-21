#include <iostream>
using namespace std;

int main (int argc, char **argv)
{
    if (argc!=2)
    {
        cout << "You need 2 arguments: AppName NoNegativeNumber(0 to 255)" << endl;
        exit (-1);
    }

    //if (*(argv[1]+1) != '\0')
    //{
    //    cout << "A character for second argument is required" << endl;
    //    exit (-1);
    //}

    int n = atoi (argv[1]);
    cout << "Angka " << n << endl;
    cout << "Nilainya" << char(n) << endl;
    cout << char(4) << endl;


}