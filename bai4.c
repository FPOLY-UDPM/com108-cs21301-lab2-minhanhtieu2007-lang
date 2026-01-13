/******************************************************************************
 * Họ và tên: [Tiêu Anh Minh]
 * MSSV:      [PS48358]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa 
// Output: Hiển thị ra màn hình điểm trung bình  
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>

int main(){
         int toan,li,hoa;
    int trungbinh;
    printf ("nhap diem toan: ");
    scanf ("%d", &toan);
    printf ("nhap diem li: ");
    scanf ("%d", &li);
        printf ("nhap diem hoa: ");
    scanf ("%d", &hoa);
    trungbinh = (toan*3 + li * 2 + hoa)/ 6 ;
    printf ("diem trung binh la: %d\n", trungbinh);
    return(0);
    // Khai báo biến

    // Nhập dữ liệu


    // Xử lý, tính toán

    // Hiển thị kết quả


}