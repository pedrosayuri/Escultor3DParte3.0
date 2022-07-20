#ifndef DIALOG_H
#define DIALOG_H
#include <QString>
#include <QDialog>

namespace Ui {
class Dialog;
}

/**
 * @brief The Dialog class is reponsible for opening the dialog box that allows you resize the sculptor
 */
class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

    /**
     * @brief dXDialog retrieves the x-axis dimension of the sculptor
     * @return
     */
    QString dXDialog();
    /**
     * @brief dYDialog retrieves the y-axis dimension of the sculptor
     * @return
     */
    QString dYDialog();
    /**
     * @brief dZDialog retrieves the z-axis dimension of the sculptor
     * @return
     */
    QString dZDialog();

private:
    /**
     * @brief ui Dialog user interface
     */
    Ui::Dialog *ui;
};

#endif // DIALOG_H
