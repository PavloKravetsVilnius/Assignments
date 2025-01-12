#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
    int soldThisMonth;
};

class Inventory {
private:
    vector<Product> products;

public:
    void addProduct(int id, string name, int quantity) {
        products.push_back({ id, name, quantity, 0 });
    }

    void trackSale(int id, int quantitySold) {
        for (auto& product : products) {
            if (product.id == id) {
                if (product.quantity >= quantitySold) {
                    product.quantity -= quantitySold;
                    product.soldThisMonth += quantitySold;
                    cout << "Sale recorded for product " << id << endl;
                }
                else {
                    cout << "Insufficient stock.\n";
                }
                return;
            }
        }
        cout << "Product not found!\n";
    }

    void displayInventory() {
        cout << "Product Inventory:\n";
        for (const auto& product : products) {
            cout << "ID: " << product.id << ", Name: " << product.name << ", Quantity: " << product.quantity
                << ", Sold This Month: " << product.soldThisMonth << endl;
        }
    }
    void displaySalesReport() {
        int totalSales = 0;
        for (const auto& product : products) {
            totalSales += product.soldThisMonth * 100;  // Assuming each product costs 100
        }
        cout << "Total Sales: $" << totalSales << endl;
    }
};

int main() {
    Inventory inventory;
    inventory.addProduct(101, "Laptop", 50);
    inventory.addProduct(102, "Phone", 75);

    inventory.trackSale(101, 30);
    inventory.trackSale(102, 50);

    inventory.displayInventory();
    inventory.displaySalesReport();

    return 0;
}