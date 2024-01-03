#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
char key;
int n;


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

// Hàm so sánh de su dung cho viec sap xep danh sách sinh viên theo DiemTB
int compareByDiemTB(const void *a, const void *b) {
    return (*(struct SinhVien *)a).DiemTB - (*(struct SinhVien *)b).DiemTB;
}

int main() {
    struct SinhVien *danhSachSinhVien;
    int n;

    // Nhap so luong sinh viên
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    // Cap phát bo nho cho danh sách sinh viên
    danhSachSinhVien = (struct SinhVien *)malloc(n * sizeof(struct SinhVien));

    // Nhap thông tin sinh viên
    for (int i = 0; i < n; ++i) {
        printf("Nhap MSSV cua sinh vien thu %d: ", i + 1);
        scanf("%d", &danhSachSinhVien[i].MSSV);
        printf("Nhap ho ten cua sinh vien thu %d: ", i + 1);
        getchar(); // Loai bo kí tu newline tu buoc truoc
        gets(danhSachSinhVien[i].HotenSV);
        printf("Nhap diem trung binh cua sinh vien thu %d: ", i + 1);
        scanf("%f", &danhSachSinhVien[i].DiemTB);
    }

    // Luu danh sách sinh viên vào file
    FILE *outputFile = fopen("D:\\dssinhvien.txt", "w");
    for (int i = 0; i < n; ++i) {
        fprintf(outputFile, "%d,%s,%.2f\n", danhSachSinhVien[i].MSSV, danhSachSinhVien[i].HotenSV, danhSachSinhVien[i].DiemTB);
    }
    fclose(outputFile);

    // Sap xep danh sách sinh viên theo DiemTB
    qsort(danhSachSinhVien, n, sizeof(struct SinhVien), compareByDiemTB);

    // In danh sách sinh viên ra màn hình theo thu tu tang dan cua DiemTB
    printf("\nDanh sach sinh vien theo thu tu tang dan cua DiemTB:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d\t%s\t%.2f\n", danhSachSinhVien[i].MSSV, danhSachSinhVien[i].HotenSV, danhSachSinhVien[i].DiemTB);
    }

    // Giai phóng bo nho dã cap phát
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

