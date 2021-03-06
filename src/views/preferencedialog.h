#ifndef PREFERENCEDIALOG_H
#define PREFERENCEDIALOG_H

#include <QDialog>
#include "gitlview.h"
namespace Ui {
class PreferenceDialog;
}

class PreferenceDialog : public QDialog, public GitlView
{
    Q_OBJECT
    
public:
    explicit PreferenceDialog(QWidget *parent = 0);
    ~PreferenceDialog();
    
protected:
    void showEvent(QShowEvent * event);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_cacheFolderBrowseBtn_clicked();

private:
    Ui::PreferenceDialog *ui;
};

#endif // PREFERENCEDIALOG_H
