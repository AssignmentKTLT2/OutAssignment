//////////////////////////////////////////////////
//Tên		: Các hàm tính năng trong chương trình
//Dự án		: Bài tập lớn kĩ thuật lập trình
//Mục đích	: Phân nhóm các hàm đối với các đối tượng người dùng khác nhau
/////////////////////////////////////////////////

#include "HamTinhNang.h"
#include<iostream>


/*******************************************/
//////////////////////////////////////////////////
//Tên		: Class NguoiDungChuaDangNhap
//Dự án		: Bài tập lớn kĩ thuật lập trình
//Mục đích	: Liệt kê các tính năng dành cho người dùng chưa đăng nhập
/////////////////////////////////////////////////

NguoiDungChuaDangNhap::NguoiDungChuaDangNhap(){
}

NguoiDungChuaDangNhap::~NguoiDungChuaDangNhap(){
}

//////////////////////////////////////////////////
//Mô tả			: Đăng kí tài khoản mới
//Dữ liệu vào	: Tên người dùng và mật khẩu
//Kết quả ra	: Tạo tài khoản mới nếu tài khoản hợp lệ,
//					trả về thông báo nếu không hợp lệ
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void NguoiDungChuaDangNhap::dangKi(std::string tenUser, std::string matKhau) {
}

//////////////////////////////////////////////////
//Mô tả			: Đăng nhập vào tài khoản đã tạo
//Dữ liệu vào	: Tên người dùng và mật khẩu
//Kết quả ra	: Đăng nhập vào tài khoản hợp lệ,
//					trả về thông báo nhập sai nếu không hợp lệ
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void NguoiDungChuaDangNhap::dangNhap(std::string tenUser, std::string matKhau) {
}

//////////////////////////////////////////////////
//Mô tả			: Lấy lại mật khẩu của tài khoản đã tạo
//Dữ liệu vào	: Tên người dùng và mật khẩu dự phòng
//Kết quả ra	: Đăng nhập vào tài khoản hợp lệ,
//				  trả về thông báo nhập sai nếu không hợp lệ
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void NguoiDungChuaDangNhap::layLaiMatKhau(std::string tenUser, std::string matKhauDuPhong) {
}

/*******************************************/


/*******************************************/
//////////////////////////////////////////////////
//Tên		: Class TinhNangChung
//Dự án		: Bài tập lớn kĩ thuật lập trình
//Mục đích	: Liệt kê các tính năng tất cả người dùng đăng nhập có thể dùng
/////////////////////////////////////////////////

TinhNangChung::TinhNangChung(){
}

TinhNangChung::~TinhNangChung(){
}

//////////////////////////////////////////////////
//Mô tả			: Xem thông tin tài khoản đang đăng nhập
//Dữ liệu vào	: 
//Kết quả ra	: Trả về các thông tin trong file user.txt ngoại trừ các thông báo và mật
//				  khẩu dự phòng và các sách đã mượn được truy xuất từ muonSach.txt.
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void TinhNangChung::xemThongTinTaiKhoan() {
}

//////////////////////////////////////////////////
//Mô tả			: Xem thông báo của tài khoản đang đăng nhập
//Dữ liệu vào	: 
//Kết quả ra	: Trả về 3 thông báo mới nhất của file user.txt
//				   (3 thông báo được tạo sau cùng)
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void TinhNangChung::xemThongBao() {
}

//////////////////////////////////////////////////
//Mô tả			: Sửa thông tin của tài khoản đang đăng nhập
//Dữ liệu vào	: Các thông tin: Mật khẩu dự phòng, Họ và tên, cmnd, ngày sinh, địa chỉ
//Kết quả ra	: Thay đổi các giá trị đó trong file user.txt
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void TinhNangChung::suaThongTinTaiKhoan(std::string matKhauDuPhong,std::string hoVaTen, std::string CMND,
	std::string ngaySinh, std::string diaChi) {
}

//////////////////////////////////////////////////
//Mô tả			: Đổi mật của tài khoản đang đăng nhập
//Dữ liệu vào	: Mật khẩu ban đầu, mật khẩu mới
//Kết quả ra	: Trả về thông báo không hợp lệ nếu mật khẩu ban đầu không trùng
//				  hay hai mật khẩu mới không trùng. Thay đổi mật khẩu trong file
//				  accPass.txt nếu hợp lệ.
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void TinhNangChung::doiMatKhau(std::string matKhauTruoc, std::string matKhauSau) {
}

//////////////////////////////////////////////////
//Mô tả			: Đăng xuất khỏi tài khoản hiện tại
//Dữ liệu vào	: 
//Kết quả ra	: Thoát ra giao diện dành cho người dùng chưa đăng nhập
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void TinhNangChung::dangXuat() {
}
/*******************************************/


/*******************************************/
//////////////////////////////////////////////////
//Tên		: Class NguoiDungThongThuong
//Dự án		: Bài tập lớn kĩ thuật lập trình
//Mục đích	: Liệt kê các tính năng mà người dùng thông thường có thể sử dụng
/////////////////////////////////////////////////

NguoiDungThongThuong::NguoiDungThongThuong(){
}

NguoiDungThongThuong::~NguoiDungThongThuong(){
}

//////////////////////////////////////////////////
//Mô tả			: Yêu cầu mượn sách
//Dữ liệu vào	: Tên user và ISBN của sách muốn mượn
//Kết quả ra	: Trả về thông báo lỗi khi ISBN sai. Trả về thông báo quá số lần nếu quá 
//				số lần, hoặc số sách còn lại <1
//				  Nếu hợp lệ thì: Thêm tên vào file muonSach.txt với tình trạng mặc định là 0
//				  Và giảm số lượng sách còn trong file book.txt xuống 1
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void NguoiDungThongThuong::yeuCauMuonSach(std::string tenUser, std::string ISBN) {
}

//////////////////////////////////////////////////
//Mô tả			: Yêu cầu trả sách
//Dữ liệu vào	: Tên user và ISBN của sách muốn trả
//Kết quả ra	: Trả về thông báo lỗi khi ISBN sai
//				  thay đổi giá trị trạng thái thành 1 trong muonSach.txt
//				  Và tăng số lượng sách còn trong file book.txt lên 1
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void NguoiDungThongThuong::yeuCauTraSach(std::string tenUser, std::string ISBN) {
}

//////////////////////////////////////////////////
//Mô tả			: Xóa tài khoản
//Dữ liệu vào	: Tên user sẽ xóa
//Kết quả ra	: Xóa file user.txt và thay đổi tình trạng trong accPass.txt thành giá trị 3
//				  nếu mật khẩu nhập vào hợp lệ. Thông báo sai mật khẩu nếu không hợp lệ
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void NguoiDungThongThuong::xoaTaiKhoan(std::string tenUser, std::string matKhau) {
}
/*******************************************/


/*******************************************/
//////////////////////////////////////////////////
//Tên		: Class Admin
//Dự án		: Bài tập lớn kĩ thuật lập trình
//Mục đích	: Liệt kê các tính năng quản trị hệ thống có thể dùng
/////////////////////////////////////////////////

Admin::Admin(){
}

Admin::~Admin(){
}

//////////////////////////////////////////////////
//Mô tả			: Cấp quyền cho tài khoản
//Dữ liệu vào	: Tên user và quyền hạn sẽ cấp. 1 nếu là thủ thư.
//				  Hiện tại chỉ có thể cấp quyền này
//Kết quả ra	: Thông báo lỗi nếu tên user sai
//				  Thay cấp quyền của user trong file accPass.txt			  
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void Admin::capQuyenTaiKhoan(std::string tenUser, std::string quyenSeCap) {
}

//////////////////////////////////////////////////
//Mô tả			: Tìm kiếm thông tin tài khoản từ accPass.txt
//Dữ liệu vào	: Từ khóa có thể trong tên tài khoản
//Kết quả ra	: Hiện danh sách các user có tên tài khoản chứa từ khóa.
//				  KHÔNG ĐƯỢC HIỆN MẬT KHẨU	  
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void Admin::timKiemTaiKhoan(std::string tuKhoa) {
}

//////////////////////////////////////////////////
//Mô tả			: Thay đổi tình trạng của tài khoản trong accPass.txt
//Dữ liệu vào	: Tên user và tình trạng muốn thay.
//				  0: Nếu để mở. 1: nếu để khóa
//Kết quả ra	: Hiện danh sách các user có tên tài khoản chứa từ khóa.
//				  KHÔNG ĐƯỢC HIỆN MẬT KHẨU	  
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void Admin::moKhoaTaiKhoan(std::string tenUser, std::string loaiTinhTrang) {
}

//////////////////////////////////////////////////
//Mô tả			: Hiển thị toàn bộ thông tin tài khoản từ accPass.txt
//Dữ liệu vào	: 
//Kết quả ra	: Hiện danh sách các user trong file.
//				  KHÔNG ĐƯỢC HIỆN MẬT KHẨU	  
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void Admin::xemDanhSachTaiKhoan() {
}
/*******************************************/


/*******************************************/
//////////////////////////////////////////////////
//Tên		: Class ThuThu
//Dự án		: Bài tập lớn kĩ thuật lập trình
//Mục đích	: Liệt kê các tính năng mà thủ thư có thể dùng
/////////////////////////////////////////////////

ThuThu::ThuThu(){
}

ThuThu::~ThuThu(){
}

//////////////////////////////////////////////////
//Mô tả			: Chỉnh sửa thông tin sách
//Dữ liệu vào	: ISBN, tên tác phẩm, tên tác giả, tổng số lượng, số lượng còn
//Kết quả ra	: Chỉnh sửa các thông tin trong file book.txt  
//				  Cập nhật thời gian cập nhật
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void ThuThu::chinhSuaThongTinSach(std::string maISBN, std::string tenTacPham,
	std::string tenTacGia, int tongSoLuong, int soLuongCon) {
}

//////////////////////////////////////////////////
//Mô tả			: Thêm sách mới
//Dữ liệu vào	: Mã ISBN, tên tác phẩm, tên tác giả, tổng số lượng
//Kết quả ra	: Thêm sách vào cuối file book.txt. Với thời gian cập nhật lấy
//				từ hệ thống và số sách còn mặc định bằng tổng số lượng
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void ThuThu::themSachMoi(std::string maISBN, std::string tenTacPham,
	std::string tenTacGia, int tongSoLuong) {
}

//////////////////////////////////////////////////
//Mô tả			: Thêm số lượng cho sách đã có
//Dữ liệu vào	: ISBN, số lượng tăng
//Kết quả ra	: Báo lỗi nếu ISBN không hợp lệ. Thêm số lượng 
//				sách lên "số lượng tăng" trong file book.txt
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void ThuThu::themSoLuongSach(std::string maISBN, int soLuongCanThem) {
}

//////////////////////////////////////////////////
//Mô tả			: Xóa thông tin của sách 
//Dữ liệu vào	: ISBN
//Kết quả ra	: Báo lỗi nếu ISBN không hợp lệ. Xóa dữ liệu
//				của sách trong file book.txt
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void ThuThu::xoaSach(std::string maISBN) {
}

//////////////////////////////////////////////////
//Mô tả			: Hiển thị toàn bộ thông tin trong danhSachDen.txt
//Dữ liệu vào	: 
//Kết quả ra	: Hiện toàn bộ danh sách trong file
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void ThuThu::xemDanhSachDen() {
}

//////////////////////////////////////////////////
//Mô tả			: Hiển thị toàn bộ thông tin trong muonSach.txt
//Dữ liệu vào	: 
//Kết quả ra	: Hiện toàn bộ danh sách trong file
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void ThuThu::xemMuonSach() {
}
/*******************************************/


/*******************************************/
//////////////////////////////////////////////////
//Tên		: Class HeThong
//Dự án		: Bài tập lớn kĩ thuật lập trình
//Mục đích	: Liệt kê các tính năng mà liên quan tới hệ thống
///////////////////////////////////////////////// 

HeThong::HeThong(){
}

HeThong::~HeThong(){
}

//////////////////////////////////////////////////
//Mô tả			: Tìm kiếm thông tin sách có trong thư viện
//Dữ liệu vào	: Từ khóa
//Kết quả ra	: Danh sách những quyển sách có từ khóa
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void HeThong::timKiemSach(std::string tuKhoa) {
}

//////////////////////////////////////////////////
//Mô tả			: Tạo thông báo
//Dữ liệu vào	: Tên user nhận và thông báo
//Kết quả ra	: Tạo thông báo mới trong file user.txt
//					thông báo mới là thông báo tạo cuối cùng
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void HeThong::taoThongBao(std::string tenUserNhan, std::string noiDungThongBao) {
}

//////////////////////////////////////////////////
//Mô tả			: Kiểm tra hai mật khẩu có trùng nhau không
//Dữ liệu vào	: Hai mật khẩu
//Kết quả ra	: Trả về true nếu trùng và ngược lại
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
bool HeThong::kiemTraHaiMatKhau(std::string matKhau_1, std::string mauKhau_2) {
}

//////////////////////////////////////////////////
//Mô tả			: Kiểm tra mật khẩu đăng nhập
//Dữ liệu vào	: Tên user và mật khẩu
//Kết quả ra	: Trả về true nếu trùng và ngược lại
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
bool HeThong::kiemTraMatKhauDangNhap(std::string tenUser, std::string matKhauNhap) {
}

//////////////////////////////////////////////////
//Mô tả			: Kiểm tra dữ liệu nhập có hợp lệ không. Độ dài, khoảng trắng
//Dữ liệu vào	: Dữ liệu là mật khẩu or tên user
//Kết quả ra	: Trả về true nếu trùng và ngược lại
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
bool HeThong::kiemTraDuLieuNhap(std::string duLieuCanKiemTra) {
}

//////////////////////////////////////////////////
//Mô tả			: Lấy thời gian hiện tại của hệ thống
//Dữ liệu vào	: 
//Kết quả ra	: Trả về giá trị thời gian với định dạng dd/mm/yyyy
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
std::string HeThong::layThoiGianHeThong() {
}

//////////////////////////////////////////////////
//Mô tả			: Cộng thêm vào thời gian trước n ngày
//Dữ liệu vào	: Thời gian trước và số ngày cộng thêm
//Kết quả ra	: Trả về giá trị thời gian mới với định dạng dd/mm/yyyy
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
std::string HeThong::congThoiGian(std::string thoiGianTruoc, std::string soNgayCongThem) {
}

//////////////////////////////////////////////////
//Mô tả			: Kiểm tra tính hợp lệ của thời gian
//Dữ liệu vào	: 
//Kết quả ra	: Trả về true nếu hợp lệ và ngược lại
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
bool HeThong::kiemTraThoiGian(std::string thoiGian) {
}

//////////////////////////////////////////////////
//Mô tả			: Dùng khi nhập mật khẩu, tạo dấu * che mật khẩu
//Dữ liệu vào	: 
//Kết quả ra	: Trả về mật khẩu vừa nhập
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
std::string HeThong::nhapMatKhau() {
}

//////////////////////////////////////////////////
//Mô tả			: Băm dữ liệu, chỉ áp dụng với mật khẩu
//Dữ liệu vào	: Tên chuỗi mật khẩu cần băm
//Kết quả ra	: Trả về giá trị đã băm
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
std::string HeThong::bamDuLieu(std::string chuoiCanBam) {
}

//////////////////////////////////////////////////
//Mô tả			: Tăng or giảm số lượng sách còn xuống 1 giá trị
//					Dùng khi mượn, trả sách
//Dữ liệu vào	: ISBN và giá trị thay đổi.
//					Là 0 nếu là tăng lên, 1 nếu giảm xuống
//Kết quả ra	: Trả về giá trị đã băm
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void HeThong::thayDoiSoLuongSachCon(std::string maISBN, int giaTriThayDoi) {
}


//////////////////////////////////////////////////
//Mô tả			: Kiểm tra số lượng sách còn
//Dữ liệu vào	: ISBN của sách
//Kết quả ra	: Trả về về true nếu số lượng còn >0 và ngược lại
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
bool HeThong::kiemTraSoLuongSachCon(std::string maISBN) {
}


//////////////////////////////////////////////////
//Mô tả			: Kiểm tra tên user nhập vào có hợp lệ hay không. So sánh với accPass.txt
//					Hợp lệ tức là có trong danh sách của file accPass.txt
//Dữ liệu vào	: Tên user
//Kết quả ra	: True nếu hợp lệ và ngược lại.
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
bool HeThong::kiemTraUser(std::string tenUser) {
}

//////////////////////////////////////////////////
//Mô tả			: Kiểm tra tên mã ISBN nhập vào có hợp lệ hay không. So sánh với book.txt
//					Hợp lệ tức là có trong danh sách của file book.txt
//Dữ liệu vào	: Mã ISBN
//Kết quả ra	: True nếu hợp lệ và ngược lại.
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
bool HeThong::kiemTraISBN(std::string maISBN) {
}

//////////////////////////////////////////////////
//Mô tả			: Thêm user vào danh sách đen
//Dữ liệu vào	: Tên user và loại vi phạm
//				Loại vi phạm là 0 nếu trả trễ. 1 nếu mất sách
//Kết quả ra	: Thêm vào cuối file danhSachDen.txt
/////////////////////////////////////////////////
//Lần sửa đổi cuối
//Thời gian			:
//Người sửa			:	
//Lý do				:
//////////////////////////////////////////////////
void HeThong::themVaoDanhSachDen(std::string tenUser, std::string loaiViPham) {
}
/*******************************************/
