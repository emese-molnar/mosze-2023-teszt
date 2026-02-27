#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //N_ELEMENTS a NELEMENTS helyett
    std::cout << '1-100 ertekek duplazasa' //helyette: std::cout << "1-100 ertekek duplazasa" << std::endl;
    for (int i = 0;) //helyette: for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2; //(i+1) * 2
    }
    for (int i = 0; i; i++) //helyette: for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek:" //hiányzik:<< b[i << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //double int helyett
    for (int i = 0; i < N_ELEMENTS, i++) //i++ elé pontosvessző kell
    {
        atlag += b[i] //hiányzik a ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    //memória felszabadítása: delete[] b;
    return 0;
}
