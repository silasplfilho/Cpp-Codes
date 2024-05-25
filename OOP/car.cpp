#include <string>
using std::string;

class Car
{
    public:
        void give_discount(double percentage);
        void increase_mileage(int miles);
        void sell_car(double final_price);
        void test_drive(string license_number);
        string get_make();
        void set_make(string m);
        string get_model();
        void set_model(string m);
        string get_color();
        void set_color(string c);
        string get_vin();
        void set_vin(string v);
        int get_price();
        void set_price(int p);
        int get_mpg();
        void set_mpg(int m);
        int get_year();
        void set_year(int y);
        int get_mileage();
        void set_mileage(int m);
        bool get_sold();
        void set_sold(bool s);
        bool get_on_lot();
        void set_on_lot(bool o);
    
    private:
        string make;
        string model;
        string color;
        string vin;
        int price;
        int mpg;
        int mileage;
        bool sold;
        bool on_lot;

};

class Dealership
{
    public:
        Dealership():
        void add_car(Car c);
        string get_owner();
        Car& get_inventory();
        string get_address();
        int get_capacity();
        int get_num_cars();
        void set_owner(string _owner);
        void set_inventory(Car *inventory);
        void set_address(string _address);
        void set_capacity(int capacity);
        void set_num_cars(int _num_cars);

    private:
        string owner;
        Car *inventory;
        string address;
        int capacity;
        int num_cars;

}