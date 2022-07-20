#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <sculptor.h>
#include <dialog.h>
#include <QActionGroup>

/**
 * Shapes that can be drawn
 */
enum{
    BOX, NOBOX, SPHERE, NOSPHERE, VOXEL, NOVOXEL, ELLIPSOID, NOELLIPSOID
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @brief The MainWindow class is the the main window of our program
 */

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int dx,dy,dz; // Dimensions
    float r,g,b; // Colors
    int currentObject;
    Sculptor *s;
    QActionGroup *actionGroup;
    /**
     * @brief updateColor slot to update the color of the element to be drawn in the sculptor
     */
    void updateColor();

public slots:
    /**
     * @brief quit slot to close the mainwindow
     */
    void quit();
    /**
     * @brief setRed set red color
     * @param r_ red
     */
    void setRed(int r_);
    /**
     * @brief setGreen set green color
     * @param g_ green
     */
    void setGreen(int g_);
    /**
     * @brief setBlue set blue color
     * @param b_ blue
     */
    void setBlue(int b_);
    /**
     * @brief drawShape draw the selected shape
     */
    void drawShape(int,int);
    /**
     * @brief updateCoords update the coordinates
     */
    void updateCoords(int, int);

private slots:
    /**
     * @brief new_Sculptor slot to create a new scultor
     */
    void new_Sculptor();
    /**
     * @brief save slot to save drawing file
     */
    void save();
    /**
     * @brief addVoxel slot to add a voxel
     */
    void addVoxel();
    /**
    * @brief remove_voxel slot to remove a voxel
    */
    void remove_voxel();
    /**
     * @brief add_box slot to add a box voxel
     */
    void add_box();
    /**
     * @brief remove_box slot to remove a box voxel
     */
    void remove_box();
    /**
     * @brief add_sphere slot to add a sphere voxel
     */
    void add_sphere();
    /**
     * @brief remove_sphere slot to remove a sphere voxel
     */
    void remove_sphere();
    /**
     * @brief add_ellipsoid slot to add a ellipsoid voxel
     */
    void add_ellipsoid();
    /**
     * @brief remove_ellipsoid slot to remove a ellipsoid voxel
     */
    void remove_ellipsoid();
    /**
     * @brief slider_axis_z slot to position the sculptor's z-axis
     */
    void slider_axis_z(int);
};
#endif // MAINWINDOW_H
