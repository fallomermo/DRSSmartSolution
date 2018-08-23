#ifndef WORKSPACE_H
#define WORKSPACE_H

#include <QWidget>

namespace Ui {
class WorkSpace;
}

class WorkSpace : public QWidget
{
    Q_OBJECT

public:
    explicit WorkSpace(QWidget *parent = nullptr);
    ~WorkSpace();

private:
    Ui::WorkSpace *ui;
};

#endif // WORKSPACE_H
