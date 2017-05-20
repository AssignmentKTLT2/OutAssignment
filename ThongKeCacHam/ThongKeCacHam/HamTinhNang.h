#pragma once
#include<string>
using namespace std;

class HamTinhNang
{
public:
	//Nhóm hàm thao tác thông thường
	void timSach(string tenNguoiDungNhapVao);
	void guiYeuCauMuonSach_ND();
	void xemThongBao_ND(string tenUser);
	void xemThongTin_ND(string tenUser);
	void doiMatKhau_ND(string tenUser,string matKhauCu, string matKhauMoi);
	//Nhóm hàm liên quan tới người dùng
	void chinhSuaThongTin_ND(string tenUser);
	void xoaKhoiHeThong_ND(string tenUser);
	void themTaiKhoan_ND(string tenUser);
	void moVaKhoaTaiKhoan_ND(string tenUser);
	void lapLaiMatKhau_ND(string tenUser);
	void timKiemTaiKhoan_ND(string tenCanTimKiem);
	//Nhóm hàm liên quan tới sách
	void chinhSuaThongTin_S(string maSoISBN);
	void xoaKhoiHeThong_S(string maSoISBN);
	void themVaoSachDaCo_S(string maSoISBN, int soLuongThemVao);
	void themVaoSachChuaCo_S(string maSoISBN,string tenSach, string tenTacGia,string thoiGianCapNhatGanNhat, int namThem);
	void timKiemSach_S(string tenNguoiDungNhap);
	void ghiNhanTraSach_S(string tenUser, string maSoISBN);
	void phatViQuaHanMuon_S(string tenUser);
	void sachThatLac_S(string tenUser, string maSoISBNSachBiLac);
	//hàm liên quan đến việc kiểm tra nhập dữ liệu
	bool kiemTraUser(string userNguoiDungNhap); //Kiểm tra tính hợp lệ
	bool kiemTraPasW(string passNguoiDungNhap);	//Kiểm tra tính hợp lệ
	string bamMatKhau(string userNguoiDungNhap, string passNguoiDungNhap);
	bool kiemTraCMND(string CMNDNhapVao);
	//Các hàm liên quan hỗ trợ người dùng
	void taoThongBaoMoi(string tenThongBao, string tenUser);
	bool kiemHaiChuoiTuongDong(string chuoiNhap_1, string chuoiNhap_2); //Dùng cho khi đổi mk
	int kiemTraChenhLechThoiGian(string thoiGian_1, string thoiGian_2);
	bool kiemTraThoiGianHopLe(string thoiGian);
};

