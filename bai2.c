/******************************************************************************
 * Họ và tên: [Tiêu Anh Minh]
 * MSSV:      [PS48358]
 * Lớp:       [CS21301]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main(){
     int dai,rong ;
    int chuvi, dientich;
    printf ("nhap dai: ");
    scanf ("%d", &dai);
    printf ("nhap rong: ");
    scanf ("%d", &rong);
    chuvi = (dai + rong)* 2 ;
    dientich = dai * rong ;
    printf ("Diện tích là: %d\n", dientich);
    printf ("Chu vi là: %d\n", chuvi);
    return(0);
    // Khai báo biến

    // Nhập dữ liệu


    // Xử lý, tính toán

    // Hiển thị kết quả


}