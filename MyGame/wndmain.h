﻿#ifndef WNDMAIN_H
#define WNDMAIN_H

#include <QWidget>
#include <QFile>
#include <QStringList>
#include <QMenu>
#include <QAction>
#include <QFileDialog>
#include <QInputDialog>

#include "game/2048/GameView/gamestartwindows.h"
#include "game/Gobang/GameView/gstartwindow.h"
#include "game/Snake/GameView/gstartwidght.h"
#include "game/Color/widget.h"
#include "game/Utility/utility.h"
#include "Archive/archive.h"

QT_BEGIN_NAMESPACE
namespace Ui { class WndMain; }
QT_END_NAMESPACE

class WndMain : public QWidget
{
    Q_OBJECT

public:
    WndMain(QWidget *parent = nullptr);
    /****************************/
    QMenu *m_rightClieckMenu;
    QAction *m_openAction;
    QAction *View_achievements;
    QAction *View_records;
    void contextMenuEvent(QContextMenuEvent* event);

    void showList(QString gameName);
    /********************************/
    ~WndMain();

private slots:
    void on_btnGame_clicked();

    void on_btnAchieve_clicked();

    void on_btnUser_clicked();

    void on_btnHist_clicked();

    void on_btnInstal_clicked();

    void on_btnDwi_clicked();

    void on_btnClose_clicked();

    void openTZFE();

    void openGobang();

    void openSnake();

    void openColor();

private:
    Ui::WndMain *_ui;

    bool _isOpen;

    void initWindows();
};
#endif // WNDMAIN_H
