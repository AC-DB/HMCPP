#include<iostream>

class Cube6
{
public:
	void setL(int l) {
		L = l;
	}

	int getL() {
		return L;
	}

	void setW(int w) {
		W = w;
	}

	int getW() {
		return W;
	}

	void setH(int h) {
		H = h;
	}

	int getH() {
		return H;
	}

	int getSum() {
		return 2 * (W * H + W * L + H * L);
	}

	int getVol() {
		return W * H * L;
	}

	bool isEp(Cube6 &c) {
		if (c.getH() == H && c.getL() == L && c.getW() == W) return true;
		else return false;
	}
private:
	int L, W, H;
};

bool isOK(Cube6& c1, Cube6& c2) {
	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW()) return true;
	else return false;
}

int main6() {

	Cube6 c1, c2;

	c1.setL(1);
	c1.setW(2);
	c1.setH(3);

	c2.setL(1);
	c2.setW(2);
	c2.setH(4);

	std::cout << c1.getL() << " " << c1.getW() << " " << c1.getH() << " " << c1.getSum() << " " << c1.getVol() << std::endl;
	std::cout << c2.getL() << " " << c2.getW() << " " << c2.getH() << " " << c2.getSum() << " " << c2.getVol() << std::endl;

	std::cout << c1.isEp(c2) << " " << c2.isEp(c1) << " " << isOK(c1, c2) << std::endl;

	return 0;
}