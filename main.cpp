#include <iostream>
#include "math.h"


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
     for ( int i = 0; i < num; i++){
              for (int j = 0; j < column; j++){
                  if (arr[i][j] != *"." ){
                      for (int m1 = 3; m1 < 9; m1++){
                          if (arr[i][m1] != *"X" ){
                              free_places++;
                          } else counter++;
                      }
                      for (int m2 = 11; m2 < 17; m2++){
                          if (arr[i][m2] != *"X" ){
                              free_places++;
                          } else counter++;
                      }
                      for (int m3 = 19; m3 < 25; m3++){
                          if (arr[i][m3] != *"X" ){
                              free_places++;
                          } else counter++;
                      }
                      for (int m4 = 27; m4 < 30; m4++){
                          if (arr[i][m4] != *"X" ){
                              free_places++;
                          } else counter++;
                      }
                      }
                  }
              }
     if (counter > 1){
         std::cout << "-1" << std::endl;
     }
     if (counter < 2){
         std::cout << free_places << std::endl;
     }
}
