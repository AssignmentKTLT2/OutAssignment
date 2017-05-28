//////////////////////////////////////////////////
//Tên		: Các hàm tính năng trong chương trình
//Dự án		: Bài tập lớn kĩ thuật lập trình
//Mục đích	: Phân nhóm các hàm đối với các đối tượng người dùng khác nhau
/////////////////////////////////////////////////

#pragma once
#include<string>


/*******************************************/
//////////////////////////////////////////////////
//Tên		: Class NguoiDungChuaDangNhap
//Dự án		: Bài tập lớn kĩ thuật lập trình
//Mục đích	: Liệt kê các tính năng dành cho người dùng chưa đăng nhập
/////////////////////////////////////////////////
class NguoiDungChuaDangNhap: public HeThong
{
public:
	NguoiDungChuaDangNhap();
	~NguoiDungChuaDangNhap();
public:
	void dangKi(std::string, std::string);
	void dangNhap(std::string, std::string);
	void layLaiMatKhau(std::string, std::string);
private:

};

/*******************************************/


/*******************************************/
//////////////////////////////////////////////////
//Tên		: Class TinhNangChung
//Dự án		: Bài tập lớn kĩ thuật lập trình
//Mục đích	: Liệt kê các tính năng tất cả người dùng đăng nhập có thể dùng
/////////////////////////////////////////////////
class TinhNangChung : public HeThong
{
public:
	TinhNangChung();
	~TinhNangChung();
public:
	void xemThongTinTaiKhoan();
	void xemThongBao();
	void suaThongTinTaiKhoan(std::string,std::string, std::string,std::string,std::string);
	void doiMatKhau(std::string, std::string);
	void dangXuat();
private:

};
/*******************************************/


/*******************************************/
//////////////////////////////////////////////////
//Tên		: Class NguoiDungThongThuong
//Dự án		: Bài tập lớn kĩ thuật lập trình
//Mục đích	: Liệt kê các tính năng mà người dùng thông thường có thể sử dụng
/////////////////////////////////////////////////

class NguoiDungThongThuong: public TinhNangChung, public HeThong
{
public:
	NguoiDungThongThuong();
	~NguoiDungThongThuong();
public:
private:
	void yeuCauMuonSach(std::string, std::string);
	void yeuCauTraSach(std::string, std::string);
	void xoaTaiKhoan(std::string, std::string);
};
/*******************************************/


/*******************************************/
//////////////////////////////////////////////////
//Tên		: Class Admin
//Dự án		: Bài tập lớn kĩ thuật lập trình
//Mục đích	: Liệt kê các tính năng quản trị hệ thống có thể dùng
/////////////////////////////////////////////////
class Admin: public TinhNangChung, public HeThong
{
public:
	Admin();
	~Admin();
public:
private:
	void capQuyenTaiKhoan(std::string, std::string);
	void timKiemTaiKhoan(std::string);
	void moKhoaTaiKhoan(std::string, std::string);
	void xemDanhSachTaiKhoan();
};
/*******************************************/


/*******************************************/
//////////////////////////////////////////////////
//Tên		: Class ThuThu
//Dự án		: Bài tập lớn kĩ thuật lập trình
//Mục đích	: Liệt kê các tính năng mà thủ thư có thể dùng
/////////////////////////////////////////////////
class ThuThu: public TinhNangChung, public HeThong
{
public:
	ThuThu();
	~ThuThu();
public:
private:
	void chinhSuaThongTinSach(std::string, std::string,
		std::string, int, int);
	void themSachMoi(std::string, std::string,
		std::string, int);
	void themSoLuongSach(std::string, int);
	void xoaSach(std::string);
	void xemDanhSachDen();
	void xemMuonSach();
};
/*******************************************/


/*******************************************/
//////////////////////////////////////////////////
//Tên		: Class HeThong
//Dự án		: Bài tập lớn kĩ thuật lập trình
//Mục đích	: Liệt kê các tính năng mà liên quan tới hệ thống
/////////////////////////////////////////////////
class HeThong
{
public:
	HeThong();
	~HeThong();
public:
	void timKiemSach(std::string);
	void taoThongBao(std::string, std::string);
	bool kiemTraHaiMatKhau(std::string, std::string); //Khi xóa tài khoản
	bool kiemTraMatKhauDangNhap(std::string, std::string);
	bool kiemTraDuLieuNhap(std::string);
	std::string layThoiGianHeThong();
	std::string congThoiGian(std::string, std::string);
	bool kiemTraThoiGian(std::string);
	std::string nhapMatKhau();
	std::string bamDuLieu(std::string);
	void giamSoSachXuongMot(std::string);
	void thayDoiSoLuongSachCon(std::string, int);
	bool kiemTraSoLuongSachCon(std::string);
	bool kiemTraUser(std::string);
	bool kiemTraISBN(std::string);
	void themVaoDanhSachDen(std::string, std::string);
};
/*******************************************/