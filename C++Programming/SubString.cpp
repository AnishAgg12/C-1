#include<iostream>
using namespace std;
int main()
{
	//ȡ���ַ���
	char str[101];// ԭ�ַ���
	char sub[101];// ���ַ���
	int len;//Դ�ַ�������
	int k,l;//���ַ�����ʼλ�ã�����
	int i,j;

	cout<<"�������ַ���"<<endl;
	cin.getline(str,100);

	// ���ַ�������
	len=0;
	while(str[len]!='\0')
		len++;

	cout<<"���������ַ�����ʼλ�úͳ���"<<endl;
	cin>>k>>l;
	while(k!=0&&l!=0){
		j=0;
		for(i=k-1;i<len&&i<k-1+l;i++){
			sub[j++]=str[i];
		}
		sub[j]='\0';
		cout<<sub<<endl;
		cout<<"���������ַ�����ʼλ�úͳ���"<<endl;
		cin>>k>>l;
	}

	system("pause");
	return 0;
}
