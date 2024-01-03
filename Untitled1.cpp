#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
char key;
int n;


// H�m nhap mang bang de quy
void nhap_mang(int arr[], int n, int index) {
    if (index < n) {
        printf("Nhap phan tu thu %d: ", index + 1);
        scanf("%d", &arr[index]);
        nhap_mang(arr, n, index + 1);
    }
}

// H�m xuat mang bang de quy
void xuat_mang(int arr[], int n, int index) {
    if (index < n) {
        printf("%d ", arr[index]);
        xuat_mang(arr, n, index + 1);
    }
}

int main()
{
while(true){

{system("cls");
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
	int my_array[n];

	//nhap va xuat mang su dung de quy
	nhap_mang(my_array,n,0);
	printf("Mang vua nhap la: ");
	xuat_mang(my_array,n,0);
	getch();
	break;
	//an phim 2
	case 2:
		
struct SinhVien {
    int MSSV;
    char HotenSV[100];
    float DiemTB;
};

// H�m so s�nh de su dung cho viec sap xep danh s�ch sinh vi�n theo DiemTB
int compareByDiemTB(const void *a, const void *b) {
    return (*(struct SinhVien *)a).DiemTB - (*(struct SinhVien *)b).DiemTB;
}

int main() {
    struct SinhVien *danhSachSinhVien;
    int n;

    // Nhap so luong sinh vi�n
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    // Cap ph�t bo nho cho danh s�ch sinh vi�n
    danhSachSinhVien = (struct SinhVien *)malloc(n * sizeof(struct SinhVien));

    // Nhap th�ng tin sinh vi�n
    for (int i = 0; i < n; ++i) {
        printf("Nhap MSSV cua sinh vien thu %d: ", i + 1);
        scanf("%d", &danhSachSinhVien[i].MSSV);
        printf("Nhap ho ten cua sinh vien thu %d: ", i + 1);
        getchar(); // Loai bo k� tu newline tu buoc truoc
        gets(danhSachSinhVien[i].HotenSV);
        printf("Nhap diem trung binh cua sinh vien thu %d: ", i + 1);
        scanf("%f", &danhSachSinhVien[i].DiemTB);
    }

    // Luu danh s�ch sinh vi�n v�o file
    FILE *outputFile = fopen("D:\\dssinhvien.txt", "w");
    for (int i = 0; i < n; ++i) {
        fprintf(outputFile, "%d,%s,%.2f\n", danhSachSinhVien[i].MSSV, danhSachSinhVien[i].HotenSV, danhSachSinhVien[i].DiemTB);
    }
    fclose(outputFile);

    // Sap xep danh s�ch sinh vi�n theo DiemTB
    qsort(danhSachSinhVien, n, sizeof(struct SinhVien), compareByDiemTB);

    // In danh s�ch sinh vi�n ra m�n h�nh theo thu tu tang dan cua DiemTB
    printf("\nDanh sach sinh vien theo thu tu tang dan cua DiemTB:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d\t%s\t%.2f\n", danhSachSinhVien[i].MSSV, danhSachSinhVien[i].HotenSV, danhSachSinhVien[i].DiemTB);
    }

    // Giai ph�ng bo nho d� cap ph�t
    free(danhSachSinhVien);

    return 0;
}
    getch();
    break;
    //an phim 0
    case 0:
    exit(1);
    default:
    printf("\nKhong co chuc nang nay!");
    printf("\nBam phim bat ky de tiep tuc!");
    getch();
    break;
}
}}
}

