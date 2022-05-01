#include <iostream>


int main()
{
     int coach;//количество вагонов
     int num; //количество строк
     int column = 30;//количество столбцов
     std::cin >> coach;
     num = 3 * coach;
     int free_places = 0; //счетчик количества свободных мест
     int counter = 0;//счетчик занятых мест
     char arr[num][column];
     for ( int i = 0; i < num; i++){
         for (int j = 0; j < column; j++){
             std::cin >> arr[i][j];
         }
     }
     /*for ( int i = 0; i < num; i++){
              for (int j = 0; j < column; j++){
                  std::cout << arr[i][j];
              }
              std::cout << std::endl;//типа вывод для проверки
          }*/
          //3-9 11-17 19-25 27-30
     for ( int i = 0; i < num; i++){
              if ( arr[i][0] == *"X") counter++;
              for (int j = 3; j < 9; j++){
                       if (arr[i][j] == *"X" ){
                           counter++;
                       }
                  }
              for (int j = 11; j < 17; j++){
                       if (arr[i][j] == *"X" ){
                           counter++;
                       }
                   }
              for (int j = 19; j < 25; j++){
                       if (arr[i][j] == *"X" ){
                           counter++;
                       }
                   }
              for (int j = 27; j < 30; j++){
                       if (arr[i][j] == *"X" ){
                           counter++;
                       }
                   }
              }
         free_places = 44 - counter;
         std::cout << free_places << std::endl;
         std::cout << counter << std::endl;
}
