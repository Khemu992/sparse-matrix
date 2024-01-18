/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
using namespace std;

struct Element
{
  int i; 
  int j;
  int x;
};

struct Sparse
{
  int m;
  int n;    //Dimention of matrix
  int num;  //no. of non zero numbers
  struct Element *ele;
};

void Create(struct Sparse *s)
{
    cout<<"Enter Dimention "<<endl;
    cin>>s->m>>s->n;
    cout<<"Enter no. of non zero elements"<<endl;
    cin>>s->num;
    s->ele=new struct Element[s->num];
    cout<<"Enter all elemens eith i and j"<<endl;
    for(int i=0; i<s->num; i++)
    {
        cin>>s->ele[i].i>>s->ele[i].j>>s->ele[i].x;
    }
}

void Display(struct Sparse s)
{
    int k=0;
    for(int i=1; i<=s.num; i++)
    {
        for(int j=1; j<=s.num; j++)
        {
            if(i==s.ele[k].i && j==s.ele[k].j)
            {
            cout<<s.ele[k].x<<" ";
            k++;
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    struct Sparse s;
    Create(&s);
    Display(s);
return 0;
}

