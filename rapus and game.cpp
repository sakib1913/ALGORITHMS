#include <cstdio>
using namespace std;
#define get getchar_unlocked
#define MOD 1000000007
typedef unsigned long long ull;


int pwr[100000];

// Fast I/O Operations

ull scan()
{
    int n = 0, ch = get();
    while (ch < '0' || ch > '9')
        ch = get();
    while (ch >= '0' && ch <= '9') {
        n = n * 10 + ch - '0';
        ch = get();
    }
    return n;
}

int main()
{
 ull T = scan(), N, Ai, sum, extra;

 pwr[0] = 1;
 for (int i = 1; i < 100000; i++)
  pwr[i] = (pwr[i - 1] << 1) % MOD;

 while(T--){
  N = scan();
  Ai = scan();
  extra = Ai * 2;
  sum = 0;
  for (int i = 1; i <= N; i++){
   Ai = scan();
   sum = (sum * 2 + Ai * extra) % MOD;
   extra = (extra + pwr[i] * Ai) % MOD;
  }
  printf("%llu\n", sum);
 }
 return 0;
}
