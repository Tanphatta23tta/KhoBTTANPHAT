#include <stdio.h>
#include <stdlib.h>
int n;
  struct SinhVien *danhSachSinhVien;
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
