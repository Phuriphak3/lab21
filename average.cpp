#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc,char *argv[]){
    int x = 0;
    int y = 0;

    if(argc == 1){
        cout <<  "Please input numbers to find average." << endl;
       }
    else{
   
    cout << "---------------------------------" << endl;
    for (int i = 1; i < argc ; i++)
    {
        
         x += atoi(argv[i]);
         y++;
    }
      double  avg = x/y;
    cout << "Average of " << y  << " numbers = " << avg << endl;
    cout << "---------------------------------" << endl;
        
    return 0;

}
}


// #include <windows.h>

// int main (){
//     system("average.exe");
//     return 0;
// }






