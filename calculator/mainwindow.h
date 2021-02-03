#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "calculator.h"

namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Calculator calc;
    int n, last_n, calc_val;

    bool div_op, mltp_op, add_op, sub_op, pow_op, dlog_op;
    bool check_change();

private slots:
    int num_press();
    int math_btn_press();
    int eq_btn_press();
    int del_btn_press();
    int ch_sign_btn();
    int next_n();
    int prev_n();
    int clear_display();

};




#endif // MAINWINDOW_H
