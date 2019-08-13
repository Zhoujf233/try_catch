//
//  main.cpp
//  try_catch
//
//  Created by JF Zhou on 2019/8/13.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double triangle(double,double,double);
    double a,b,c;
    cout<<"please input three number:";
    cin>>a>>b>>c;
    try
    {
        while(a>0 && b>0 && c>0)
        {
            cout<<triangle(a,b,c)<<endl;
            cin>>a>>b>>c;
        }
    }
    catch(double)
    {
        cout<<"a = "<<a<<",b = "<<b<<",c = "<<c<<",that is not a triangle!"<<endl;
        cout<<"end"<<endl;
    }
}

double triangle(double a,double b,double c)
{
    double s = (a+b+c)/2;
    if(a+b<=c||b+c<=a||a+c<=b)throw a;
    return sqrt(s*(s - a)*(s - b)*(s - c));
}
