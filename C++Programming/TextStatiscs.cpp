#include<iostream>
using namespace std;
int main()
{
	// �ı�ͳ��
	const int N=101;
	char str[N],c;
	int len=0,capital=0,smallletter=0,digit=0,others=0;
	int i=0;
	cin.getline(str,N);

	// ����
	while(str[i]!='\0'){
		len++;
		c=str[i];
		if(c<='Z'&&c>='A')
			capital++;
		else if(c<='z'&&c>='a')
			smallletter++;
		else if(c<='9'&&c>='0')
			digit++;
		else
			others++;
		i++;
	}

	cout<<"�ַ����ܳ��ȣ�"<<len<<endl;
	cout<<"��д��ĸ������"<<capital<<endl;
	cout<<"Сд��ĸ������"<<smallletter<<endl;
	cout<<"���ָ���    ��"<<digit<<endl;
	cout<<"�����ַ�������"<<others<<endl;
	

	system("pause");
	return 0;
}
