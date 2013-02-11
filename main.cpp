#include <iostream>
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;


using namespace std;

void even_fibonacci()
{
    long int x=0, y=1,z=0, sum=0;
    while(x<4000000)
    {
        x = y + z;
        z = y;
        y = x;

        cout<<x<<endl;

        if(x%2==0)
        {
            sum = sum + x;
        }
    }
}

void factors()
{
    int a = 600851475143, n = 2;


}

void small_divisble()
{
    int a = 2,d, r=0;
    while(r==0)
    {
        r = a%d;
        ite:
        if(d<=20)
        {
            d = d+2;
        }
        if(r==0)
        {
            goto ite;
        }
        a = a+2;
    }
    cout<<a<<endl;
}

void sum_square_diff()
{
    int sq1=0, sq2=0, temp=0;
    for(int i =0;i<200;i++)
    {
        temp = temp + 1;
        sq1 = sq1 + (i*i);
        sq2 = (temp*temp);
    }
    cout<<sq1<<endl;
    cout<<sq2<<endl;
    cout<<sq1-sq2<<endl;
}

void pytho_trifles()
{
    int a=0, b=0, c=0;
int s = 1000;
int m = 0, k = 0, n = 0, d = 0;
bool found = false;

int mlimit = (int) Math.Sqrt(s / 2);
for (m = 2; m <= mlimit; m++) {
    if ((s / 2) % m == 0) { // m found
        if (m % 2 == 0) { // ensure that we find an odd number for k
            k = m + 1;
        } else {
            k = m + 2;
        }
        while (k < 2 * m && k <= s / (2 * m)) {
            if (s / (2 * m) % k == 0 && gcd(k, m) == 1) {
                d = s / 2 / (k * m);
                n = k - m;
                a = d*(m * m - n * n);
                b = 2 * d * n * m;
                c = d * (m * m + n * n);
                found = true;
                break;
            }
            k += 2;
        }
    }
    if (found) {
        break;
    }
 cout<<a<<endl;
 cout<<b<<endl;
 cout<<c<<endl;
}

int main()
{
    pytho_trifles();
    //small_divisble();
    //fibonacci();//correct
    //sum_square_diff();//correct
    return 0;
}
