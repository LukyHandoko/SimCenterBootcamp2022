#include <iostream>
using namespace std;

int main(int argc,char **argv)
{
    //if (argc !=2)
    //{
    //    cout << "Please enter 2 argument: AppName aChar" <<endl;
    //    exit (-1);
    //}

    //char *ptr=*argv;

    for (int i=0;i<argc;i++)
    {
        cout << "Argumen ke "<< i + 1 << " adalah " << argv[i] << endl;
        cout << "Cetak setiap hurufnya:" <<endl;
        while (*argv[i] != '\0')
        {
            cout << *argv[i]<<endl;
            *argv[i]++;
        }
    }

    //cout<< argv[1]<<endl;
    //cout << *(argv[0]+1)<<endl;

    //while (*argv != '\0')
    //{
    //    cout<<*argv<<endl;
    //    argv++;
    //}

    

}