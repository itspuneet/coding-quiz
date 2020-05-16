#include<iostream>
#include<iomanip>
using namespace std;

int main()
{   int m;
    cin>>m;
    int a[m][m],fr=0;
    int lr=m-1,fc=0,lc=m-1,i,v=1;

    for(i=0;i<=lr;i++){
        for(int j=0;j<=lc;j++)
            a[i][j]=0;
        }

    while(fr<=lr && fc<=lc){

        for(i=fc;i<=lc;i++){
        
            a[fr][i]=v++;
        }
        fr++;

        for(i=fr;i<=lr;i++){
            
                a[i][lc]=v++;
        }
        lc--;

        for(i=lc;i>=fc;i--){
            
                a[lr][i]=v++;
        }
        lr--;

        for(i=lr;i>=fr;i--){
           
            a[i][fc]=v++;
        }
        fc++;

    }


    for(i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<setw()<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}