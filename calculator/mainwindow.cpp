#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "comm_funcs.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      calc(2)
{
    ui->setupUi(this);
    n = last_n = 2;
    calc_val = 0;
    div_op = mltp_op = add_op = sub_op = pow_op = dlog_op = false;

    ui->display->setText(QString::number(0));
    QPushButton *numBtns[10];
    for (int i=0; i<10; i++) {
        QString btnName = "btn" + QString::number(i);
        numBtns[i] = MainWindow::findChild<QPushButton *>(btnName);
        connect(numBtns[i], SIGNAL(released()), this, SLOT(num_press()));
    }

    connect(ui->btn_plus, SIGNAL(released()), this, SLOT(math_btn_press()));
    connect(ui->btn_minus, SIGNAL(released()), this, SLOT(math_btn_press()));
    connect(ui->btn_mltp, SIGNAL(released()), this, SLOT(math_btn_press()));
    connect(ui->btn_div, SIGNAL(released()), this, SLOT(math_btn_press()));
    connect(ui->btn_dlog, SIGNAL(released()), this, SLOT(math_btn_press()));
    connect(ui->btn_power, SIGNAL(released()), this, SLOT(math_btn_press()));

    connect(ui->btn_ch_sign, SIGNAL(released()), this, SLOT(ch_sign_btn()));
    connect(ui->btn_eq, SIGNAL(released()), this, SLOT(eq_btn_press()));
    connect(ui->btn_del, SIGNAL(released()), this, SLOT(del_btn_press()));
    connect(ui->btn_clear, SIGNAL(released()), this, SLOT(clear_display()));

    connect(ui->n_val_up, SIGNAL(released()), this, SLOT(next_n()));
    connect(ui->n_val_down, SIGNAL(released()), this, SLOT(prev_n()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::check_change() {

    if (last_n != n) {

        calc.change_zn(n);
        if (calc.get_err()) {
            ui->err_msg->setText(calc.get_err_msg());
            return 1;
        } else {
            last_n = n;
        }

    }

    return 0;

}

int MainWindow::num_press() {

    if (check_change()) return 1;

    QPushButton *btn = (QPushButton *)sender();
    QString btn_val = btn->text();
    QString display_val = ui->display->text();
    if (display_val.toInt() == 0) {
        ui->display->setText(btn_val);
    } else {
        QString new_val_text = display_val + btn_val;
        int new_val = new_val_text.toInt();
        ui->display->setText(QString::number(new_val));
    }

    return 0;
}

int MainWindow::math_btn_press() {

    if (check_change()) return 1;

    if (!(div_op || mltp_op || add_op || sub_op || pow_op || dlog_op)) {

        if (ui->display->text().toInt() < 0 && !pow_op) {
            ui->err_msg->setText("Number can not be less than 0");
            return 0;
        } else if (ui->display->text().toInt() > n-1 && !pow_op) {
            ui->err_msg->setText("Number can not be larger than " + QString::number(n-1));
            return 0;
        } else {
            ui->err_msg->setText("");
        }
        calc_val = ui->display->text().toInt();
    }

    div_op = false;
    mltp_op = false;
    add_op = false;
    sub_op = false;
    pow_op = false;
    dlog_op = false;


    QPushButton *btn = (QPushButton *)sender();
    QString btn_val_text = btn->text();
    if(QString::compare(btn_val_text, "/", Qt::CaseInsensitive) == 0) {
        div_op = true;
    } else if(QString::compare(btn_val_text, "*", Qt::CaseInsensitive) == 0) {
        mltp_op = true;
    } else if(QString::compare(btn_val_text, "+", Qt::CaseInsensitive) == 0) {
        add_op = true;
    } else if(QString::compare(btn_val_text, "-", Qt::CaseInsensitive) == 0) {
        sub_op = true;
    } else if(QString::compare(btn_val_text, "^", Qt::CaseInsensitive) == 0) {
        pow_op = true;
    } else if(QString::compare(btn_val_text, "dlog", Qt::CaseInsensitive) == 0) {

        if (!calc.is_prim_root(calc_val)) {
            ui->err_msg->setText("dlog with base " + QString::number(calc_val) + " does not exist");
            return 0;
        } else {
            dlog_op = true;
        }
    }

    ui->display->setText("");

    return 0;
}

int MainWindow::eq_btn_press() {

    if (check_change()) return 1;


    if (div_op || mltp_op || add_op || sub_op || pow_op || dlog_op) {

        int res = 0;
        QString display_val_text = ui->display->text();
        int display_val = display_val_text.toInt();


        if (ui->display->text().toInt() < 0 && !pow_op) {
            ui->err_msg->setText("Number can not be less than 0");
            return 0;
        } else if (ui->display->text().toInt() > n-1 && !pow_op) {
            ui->err_msg->setText("Number can not be larger than " + QString::number(n-1));
            return 0;
        } else {
            ui->err_msg->setText("");
        }

        if (div_op) {
            if (display_val==0) {
                ui->err_msg->setText("Can not divide by 0");
                return 0;
            }
            res = calc.div(calc_val, display_val);
        } else if (mltp_op) {
            res = calc.mltp(calc_val, display_val);
        } else if (add_op) {
            res = calc.add(calc_val, display_val);
        } else if (sub_op) {
            res = calc.sub(calc_val, display_val);
        } else if (pow_op) {
            res = calc.power(calc_val, display_val);
            if (calc.get_err()) {
                ui->err_msg->setText(calc.get_err_msg());
                ui->display->setText(QString::number(0));
                calc_val=0.0;
                return 0;
            }
        } else if (dlog_op) {



            res = calc.dlog(calc_val, display_val);
            if (calc.get_err()) {
                ui->err_msg->setText(calc.get_err_msg());
                ui->display->setText(QString::number(0));
                calc_val=0.0;
                return 0;
            }
        }

        div_op = false;
        mltp_op = false;
        add_op = false;
        sub_op = false;
        pow_op = false;
        dlog_op = false;

        ui->display->setText(QString::number(res));
        calc_val = res;
    }


    return 0;
}

int MainWindow::del_btn_press() {

    if (check_change()) return 1;


    QString display_text = ui->display->text();
    if (display_text.length()>0) {
       display_text.chop(1);
       ui->display->setText(display_text);
    } else if (div_op || mltp_op || add_op || sub_op || pow_op || dlog_op) {
        div_op = false;
        mltp_op = false;
        add_op = false;
        sub_op = false;
        pow_op = false;
        dlog_op = false;

        ui->display->setText(QString::number(calc_val));
    }

    return 0;
}


int MainWindow::ch_sign_btn() {

    QString display_val_text = ui->display->text();

    int display_val = display_val_text.toInt();
    display_val *= -1;

    ui->display->setText(QString::number(display_val));

    return 0;
}


int MainWindow::next_n() {

    do {
        n+=1;
    } while (!is_simple(n));
    ui->n_val->setText(QString::number(n));

    return 0;
}

int MainWindow::prev_n() {

    if (n>2) n-=1;
    while (!is_simple(n) && n!=2) {
        n-=1;
    }
    ui->n_val->setText(QString::number(n));

    return 0;
}


int MainWindow::clear_display() {

    calc_val = 0;
    ui->display->setText(QString::number(0));
    add_op = sub_op = mltp_op = div_op = pow_op = dlog_op = false;

    return 0;
}

