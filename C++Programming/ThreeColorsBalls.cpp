#include<iostream>
using namespace std;
int main()
{
	//����ɫ����ȡ������
	enum color{red,yellow,blue};
	int first,second;
	for(first=red;first<blue;first=(color)(first+1))
	{
		for(second=first+1;second<=blue;second=(color)(second+1))
		{
			switch(first){
				case red:cout<<"red ";		break;
				case yellow:cout<<"yellow ";break;
				case blue:cout<<"blue ";	break;
			}
			switch(second)
			{
				case red:cout<<"red ";		break;
				case yellow:cout<<"yellow ";break;
				case blue:cout<<"blue ";	break;			
			}
			cout<<"\n";
		}
	}
	return 0;
}
