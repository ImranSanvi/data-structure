1 . All Combinatom of a string
      #include <bits/stdc++.h>
      using namespace std;
      
      void generateCombinations(string num, string current, set<string>& combinations) {
          if (num.empty()) {
              combinations.insert(current);
              return;
          }
      
          for (int i = 0; i < num.size(); i++) {
              string newNum = num;
              string newCurrent = current;
      
              newCurrent.push_back(newNum[i]);
              newNum.erase(i, 1);
      
              generateCombinations(newNum, newCurrent, combinations);
          }
      }
      
      int main() {
          string number = "4747";
          set<string> combinations;
      
          generateCombinations(number, "", combinations);
      
          for (auto u : combinations) {
              cout << u << endl;
          }
      
          return 0;
      }
