#ifndef WIDGETFIRST_H
#define WIDGETFIRST_H

#include <QWidget>

namespace Ui {
class WidgetFirst;
}

class WidgetFirst : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetFirst(QWidget *parent = nullptr);
    ~WidgetFirst();

private:
    Ui::WidgetFirst *ui;
};

#endif // WIDGETFIRST_H
