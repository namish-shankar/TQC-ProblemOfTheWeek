#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
double arr[5]={0,0,1,0,0};
double gukesh_matrix[5][5]={{90,4,3,2,1},{0,91,4,3,2},{0,0,93,4,3},{0,0,0,95,5},{0,0,0,0,100}};
double ding_matrix[5][5]={{100,0,0,0,0},{8,92,0,0,0},{3,7,90,0,0},{2,3,7,88,0},{1,3,4,6,86}};

for(int i=1;i<=20;i++)
{
  double temp[5]={0};
    if(i%2)
{
for(int j=0;j<5;j++)
{ for(int k=0;k<5;k++)
    temp[j]+=arr[k]*gukesh_matrix[k][j]/100.0;
}
}
else{
    for(int j=0;j<5;j++)
{ for(int k=0;k<5;k++)
    temp[j]+=arr[k]*ding_matrix[k][j]/100.0;
}
}


copy(begin(temp),end(temp),begin(arr));

}  
cout<<"Values at final state:";
for(int p=0;p<5;p++)
{
    cout<<arr[p]<<",";
}
cout<<endl;
cout<<"Gukesh' winning probability in percentage:"<<100*(arr[0]*0.9+arr[1]*0.7)<<endl;
cout<<"Ding's winning probability in percentage:"<<100*(arr[3]*0.6+arr[4]*0.8)<<endl;
cout<<"Draw probability in percentage::"<<100*(1-(arr[3]*0.6+arr[4]*0.8)-(arr[0]*0.9+arr[1]*0.7))<<endl;
    return 0;
}