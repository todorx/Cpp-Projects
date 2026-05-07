#include <iostream>
using namespace std;

class Product
{
protected:
    double price;

public:
    Product() {}

    Product(double price)
    {
        this->price = price;
    }

    Product(const Product &p)
    {
        price = p.price;
    }

    virtual double finalPrice()
    {
        return price;
    }

    virtual void print()
    {
        cout << "Price:" << price << endl;
    }
};

class DiscountedProduct : public Product
{
    double discount;

public:
    DiscountedProduct() {}

    DiscountedProduct(const Product &p, double discount) : Product(p)
    {
        this->discount = discount;
    }

    DiscountedProduct(const DiscountedProduct &p)
    {
        discount = p.discount;
    }

    double finalPrice() override
    {
        if (discount == 0)
        {
            Product::finalPrice();
        }
        double p = Product::finalPrice();
        return p - (price * discount / 100);
    }

    void print() override
    {
        if (discount == 0)
        {
            Product::print();
            return;
        }
    }
};
