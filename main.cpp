#include <iostream>
#include "math.h"


int main()
{
     int num;//количество вагонов
     int column = 30;//количество столбцов
     std::cin >> num;
     num = 3 * num; //количество строк
     char arr[num][column];
     for ( int i = 0; i < num; i++){
         for (int j = 0; j < column; j++){
             std::cin >> arr[i][j];
         }
     }
     for ( int i = 0; i < num; i++){
              for (int j = 0; j < column; j++){
                  std::cout << arr[i][j];
              }
              std::cout << std::endl;
          }
}
