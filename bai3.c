/******************************************************************************
 * Họ và tên: [Tiêu Anh Minh]
 * MSSV:      [PS48358]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main(){
    // Khai báo biến
     int bankinh ;
    int chuvi, dientich;
    printf ("nhap ban kinh: ");
    scanf ("%d", &bankinh);
    chuvi = 2 * bankinh * 3.14;
    dientich = 3.14 * bankinh * bankinh ;
    printf ("Diện tích là: %d\n", dientich);
    printf ("Chu vi là: %d\n", chuvi);
    return(0);
    // Nhập dữ liệu


    // Xử lý, tính toán

    // Hiển thị kết quả


}