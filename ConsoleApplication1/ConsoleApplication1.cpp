// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main()
{
    int a,b=0;
    
    cin >> a;
    for (int i = 1; i <= a; i++) {
        if (i % 3 == 0){
            b += i;
        }
    }
    cout<< b<<endl;
        
    return 0;
}
