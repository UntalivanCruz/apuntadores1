#include <iostream>

using namespace std;

int main(){
    //& obtener posicion de memoria
    //* definicion de un apuntador
    //cout apuntador -- posicion de memoria a la que apunta
    //cout *apuntador -- dato de la variable a la cual apunta
    //cout &apuntador -- posicion de memoria del apuntador
    int var1=10;
    int *pt1= &var1;
    int **ptdept=&pt1;
    int ***ptdept2= &ptdept;

    cout<<***ptdept2<<endl;
    return 0;
}