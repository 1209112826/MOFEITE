#include<iostream>
#include<math.h>
using namespace std;
/*int main()
{
    int a,b,c,p,x1,x2;
    cout<<"������a,b,c��ֵ"<<endl;
    cin>>a>>b>>c;
    cout<<"���Ϊ��"<<"x1="<<(-b+sqrt(b*b-4*a*c))/2*a<<" "<<"x2="<<(-b-sqrt(b*b-4*a*c))/2*a;
    return 0;
}*/

/*int main()
{
    int a,b,c;
    float p;
    cout<<"������a,b,c��ֵ"<<endl;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    cout<<"���������Ϊ��"<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
    return 0;
}*/

/*int main()
{
    int year,month,day,x,a=0;
    char q,w;
    cin>>year>>q>>month>>w>>day;
    x=year%100?year%4?0:1:year%400?0:1;
    switch (month-1)
    {
        case 11:a+=30;
        case 10:a+=31;
        case 9:a+=30;
        case 8:a+=31;
        case 7:a+=31;
        case 6:a+=30;
        case 5:a+=31;
        case 4:a+=30;
        case 3:a+=31;
        case 2:a+=(x==0?29:28);
        case 1:a+=31;
        case 0:a+=day;
    }
    if(a%7)
        cout<<"��"<<a/7+1<<"��"<<"��"<<a%7<<"��"<<endl;
    else
        cout<<"��"<<a/7<<"��"<<"��"<<a%7<<"��"<<endl;
    return 0;

}
*/
