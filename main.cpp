#include <iostream>


int main()
{
     int coach;//количество вагонов
     int num = 3; //количество строк
     int column = 30;//количество столбцов
     std::cin >> coach;
     int free_places = 0; //счетчик количества свободных мест
     int counter0 = 0;
     int counter1 = 0;//счетчик занятых мест
     int counter2 = 0;
     int counter3 = 0;
     int counter4 = 0;
     char arr[num][column];
     int huyna = num * coach;
     bool flag;
     for ( int i = 0; i < huyna; i++){
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
              if ( arr[i][0] == *"X") counter0++;
              if (counter0 > 1){
                  flag = true;
                  std::cout << counter0 << std::endl;
                  counter0 = 0;
              }
              for (int j = 3; j < 9; j++){
                       if (arr[i][j] == *"X" ){
                           counter1++;
                       }
                       if (counter1 > 1){
                           flag = true;
                           std::cout << counter1 << std::endl;
                           counter1 = 0;
                       }
                  }
              for (int j = 11; j < 17; j++){
                       if (arr[i][j] == *"X" ){
                           counter2++;
                       }
                       if (counter2 > 1){
                           flag = true;
                           std::cout << counter2 << std::endl;
                           counter2 = 0;
                       }
                   }
              for (int j = 19; j < 25; j++){
                       if (arr[i][j] == *"X" ){
                           counter3++;
                       }
                       if (counter3 > 1){
                           flag = true;
                           std::cout << counter3 << std::endl;
                           counter3 = 0;
                       }
                   }
              for (int j = 27; j < 30; j++){
                       if (arr[i][j] == *"X" ){
                           counter4++;
                       }
                       if (counter4 > 1){
                           flag = true;
                           std::cout << counter4 << std::endl;
                           counter4 = 0;
                       }
                   }
              counter0 = 0;
              counter1 = 0;//счетчик занятых мест
              counter2 = 0;
              counter3 = 0;
              counter4 = 0;
              }
         free_places = 44 - counter0 - counter1 - counter2 - counter3 - counter4;
         if (flag == true) std::cout << "-1" << std::endl;
         if (flag == false) std::cout << free_places << std::endl;
         free_places = 0;
              counter0 = 0;
              counter1 = 0;//счетчик занятых мест
              counter2 = 0;
              counter3 = 0;
              counter4 = 0;
}
//#..#X###X..#X####..#X#X##..##X
//..............................
//#..X#X###..######..X###X#..#X#
//#..#X####..#X####..#X####..##X
//..............................
//#..######..######..######..###