#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   cout << endl;
   switch (n) {
       case 1 : cout << "Чизкейк клубничный"; break;
       case 2 : cout << "Лавандовый раф"; break;
       case 3 : cout << "Карамельное мороженое"; break;
       case 4 : cout << "Горячий шоколад"; break;
       case 5 : cout << "Ванильный чизкейк"; break;
       case 6 : cout << "Красный бархат"; break;
       default : cout << "Такого товара нет !"; break;
   }

    return 0;
}
