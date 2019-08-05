#include<iostream>
using namespace std;
int main()
{
    int n, x_coord=0,y_coord=0,x_flag=0,y_flag=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)  // odd means x_coord
        {
            if(!x_flag)
            {
                x_coord = x_coord+(10*i);
                x_flag=1;
            }
            else
            {
                x_coord = x_coord-(10*i);
                x_flag=0;
            }           
            
        }
        else  // even means y coord
        {
            if(!y_flag)
            {
                y_coord = y_coord+(10*i);
                y_flag=1;
            }
            else
            {
                y_coord = y_coord-(10*i);
                y_flag=0;
            }
        }
        //cout<<x_coord<<" "<<y_coord<<endl;
    }
    cout<<x_coord<<" "<<y_coord;
    
    return 0;
}