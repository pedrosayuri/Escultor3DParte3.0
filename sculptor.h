#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <string>
#include <vector>

using namespace std;

/**
 * @brief The Voxel struct
 */
struct Voxel {
    float r,g,b; // COLORS
    bool isOn; // SHOW OR HIDE
};

enum{XY,ZX,YZ};

/**
 * @brief The Sculptor class generates a 3D matrix with various drawing functions. She is responsible for creating a sculptor, dynamically allocating a 3D matrix of dimensions nx, ny, nz.
 */
class Sculptor
{
    protected:
        Voxel ***v; // MATRIX 3D
        int nx,ny,nz; // MATRIX SIZE
        float r,g,b; // MATRIX COLORS
    public:
        /**
         * @brief Sculptor Sculptor's constructor
         * @param nx_ number lines of x-axis
         * @param ny_ number lines of y-axis
         * @param nz_ number lines of z-axis
         */
        Sculptor(int nx_, int ny_, int nz_);
        /**
         * @brief setColor function to set shape color
         * @param r_ red color
         * @param g_ green color
         * @param b_ blue color
         */
        void setColor(float r_, float g_, float b_);
        /**
         * @brief ~Sculptor Sculptor's destructor
         * */
        ~Sculptor();
        /**
         * @brief putVoxel function to put a voxel
         * @param x0 position to put a voxel in x-axis
         * @param y0 position to put a voxel in y-axis
         * @param z0 position to put a voxel in z-axis
         */
        void putVoxel(int x0, int y0, int z0);
        /**
         * @brief cutVoxel function to cut a voxel
         * @param x0 position to cut a voxel in x-axis
         * @param y0 position to cut a voxel in y-axis
         * @param z0 position to put a voxel in z-axis
         */
        void cutVoxel(int x0, int y0, int z0);
        /**
         * @brief putBox function to put a voxel's box
         * @param x0 initial position to put a voxel in x-axis
         * @param x1 final position to put a voxel in x-axis
         * @param y0 initial position to put a voxel in y-axis
         * @param y1 final position to put a voxel in y-axis
         * @param z0 initial position to put a voxel in z-axis
         * @param z1 final position to put a voxel in z-axis
         */
        void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
        /**
         * @brief cutBox function to cut a voxel's box
         * @param x0 initial position to cut a voxel in x-axis
         * @param x1 final position to cut a voxel in x-axis
         * @param y0 initial position to cut a voxel in y-axis
         * @param y1 final position to cut a voxel in y-axis
         * @param z0 initial position to cut a voxel in z-axis
         * @param z1 final position to cut a voxel in z-axis
         */
        void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
        /**
         * @brief putSphere function to put a voxel's sphere
         * @param xcenter sphere center position in x-axis
         * @param ycenter sphere center position in y-axis
         * @param zcenter sphere center position in z-axis
         * @param radius sphere radius
         */
        void putSphere(int xcenter, int ycenter, int zcenter, int radius);
        /**
         * @brief cutSphere function to cut a voxel's sphere
         * @param xcenter sphere center position in x-axis
         * @param ycenter sphere center position in y-axis
         * @param zcenter sphere center position in z-axis
         * @param radius sphere radius
         */
        void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
        /**
         * @brief putEllipsoid function to put a volxel's ellipsoid
         * @param xcenter ellipsoid center position in x-axis
         * @param ycenter ellipsoid center position in y-axis
         * @param zcenter ellipsoid center position in z-axis
         * @param rx ellipsoid radius on the x-axis
         * @param ry ellipsoid radius on the y-axis
         * @param rz allipsoid radius on the z-axis
         */
        void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
        /**
         * @brief cutEllipsoid function to cut a volxel's ellipsoid
         * @param xcenter ellipsoid center position in x-axis
         * @param ycenter ellipsoid center position in y-axis
         * @param zcenter ellipsoid center position in z-axis
         * @param rx ellipsoid radius on the x-axis
         * @param ry ellipsoid radius on the y-axis
         * @param rz allipsoid radius on the z-axis
         */
        void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
        /**
         * @brief writeOFF fuction to write a file type OFF
         * @param filename file name
         */
        void writeOFF(string filename);
        /**
         * @brief getPlano read the interface plan
         * @param i z-axis
         * @param plano plan (default: XY)
         * @return
         */
        vector <vector<Voxel>> getPlano(int i, int plano=XY);

};

#endif // SCULPTOR_H
