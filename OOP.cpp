#include <iostream>
#include <string>
using namespace std;

//tao class hoac struct ngay thang nam sinh, nen de la struct cho gon va tien, phan nay Duyen lam
struct dob
{
};

//tao kieu du lieu liet ke ten la gioi tinh (gender)
enum gender
{
    Male,
    Female,
    Bisexual,
    Dobie
}; // Nam va Nu

//tao kieu du lieu liet ke ten la tinh trang (condition)
enum conditions
{
    Good,
    Bad
};

// tao class nhan khau
class Nhankhau
{
protected:
    int sothutu, MSCD;
    string ten, diachi;
    gender sex;

public:
    // ham nhap du lieu
    void nhap()
    {
        // dien code vao day
    }

    // ham in du lieu
    void in()
    {
    }
};

class Tieuhoc : public Nhankhau
{
protected:
    dob ngaysinh;

public:
    void nhap()
    {
        Nhankhau::nhap();
        // dien tiep code vao day
    }

    void in()
    {
        Nhankhau::in();
        // viet tiep code vao day
    }
};

class Truongthanh : public Nhankhau
{
protected:
    dob ngaysinh;
    conditions suckhoe;

public:
    void nhap()
    {
        Nhankhau::nhap();
        // dien tiep code vao day
    }

    void in()
    {
        Nhankhau::in();
        // viet tiep code vao day
    }

    // ham thong ke du lieu
    int thongke()
    {

    }
};
