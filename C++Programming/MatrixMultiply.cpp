#include<iostream>
using namespace std;
int main()
{
	const int M=20,N=20,K=20;
	double A[M][N],B[N][K],C[M][K];
	int M1,N1,N2,K2;
	int i,j,k;
	
	// ����
	cout<<"�������һ�������ά�� M N"<<endl;
	cin>>M1>>N1;
	cout<<"�밴�������һ�������Ԫ��"<<endl;
	for(i=0;i<M1;i++){
		for(j=0;j<N1;j++)
			cin>>A[i][j];
	}

	cout<<"������ڶ��������ά�� N K"<<endl;
	cin>>N2>>K2;
	while(N2!=N1){
		cout<<"�����������Ӧ���ھ���һ�����������������룺";
		cin>>N2>>K2;
	}

	cout<<"�밴������ڶ��������Ԫ��"<<endl;
	for(i=0;i<N1;i++){
		for(j=0;j<K2;j++)
			cin>>B[i][j];
	}

	// �˷�
	for(i=0;i<M1;i++){
		for(j=0;j<K2;j++){
			C[i][j]=0;
			for(k=0;k<N1;k++)
				C[i][j]+=A[i][k]*B[k][j];
		}
	}

	// ���
	for(i=0;i<M1;i++){
		for(j=0;j<K2;j++){
			cout<<C[i][j]<<'\t';
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
