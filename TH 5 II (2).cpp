#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
char s1[50], s2[50], key;
int a[100][100],i,j,n,m,x,tong;
void Nhap();
void Xuat();
void sapxep();


int main(){


while(true)
{
system("cls");
printf("***********************************************************************\n");
printf("**                       THAO TAC TREN CHUOI                         **\n");
printf("**       1. Nhap/xuat mang 2 chieu co m,n phan tu cac so nguyen      **\n");
printf("**       2. Sap xep theo thu tu tang dan                             **\n");
printf("**       3. Tinh tong cac phan tu la so nguyen to chia het cho 3     **\n");
printf("**       0. Thoat                                                    **\n");
printf("***********************************************************************\n");
fflush(stdin);
printf("\n \t\t AN PHIM CHON: ");
scanf("%d",&key);
switch(key)
{
case 1:
fflush(stdin);
//goi ham de thuc hien cong viec tuong ung
Nhap();
printf("\n Mang vua nhap ");
Xuat();
printf("\nBam phim bat ky de tiep tuc!");



getch();
break;
case 2:
//goi ham thuc de hien cong viec tuong ung
	printf("\n Sau khi sap xep ");

sapxep();
Xuat();

printf("\nBam phim bat ky de tiep tuc!");

getch();
break;




case 0:
exit(1);
default:
printf("\nKhong co chuc nang nay!");
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
}
}
}
void Nhap()
{
	printf("\n Nhap m: ");
	scanf("%d",&n);
	printf("\n Nhap n: ");
	scanf("%d",&m);
	for (int i=0;i<n;i++)
	for (int j=0;j<m;j++)
	{
		printf("\n nhap a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
	}
	}
	void Xuat()
{
for(i=0;i<n;i++)
  {
  	printf("\n");
  		for(j=0;j<m;j++)
  
  	printf("%d\t",a[i][j]);

	
  }
}
	
void sapxep()
{
		int k= m*n;
	for( int i=0;i<k-1;i++)
	{ 
	for( int j=i+1;j<k;j++)
	  	{
	
	  		if(a[i/n][i%n]>a[j/n][j%n])
	  		{
	  				int temp=a[i/n][j%n];
	       	   a[i/n][i%n]=a[j/n][j%n];
	            	a[j/n][j/n]=temp;
	  		}
	  		
	  	}
    		
	
	
		
	}
	 
}





