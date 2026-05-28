#include<iostream>

class Po7 {
public:
	void setX(int x) {
		X = x;
	}
	int getX() {
		return X;
	}
	void setY(int y) {
		Y = y;
	}
	int getY() {
		return Y;
	}
private:
	int X, Y;
};

class Or7 {
public:
	void setR(int r) {
		R = r;
	}
	int getR() {
		return R;
	}
	void setPO(Po7 &po) {
		PO = po;
	}
	Po7 getPO() {
		return PO;
	}
private:
	int R;
	Po7 PO;
};

void getRel(Po7 &p, Or7 &o) {
	
	int num = (p.getX() - o.getPO().getX()) * (p.getX() - o.getPO().getX()) + (p.getY() - o.getPO().getY()) * (p.getY() - o.getPO().getY()) - o.getR() * o.getR();
	if (num > 0) {
		std::cout << "out";
	}
	else if (num == 0) {
		std::cout << "on";
	}
	else if (num < 0) {
		std::cout << "in";
	}
}

int main7() {

	Po7 po,ro;

	po.setX(10);
	po.setY(10);
	ro.setX(0);
	ro.setY(0);

	Or7 or1;

	or1.setPO(ro);
	or1.setR(10);

	getRel(po, or1);

	return 0;
}