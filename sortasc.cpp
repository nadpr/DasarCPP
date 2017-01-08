/*Sorting Ascending*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
     string angka;
     getline( cin, angka );
     
     sort(angka.begin(), angka.end(), greater<int>()) ;
     cout << angka << endl;
}
