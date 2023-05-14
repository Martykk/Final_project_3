#pragma once
class basic_role {
protected:
	int max_HP;	//血量最大值
	int HP; //角色剩餘血量

	int max_SP; //SP
	int SP;

	int max_MP; //MP
	int MP;

	int experience; //experience
	int level;	//level

	//skill stuation
	bool quick_step;
	bool ball_barrier;
	bool sonic_boom;
	bool  mask_guard;
	bool annihilation;
	bool regeneration;
	bool ultimate_fury;

public:
	basic_role() {
		level = 0;
		experience = 0;

		quick_step = true;
		ball_barrier = false;
		sonic_boom = false;
		mask_guard = false;
		annihilation = false;
		regeneration = false;
		ultimate_fury = false;

	}
	void setHP(int hp) {
		HP = hp;
	}
	int getHP() {
		return HP;
	}
	void setSP(int sp) {
		SP = sp;
	}
	int getSp() {
		return SP;
	}
	void setMP(int mp) {
		MP = mp;
	}
	int getMP() {
		return MP;
	}
	void setEx(int ex) {
		experience = ex;
	}
	int getEx() {
		return experience;
	}



};

class Swordsman : public basic_role {
public:
	Swordsman() {
		max_HP = 100;
		max_MP = 150;
		max_SP = 50;
	}


};

class Knifesmith : public basic_role {
public:
	Knifesmith() {
		max_HP = 200;
		max_MP = 100;
		max_SP = 25;
	}


};

class Gunner : public basic_role {
public:
	Gunner() {
		max_HP = 150;
		max_MP = 100;
		max_SP = 25;
	}


};

class Priest : public basic_role {
public:
	Priest() {
		max_HP = 150;
		max_MP = 50;
		max_SP = 150;
	}


};

class Mage : public basic_role {
public:
	Mage() {
		max_HP = 100;
		max_MP = 25;
		max_SP = 150;
	}
};


