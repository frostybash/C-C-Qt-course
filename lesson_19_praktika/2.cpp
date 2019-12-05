#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(){

vector<int> srcVec;
for (int val = 0; val < 10; val++)

srcVec.push_back(val);
vector<int> chVec;

for (int val = 0; val < 10; val++)

chVec.push_back(0);

for_each(srcVec.begin(), srcVec.end(), [=](int & terminator1)mutable{
    //terminator1=3;
   // chVec.push_back(terminator1);
    cout << chVec[chVec.size()] << " ";
});
for_each(chVec.begin(), chVec.end(), [](int terminator){

cout << terminator << " ";

});

cout << endl;
}
