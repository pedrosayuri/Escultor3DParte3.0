#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <sculptor.h>
#include <vector>
#include <QVector>

using namespace std;

/**
 * @brief The Plotter class is responsible for designing the custom widget
 */
class Plotter : public QWidget
{
    Q_OBJECT
public:
    explicit Plotter(QWidget *parent = nullptr);

    /**
     * @brief paintEvent overload to draw the sculptor on the interface
     * @param event pointer to paint event (default: nullptr is a null pointer)
     */
    void paintEvent(QPaintEvent *event);
    /**
     * @brief setTam set sculptor size
     * @param nl_ line numbers
     * @param nc_ collum numbers
     */
    void setTam(int nl_, int nc_);
    /**
     * @brief mousePressEvent overload to control mouse click
     * @param e pointer to mouse event
     */
    void mousePressEvent(QMouseEvent *e);
    /**
     * @brief mouseMoveEvent overload to control mouse movement
     * @param e pointer to mouse event
     */
    void mouseMoveEvent(QMouseEvent *e);
    /**
     * @brief mouseReleaseEvent overload to control mouse release
     * @param e pointer to mouse event
     */
    void mouseReleaseEvent(QMouseEvent *e);
    /**
     * @brief loadMatriz load matrix to show the sculptor according to its dimensions
     * @param matriz vector tpy voxel
     */
    void loadMatriz(vector <vector <Voxel>> matriz);

signals:
    /**
     * @brief updatePosition update position on mouse click
     */
    void updatePosition(int,int);

private:
    int nl,nc;
    bool pressed;
    vector <vector <Voxel>> v;
    int bv,bh; // Vertical border, horizontal border
    int dCel; // Celule dimension
    int widthTela, heightTela;
    int widthCel, heightCel;

};

#endif // PLOTTER_H
