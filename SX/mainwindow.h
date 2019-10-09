#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>

class SQLHelper;
class QSqlTableModel;
class QTableView;
class QTableWidget;
class QSqlQueryModel;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    
    void setHeader_JHTB();

    void setHeader_XSTB();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_Xiaoshou_sel_clicked();

    void on_btn_queryInGoods_clicked();

    void on_pushButton_JH_clean_clicked();

    void on_pushButton_JH_Add_clicked();

    void onDelete();

    void onModify();

private:
    void InitSQL();

    void InitUI();

    void InitTabView(QTableView *_tableView);

    void InitTableWidget(QTableWidget* _tabwid);

    void SetTabViewColumnSpace(QTableView *m_tableView);

    void paintEvent( QPaintEvent * e);

    bool eventFilter(QObject* obj, QEvent *evt);



private:
    Ui::MainWindow *ui;

    SQLHelper*  m_sql;

    QSqlQueryModel* pmode_jh;

    QMenu   menu;
};

#endif // MAINWINDOW_H
