#include <iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
#include <sstream>
#include<set>
using namespace std;
#define ll long long
#define ld long double
#define pi 3.141592653589793238
#define ahmed  ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
//bool prime Fibonacii[50] = { 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0,
//0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 };
//ll primeNumber[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29,31, 37, 41, 43, 47, 53, 59,61, 67, 71, 73, 79, 83, 89, 97, 101, 103 };
//ll numberFibonacii[] = { 0 ,1, 1, 2, 3 ,5 ,8, 13, 21, 34 ,55 ,89 ,144, 233, 377, 610, 987, 1597, 2584 ,4181, 6765, 10946, 17711, 28657, 46368, 75025 ,121393, 196418 ,317811, 514229 ,832040 ,1346269 ,2178309, 3524578, 5702887, 9227465 ,14930352 ,24157817, 39088169 ,63245986 ,102334155, 165580141 ,267914296 ,433494437, 701408733 ,1134903170 ,1836311903 ,2971215073, 4807526976 ,7778742049 };
void  print(ll arr[], int n)
{
    if (n == 0){
        cout << arr[n];
        return;
    }else cout << arr[n] << " ";
    print(arr, n - 2);
}
int main()
{
    int n; cin >> n;
    ll* arr = new ll[n];
    for (int i = 0; i < n && cin >> arr[i]; i++);
    if (n == 1 || n == 2)
        print(arr, 0);
    if (n % 2 ? n = n - 1 : n = n - 2)
        print(arr, n);

	return 0;
}