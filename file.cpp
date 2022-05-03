#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
     int coach;//количество вагонов
     int num = 3; //количество строк
     std::cin >> coach;
     int free_places = 0; //счетчик количества свободных мест
     vector <int> memory;
     vector <int> conclusion;
     bool flag = false;
     char arr[num][30];
     int huyna = num * coach;
     for ( int i = 0; i < huyna; i++){
         for (int j = 0; j < 30; j++){
             std::cin >> arr[i][j];
         }
     }
          //3-9 11-17 19-25 27-30
     for ( int i = 0; i < huyna; i++){
              for (int j = 3; j < 9; j++){
                    if (arr[i][j] == *"X"){
                        memory.push_back(j);
                    }
                  }
              for (int k = 1; k < 7; k++){
                  for (int it = 0; it < memory.size(); it++){
                      if(memory[it + 1] - memory[it] > k){
                          while (memory[it + 1] - memory[it] <= k){
                              free_places++;
                          }
                      }
                      if(memory[it + 1] - memory[it] <= k){
                          flag = true;
                      }
                  }
              }
              memory.clear();
              for (int j = 11; j < 17; j++){
                    if (arr[i][j] == *"X"){
                        memory.push_back(j);
                    }
                   }
              for (int k = 1; k < 7; k++){
                  for (int it = 0; it < memory.size(); it++){
                      if(memory[it + 1] - memory[it] > k){
                          while (memory[it + 1] - memory[it] <= k){
                              free_places++;
                          }
                      }
                      if(memory[it + 1] - memory[it] <= k){
                          flag = true;
                      }
                  }
              }
              memory.clear();
              for (int j = 19; j < 25; j++){
                    if (arr[i][j] == *"X"){
                        memory.push_back(j);
                    }
                   }
              for (int k = 1; k < 7; k++){
                  for (int it = 0; it < memory.size(); it++){
                      if(memory[it + 1] - memory[it] > k){
                          while (memory[it + 1] - memory[it] <= k){
                              free_places++;
                          }
                      }
                      if(memory[it + 1] - memory[it] <= k){
                          flag = true;
                      }
                  }
              }
              memory.clear();
              for (int j = 27; j < 30; j++){
                    if (arr[i][j] == *"X"){
                        memory.push_back(j);
                    }
                   }
              for (int k = 1; k < 7; k++){
                  for (int it = 0; it < memory.size(); it++){
                      if(memory[it + 1] - memory[it] > k){
                          while (memory[it + 1] - memory[it] <= k){
                              free_places++;
                          }
                      }
                      if(memory[it + 1] - memory[it] <= k){
                          flag = true;
                      }
                  }
              memory.clear();
              }
              if (flag == true && (i % 3 == 0)){
                  conclusion.push_back(-1);
              }
              if (flag == false && (i % 3 == 0)){
                  conclusion.push_back(free_places);
              }
              flag = false;
     }
     for(int i = 0; i < 6; i++){
         for(int j = 0; j < conclusion.size(); j++){
             cout << conclusion[j];
             cout << " ";
         }
     }
}
//#..#X###X..#X####..#X#X##..##X
//..............................
//#..X#X###..######..X###X#..#X#
//#..#X####..#X####..#X####..##X
//..............................
//#..#X####..###X##..######..###

//#..#X###X..#X####..#X#X##..##X
//..............................
//#..X#X###..######..X###X#..#X#