#include <iostream>
#include <string>


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

/*void pytho_trifles()
{
    int a=0, b=0, c=0;
int s = 1000;
int m = 0, k = 0, n = 0, d = 0;
bool found = false;

int mlimit// = (int) Math.Sqrt(s / 2);
for (m = 2; m <= mlimit; m++) {
    if ((s / 2) % m == 0) { // m found
        if (m % 2 == 0) { // ensure that we find an odd number for k
            k = m + 1;
        } else {
            k = m + 2;
        }
        while (k < 2 * m && k <= s / (2 * m)) {
         //   if (s / (2 * m) % k == 0 && gcd(k, m) == 1) {
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
}*/

void product100digit()
{
    int product=0, n = 0, prod=0,x=0,b=0;
    string number = "73167176531330624919225119674426574742355349194934"
                "96983520312774506326239578318016984801869478851843"
                "85861560789112949495459501737958331952853208805511"
                "12540698747158523863050715693290963295227443043557"
                "66896648950445244523161731856403098711121722383113"
                "62229893423380308135336276614282806444486645238749"
                "30358907296290491560440772390713810515859307960866"
                "70172427121883998797908792274921901699720888093776"
                "65727333001053367881220235421809751254540594752243"
                "52584907711670556013604839586446706324415722155397"
                "53697817977846174064955149290862569321978468622482"
                "83972241375657056057490261407972968652414535100474"
                "82166370484403199890008895243450658541227588666881"
                "16427171479924442928230863465674813919123162824586"
                "17866458359124566529476545682848912883142607690042"
                "24219022671055626321111109370544217506941658960408"
                "07198403850962455444362981230987879927244284909188"
                "84580156166097919133875499200524063689912560717606"
                "05886116467109405077541002256983155200055935729725"
                "71636269561882670428252483600823257530420752963450";
    b = number.size();
    while(n < 995 )
    {
        prod = number[n]*number[n+1]*number[n+2]*number[n+3]*number[n+4];
        cout<<prod<<endl;
        if(prod>product)
        {
            product = prod;
            x = n;
        }
        n++;
    }
   /* for(n=0;n<=b;n++)
    {
        cout<<number[n]<<endl;
    }*/
    cout<<number[x]<<endl;
    cout<<number[x+1]<<endl;
    cout<<number[x+2]<<endl;
    cout<<number[x+3]<<endl;
    cout<<number[x+4]<<endl;
    cout<<product<<endl;
    cout<<b<<endl;
}

int main()
{
    product100digit();
    //pytho_trifles();
    //small_divisble();
    //fibonacci();//correct
    //sum_square_diff();//correct
    return 0;
}
