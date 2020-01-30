#include<iostream>
using namespace std;

int main()
{
    int i = 0,result[300];
    double length[300];
    for(int k=0;k<300;k++)
    {
        cin >> length[k];
        if(length[k]!=0.00)
            i++;
        else
            break;
    }
    for(int k=0;k<i;k++)
    {
        double length_new=0.00;
        int number=2;
        while(length_new<length[k])
        {
            length_new = length_new + 1.0/number;   //易错点是浮点型的除法用1.0
            number++;
        }
        result[k]=number-2;
    }
    for(int k=0;k<i;k++)
    {
        cout << result[k] << " card(s)" <<endl;
    }
    return 0;
}
