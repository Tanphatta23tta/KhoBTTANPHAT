#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
	int key,n;
	
	int my_array[100];

// Hàm nhap mang bang de quy
void nhap_mang(int arr[], int n, int index) {
    if (index < n) {
        printf("Nhap phan tu thu %d: ", index + 1);
        scanf("%d", &arr[index]);
        nhap_mang(arr, n, index + 1);
    }
}

// Hàm xuat mang bang de quy
void xuat_mang(int arr[], int n, int index) {
    if (index < n) {
        printf("%d ", arr[index]);
        xuat_mang(arr, n, index + 1);
    }
}


int main(){ 

	while(true)
	{
	system("cls");
	printf("**********************************************\n");
	printf("**    1.DE QUY NHAP VA XUAT MANG            **\n");
	printf("**    2.FILE NHAP - XUAT SINH VIEN          **\n");
	printf("**    0.Thoat                               **\n");
	printf("**********************************************\n");
	fflush(stdin);
	printf("\n \t\t AN PHIM CHON: ");
	scanf("%d",&key);
	switch(key)
	{
		//an phim 1
		case 1:
			fflush(stdin);
		//nhap so phan tu cua mang
			printf("Nhap so phan tu cua mang: ");
			scanf("%d",&n);
		//khoi tao mang co n phan tu
	
		//nhap va xuat mang su dung de quy
			nhap_mang(my_array,n,0);
			printf("Mang vua nhap la: ");
			xuat_mang(my_array,n,0);
	    	getch();
			break;
			
			
			case 2:
			fflush(stdin);
		
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
