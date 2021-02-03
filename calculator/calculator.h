#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QString>

class Calculator {

public:
    Calculator(int n);
    ~Calculator();


private:
    QString mutable err_msg;
    bool mutable err;
    int n, *arr[2];

    bool init_arr();
    bool init_arr_reciprocal ();
    bool init_arr_prim_roots ();

public:
    bool change_zn(int);
    bool is_prim_root(int) const;
    QString get_err_msg() const;
    bool get_err() const;

    int add(int, int) const;
    int sub(int, int) const;
    int mltp(int, int) const;
    int div(int, int) const;
    int power(int, int) const;
    int dlog(int, int) const;


};

#endif // CALCULATOR_H


