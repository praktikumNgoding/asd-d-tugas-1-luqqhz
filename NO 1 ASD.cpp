#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int P1[11], P2[11], P3[11], PH[99], PH2[99], i;


int main(){
P1[10]=0;   P2[10]=0;   P3[10]=0;
P1[9]=0;    P2[9]=3;    P3[9]=0;
P1[8]=6;    P2[8]=0;    P3[8]=0;
P1[7]=8;    P2[7]=4;    P3[7]=0;
P1[6]=0;    P2[6]=0;    P3[6]=0;
P1[5]=5;    P2[5]=0;    P3[5]=0;
P1[4]=0;    P2[4]=3;    P3[4]=0;
P1[3]=1;    P2[3]=2;    P3[3]=0;
P1[2]=0;    P2[2]=2;    P3[2]=2;
P1[1]=0;    P2[1]=0;    P3[1]=0;
P1[0]=15;   P2[0]=10;   P3[0]=5;
    cout<<"P1 = ";
    for (i=10; i>=0; i--)
    {
        if (P1[i]>0)
        {
            cout<<" +"<<P1[i]<<"x^"<<i;
        };
        if (P1[i]<0)
        {
            cout<<" "<<P1[i]<<"x^"<<i;
        };
    }
    cout<<"\nP2 = ";
    for (i=10; i>=0; i--)
    {
        if (P2[i]>0)
        {
            cout<<" +"<<P2[i]<<"x^"<<i;
        };
        if (P2[i]<0)
        {
            cout<<" "<<P2[i]<<"x^"<<i;
        };
    }
    cout<<"\nP3 = ";
    for (i=10; i>=0; i--)
    {
        if (P3[i]>0)
        {
            cout<<" +"<<P3[i]<<"x^"<<i;
        };
        if (P3[i]<0)
        {
            cout<<" "<<P3[i]<<"x^"<<i;
        };
    }
    cout<<"\n\nHasil Penjumlahan P1+P2\n";
    cout<<"\n = ";
    for (i=10; i>=0; i--)
    {
        PH[i]=P1[i];
        PH[i]=PH[i]+P2[i];
    }
    for (i=10; i>=0; i--)
    {
        if (PH[i]>0)
        {
            cout<<" +"<<PH[i]<<"x^"<<i;
        }
    };
    for (i=10; i>=0; i--)
    {
        PH[i]=0;
    }
    cout<<"\n\nHasil Pengurangan P1-P2\n";
    cout<<"\n = ";
    for (i=10; i>=0; i--)
    {
        PH[i]=P1[i];
        PH[i]=PH[i]-P2[i];
    }
    for (i=10; i>=0; i--)
    {
        if (PH[i]>0)
        {
            cout<<" +"<<PH[i]<<"x^"<<i;
        }
        if (PH[i]<0)
        {
            cout<<" "<<PH[i]<<"x^"<<i;
        }
    };
    for (i=10; i>=0; i--)
    {
        PH[i]=0;
    }
    cout<<"\n\nHasil Perkalian P1*P3\n";
    cout<<"\n = ";
    for (i=10; i>=0; i--)
    {

        PH[(i+2)]=P1[i];
    }
    for (i=10; i>=0; i--)
    {
        PH2[i]=P1[i]*5;
    }
    for (i=10; i>=0; i--)
    {
        PH[i]=PH2[i]+PH[i];
    }
    for (i=10; i>=0; i--)
    {
        if (PH[i])
        {
            cout<<" +"<<PH[i]<<"x^"<<i;
        }
        if (PH[i]<0)
        {
            cout<<" "<<PH[i]<<"x^"<<i;
        }
    };
    for (i=10; i>=0; i--)
    {
        PH[i]=0;
    }
    cout<<"\n\nHasil Turunan P2\n";
    cout<<"\n = ";


    for (i=10; i>=0; i--)
    {
        PH[(i-1)]=i*P2[i];
    }
    for (i=10; i>=0; i--)
    {
        if (PH[i])
        {
            cout<<" +"<<PH[i]<<"x^"<<i;
        }
        if (PH[i]<0)
        {
            cout<<" "<<PH[i]<<"x^"<<i;
        }
    };
    for (i=10; i>=0; i--)
    {
        PH[i]=0;
    }
    cout<<"\n\n";
}
