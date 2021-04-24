#include "widgetfirst.h"
#include "ui_widgetfirst.h"

WidgetFirst::WidgetFirst(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetFirst)
{
    ui->setupUi(this);
}

WidgetFirst::~WidgetFirst()
{
    delete ui;
}
