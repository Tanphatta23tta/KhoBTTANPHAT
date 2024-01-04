#include <stdio.h>
#include <stdlib.h>
int n;
  struct SinhVien *danhSachSinhVien;
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
