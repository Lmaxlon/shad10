#include <iostream>
#include "math.h"


int main()
{
     int num;//количество вагонов
     int column = 30;//количество столбцов
     std::cin >> num;
     num = 3 * num; //количество строк
     int buffer = 0; //буфер который запоминает столбец
     int counter = 0;//счетчик занятых мест
     bool flag = false; //в случае если мест занято больше чем 1 - true
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
     for (int i = 0; i < num; i++){
                   for (int j = 0; j < column; j++){
                       buffer = j;//запомнили , после чего проверяем диапазон
                       if(arr[i][j] == *"."){
                           while(arr[i][j] != *"." || j < 30){

                               if(arr[i][j] == *"X"){
                                   counter++;//место занято
                                   j++; //чекер следующего места (только в диапазоне)
                               } else {//если место не занято
                                   j++;//проверяем следующее место
                               }
                           if (counter > 1){
                               flag = true;
                               j = buffer;
                               break;
                           }

                           }
                       }
                   }
                   std::cout << std::endl;
               }
}
