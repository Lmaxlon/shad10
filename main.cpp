#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
     int coach; //количество вагонов
     cin >> coach;
     int num = 0;
     int step = 0;
     num = 3 * coach; //количество строчек всего
     int free_places = 0;//счетчик свободных мест
     int count = 0; //счетчик занятых мест
     char arr[num][30];
     vector <int> memory;
     for (int i = 0; i < num; i++){
         for (int j = 0; j < 30; j++){
             cin >> arr[i][j];
         }
     }
     for(int i = 0; i < num; i++){
         for (int j = 3; j < 9; i++){
             if(arr[i][j] == *"#"){
                 free_places++;
             }
             for(int k = 1; k < 7; k++){
                     int calc;
                     calc = k - 1;
                     step = 0;
                     for(int m = 3 + step; m < 9 - 5 - calc + step; m++){
                         if(arr[i][m] == *"X"){
                             if (find(memory.begin(), memory.end(), m) != memory.end() ){
                                    step++;
                             }
                             else {
                                count++;
                                step++;
                                memory.push_back(m);
                             }
                         }
                         if(step == 4 - calc){
                             break;
                         }
                         memory.clear();
                     }
                     if (count > 1){
                         cout << "-1";
                     }
                     if (count < 2){
                         cout << free_places;
                     }
                     }
                 }
             }
}
//#..#X###X..#X####..#X#X##..##X
//..............................
//#..X#X###..######..X###X#..#X#
//#..#X####..#X####..#X####..##X
//..............................
//#..#X####..###X##..######..###