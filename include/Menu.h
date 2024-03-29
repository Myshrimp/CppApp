// Menu.h
#pragma once
#include"inputMgr.h"
// 抽象菜单
class Menu {
public:
	virtual ~Menu() = default;
	virtual bool process() {
		display();
		int choice = selectMenuItem();
		return doChoice(choice);
	}
	inputMgr input;
protected:
	virtual void display() const = 0;
	virtual int  selectMenuItem();
	virtual bool doChoice(int choice) = 0;
};

//主菜单
class MainMenu :public Menu {
protected:
	virtual void display() const;
	virtual bool doChoice(int choice);
};
//供应商管理菜单
class VendorMenu :public Menu {
protected:
	virtual void display() const;
	virtual bool doChoice(int choice);
};
//供应商商品菜单
class ProductMenu :public Menu {
protected:
	virtual void display() const;
	virtual bool doChoice(int choice);
};
//采购项菜单
class PurchaseMenu :public Menu {
protected:
	virtual void display() const;
	virtual bool doChoice(int choice);
};
//询价菜单
class InquiryMenu :public Menu {
protected:
	virtual void display() const;
	virtual bool doChoice(int choice);
};
//订单菜单
class OrderMenu :public Menu {
protected:
	virtual void display() const;
	virtual bool doChoice(int choice);
};
//导出菜单	
class ExportMenu :public Menu {
protected:
	virtual void display() const;
	virtual bool doChoice(int choice);
};