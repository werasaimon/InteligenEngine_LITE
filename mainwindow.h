#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


#include "Engine/engine.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
