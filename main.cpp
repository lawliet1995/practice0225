#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX 5

int main(void)
{
	int score[MAX];
	static int i=0;
	float sum=0.0f;
	
	cout<<"ENTER 0 TO QUIT"<<endl;
	do
	{
		if(i==MAX)
		{
			cout<<"no more space"<<endl;
			
			break;
		}
		cout<<"INPUT!";
		cin>>score[i];
		i++;
		
	}while (score[i+1]>0)
	
	int num=i-1;


		for(int j=0;j<num;j++)
	 	{
		 sum+=score[j];
		}
	cout<<"Aveage is"<< endl;
	
	system("pause");
	return 0;
}
