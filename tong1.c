#include<stdio.h>
#include<conio.h>
/*S(n)=1+2+3+...+n . 163.cpp */

void tinh(int n)
{
	do{
	printf("Nhap vao n(n>=1):n=");
	scanf("%d",&n);
	if(n<1)
		printf("So ban nhap vao khong hop le!Xin vui long nhap lai!\n");
	else
		break;
	}while(n<1);
	int s=0;
	for(int i=1;i<=n;i++)
	{
		s+=i;
	}
	printf("Ket qua la:%d",s);
}

void main()
{
	int n,tieptuc;
	quaylai:tinh(n);
	printf("\nBan co muon tiep tuc chay chuong trinh hay khong ? Neu co bam phim C,nguoc lai bam bat ky 1 phim nao khac de ket thuc\n");
	tieptuc=getch();
	if(tieptuc=='c'||tieptuc=='C')
		goto quaylai;
}