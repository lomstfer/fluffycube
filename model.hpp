#ifndef __MODEL_H__
#define __MODEL_H__

#include <vector>
#include "geometry.hpp"
#include "tgaimage.hpp"

class Model {
private:
	std::vector<Vec3f> verts_;
	std::vector<std::vector<int> > faces_;
public:
	Model(std::string filename);
	~Model();
	int nverts();
	int nfaces();
	Vec3f vert(int i);
	std::vector<int> face(int idx);
    void draw(float zoom, TGAColor color, TGAImage &img);
};

#endif //__MODEL_H__