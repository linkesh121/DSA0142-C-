#include <iostream>
using namespace std;
int diagonal(int array[][3])
{
    int sum = 0;
    for(int I = 0; I < 3; I++)
    {
        sum += array[I][I];
    }
    return sum;
}

int main()
{
    int array[3][3] = {{1,2,3}, {1,3,4}, {2,3,4}};
    cout<<"matrix is:";
    for(int i=0;i<3;i++)
    {
    	cout<<"\n";
    	for(int j=0;j<3;j++)
    	{
    		cout<<array[i][j];
		}
	}
    cout << "\nsum is " << diagonal(array) << " ";
    return 0;
}