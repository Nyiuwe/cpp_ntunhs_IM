
// Online IDE - Code Editor, Compiler, Interpreter

#include <iostream>
#include <string>
using namespace std;
int main() {
    string classn; // 存儲班級
    string ID; // 存儲學號
    string name;      // 存儲姓名

    // 輸入班級
    cout << "請輸入班級: ";
    getline(cin, classn);

    // 輸入學號
    cout << "請輸入學號: ";
    getline(cin, ID);

    // 輸入姓名
    cout << "請輸入姓名: ";
    getline(cin, name);

    // 列印結果
    cout << "班級: " << classn << "\n";
    cout << "學號: " << ID << "\n";
    cout << "姓名: " << name << "\n";

    return 0;
} 
