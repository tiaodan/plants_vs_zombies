#ifndef DIALOG_H  // 创建项目自带
#define DIALOG_H  // 创建项目自带

#include <QDialog>  // 创建项目自带

class Dialog : public QDialog  // 创建项目自带
{  // 创建项目自带
    Q_OBJECT  // 创建项目自带

public:// 创建项目自带
    Dialog(QWidget *parent = 0);  // 创建项目自带
    ~Dialog();  // 创建项目自带
};  // 创建项目自带

#endif // DIALOG_H  // 创建项目自带
