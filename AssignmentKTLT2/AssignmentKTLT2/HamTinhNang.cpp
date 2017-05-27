#include "HamTinhNang.h"
#include<string>

//Contructor
HamTinhNang::HamTinhNang(){
}

//Detructor
HamTinhNang::~HamTinhNang(){
}
#include "HamTinhNang.h"

//Nhóm hàm thao tác thông thường
//*******************************************************************************
//Description:	Tìm sách
//Input:		Chuỗi từ khóa từ người dùng
//Output:		Các sách có chuỗi con là chuỗi từ khóa
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::timSach(string tenNguoiDungNhapVao) {
}
//*******************************************************************************
//Description:	Gửi yêu cầu mượn sách
//Input:		
//Output:		Nếu yêu cầu hợp lệ thì cho mượn, còn không thì thông báo lý do ko
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::guiYeuCauMuonSach_ND() {
}
//*******************************************************************************
//Description:	Xem thông báo
//Input:		Tên user
//Output:		Trả về 3 thông báo mới nhất từ file dữ liệu tenUser.txt
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::xemThongBao_ND(string tenUser) {
}
//*******************************************************************************
//Description:	Xem thông tin người dùng
//Input:		Tên user
//Output:		Trả về thông tin của người dùng trong file tenUser.txt. 8 dòng đầu
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::xemThongTin_ND(string tenUser) {

}
//*******************************************************************************
//Description:	Đổi mật khẩu tài khoản
//Input:		Tên user, mật khẩu cũ, mật khẩu mới
//Output:		Thay đổi mật khẩu của user và lưu file băm vào file accPass.txt
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::doiMatKhau_ND(string tenUser, string matKhauCu, string matKhauMoi) {

}
//*******************************************************************************
//Description:	Chỉnh sửa thông tin người dùng
//Input:		Tên user
//Output:		Có thể Thay đổi các thông tin: Họ tên, CMND, Địa chỉ, Ngày tháng sinh
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
//Nhóm hàm liên quan tới người dùng
//*******************************************************************************
void HamTinhNang::chinhSuaThongTin_ND(string tenUser, string ngaySinh, string CMND, string diaChi) {

}
//*******************************************************************************
//Description:	Xoá tài khoản người dùng khỏi hệ thống (admin)
//Input:		Tên user
//Output:		Xóa thông tin người dùng ở file accPass.txt và file tenUser.txt
//Vấn đề:		(Vậy còn thông tin trong file mượn sách thì sao????)
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::xoaKhoiHeThong_ND(string tenUser) {

}
//*******************************************************************************
//Description:	Thêm tài khoản mới (admin)
//Input:		Tên user muốn thêm
//Output:		Tài khoản tenUser với mk ban đầu mặc định 123456.
//				Dữ liệu lưu trong file accPass.txt và tạo file tenUser.txt
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::themTaiKhoan_ND(string tenUser) {
}
//*******************************************************************************
//Description:	Mở và tạm khóa hoạt động của tài khoản (admin)
//Input:		Tên user cần mở or đóng
//Output:		Đóng hoặc mở tài khoản
//Vấn đề:		=> File accPass.txt cần 1 cột biểu diễn trạng thái của tài khoản!!
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::moVaKhoaTaiKhoan_ND(string tenUser) {
}
//*******************************************************************************
//Description:	Lấy lại mật khẩu
//Input:		Tên user
//Output:		Trả về mật khẩu mặc định
//Vấn đề:		Ai có quyền này??
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::lapLaiMatKhau_ND(string tenUser) {
}
//*******************************************************************************
//Description:	Tìm kiếm tài khoản (admin)
//Input:		Từ khóa từ admin
//Output:		Danh sách các người dùng có chứa từ khóa
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::timKiemTaiKhoan_ND(string tenCanTimKiem) {
}
//*******************************************************************************
//Description:	Chỉnh sửa thông tin sách (thủ thư)
//Input:		Mã số ISBN
//Output:		Cho phép chỉnh sửa tên sách, tác giả, tổng số lượng sách, số sách còn
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
//Nhóm hàm liên quan tới sách
void HamTinhNang::chinhSuaThongTin_S(string maSoISBN) {
}
//*******************************************************************************
//Description:	Xóa sách khỏi hệ thống (thủ thư)
//Input:		Mã số ISBN
//Output:		Xóa thông tin sách khỏi file sach.txt
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::xoaKhoiHeThong_S(string maSoISBN) {
}
//*******************************************************************************
//Description:	Thêm số lượng cho một quyển sách đã tồn tại (thủ thư)
//Input:		Mã số ISBN, số lượng sách thêm vào
//Output:		Tăng tổng số lượng sách lên số lượng sách thêm vào
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::themVaoSachDaCo_S(string maSoISBN, int soLuongThemVao) {
}
//*******************************************************************************
//Description:	Thêm một quyển sách mới (thủ thư)
//Input:		Mã số ISBN, tên sách, tên tác giả, tổng số lượng, thời gian thêm, số sách còn=số lượng bd
//Output:		Thêm vào cuối file book.txt thông tin về quyển sách mới
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::themVaoSachChuaCo_S(string maSoISBN, string tenSach, string tenTacGia, string thoiGianCapNhatGanNhat) {
}
//*******************************************************************************
//Description:	Tìm kiếm sách
//Input:		Từ khóa tìm kiếm
//Output:		Danh sách sách có chứa từ khóa
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::timKiemSach_S(string tenNguoiDungNhap) {
}
//*******************************************************************************
//Description:	Ghi nhận trả sách
//Input:		Tên user, mã số ISBN
//Output:		Kiểm tra người đó có mượn sách không, nếu có xác nhận trả
//Vấn đề:		Phần này do tổ chức dữ liệu nữa nên có thể sẽ thay đổi
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::ghiNhanTraSach_S(string tenUser, string maSoISBN) {
}
//*******************************************************************************
//Description:	Xác nhận phạt vì quá hạn trả sách
//Input:		Tên user
//Output:		Phần này chưa nghĩ ra
//Vấn đề:		Vì đây là lỗi ít gặp, thiết nghĩ nên tạo một file
//				danhSachDen.txt lưu những người trả muộn.
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::phatViQuaHanMuon_S(string tenUser) {
}
//*******************************************************************************
//Description:	Xử lý sách thất lạc
//Input:		Tên user làm thât lạc, mã số ISBN sách thất lạc
//Output:		Giảm tổng số lượng sách xuống 1 đơn vị, lưu người dùng vào danhSachDen.txt
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
void HamTinhNang::sachThatLac_S(string tenUser, string maSoISBNSachBiLac) {
}
//*******************************************************************************
//Description:	Kiểm tra user nhập vào có hợp lệ ko. Ko chứa kí tự lạ, chưa tồn tại
//Input:		Tên user (admin nhập)
//Output:		Trả về true nếu hợp lệ false nếu không hợp lệ
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
//hàm liên quan đến việc kiểm tra nhập dữ liệu
//*******************************************************************************
bool HamTinhNang::kiemTraUser(string userNguoiDungNhap) {
}
//*******************************************************************************
//Description:	Kiểm tra passWord có hợp lệ không, có kí tự lạ hay vượt quá dãy quy định ko
//Input:		PassWord người dùng nhập
//Output:		Trả về true nếu hợp lệ, trả về false nếu ko.
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
bool HamTinhNang::kiemTraPasW(string passNguoiDungNhap) {
}
//*******************************************************************************
//Description:	Băm mật khẩu của người dùng để lưu vào file accPass.txt (trường hợp đổi mật khẩu)
//Input:		Tên user, pass
//Output:		Nối chuỗi user+pass , băm ra. Trả về giá trị băm đó,
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
string HamTinhNang::bamMatKhau(string userNguoiDungNhap, string passNguoiDungNhap) {
}
//*******************************************************************************
//Description:	Kiếm tra tính hợp lệ của CMND
//Input:		CMND nhập vào
//Output:		Nếu tồn tại khác số thì trả về false, ngược lại trả về true.
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
bool HamTinhNang::kiemTraCMND(string CMNDNhapVao) {
}
//*******************************************************************************
//Description:	Tạo thông báo mới
//Input:		Tên thông báo, tên user
//Output:		Thêm 1 dòng thông báo vào cuối file tenUser.txt
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
//Các hàm liên quan hỗ trợ người dùng
//*******************************************************************************
void HamTinhNang::taoThongBaoMoi(string tenThongBao, string tenUser) {
}
//*******************************************************************************
//Description:	Kiểm tra hai chuổi tương đương, dùng cho thay đổi mật khẩu
//Input:		Hai chuỗi cần so sánh
//Output:		Thêm 1 dòng thông báo vào cuối file tenUser.txt
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
bool HamTinhNang::kiemHaiChuoiTuongDong(string chuoiNhap_1, string chuoiNhap_2) {
}
//*******************************************************************************
//Description:	Kiểm tra chênh lệch thời gian (dùng cho khi trả sách)
//Input:		Hai mốc thời gian theo định dạng dd/tt/nnnn
//Output:		Trả về số ngày chênh lệch
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
int HamTinhNang::kiemTraChenhLechThoiGian(string thoiGian_1, string thoiGian_2) {
}
//*******************************************************************************
//Description:	Kiểm tra hợp lệ của thời gian nhập vào
//Input:		Mốc thời gian theo định dạng dd/tt/nnnn
//Output:		Trả về true nếu hợp lệ, false nếu không hợp lệ
/////////////////////////////////////////////////////////////////////////////////
//Lần sửa đổi cuối
//Người sửa: 
//Lý do:
//Tính năng thay thế:
//Thời gian:
bool kiemTraThoiGianHopLe(string thoiGian) {
}
//*******************************************************************************


