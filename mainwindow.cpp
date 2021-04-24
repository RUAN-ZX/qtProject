#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "widgetfirst.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // 构造函数 初始化操作 创建窗口对象
    ui->setupUi(this);

#if 0
    // show方法 则独立窗口
    WidgetFirst* widget = new WidgetFirst;
    widget->show();
#else

    // 创建窗口对象的时候 传入父对象 则内嵌 而非独立窗口
    WidgetFirst* widget = new WidgetFirst(this);
#endif

}

MainWindow::~MainWindow()
{
    delete ui;
}

