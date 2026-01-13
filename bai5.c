/******************************************************************************
 * Họ và tên: [Tiêu Anh Minh]
 * MSSV:      [PS48358]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI LÀM THÊM
// BÀI 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TÍCH VÀ THƯƠNG CỦA 2 SỐ

#include <stdio.h>

int main(){
    int so1, so2;
    int tich,thuong ;
    printf("Chương trình tính tích và thương của 2 số\n");
    printf("nhap so can tinh 1: ");
    scanf("%d", &so1);
    printf("nhap so can tinh 2: ");
    scanf("%d", &so2);
    tich = so1*so2;
    thuong=so1/so2;
    printf ("Tích là: %d\n", tich);
    printf ("Thương là: %d\n", thuong);

    return 0;
} 