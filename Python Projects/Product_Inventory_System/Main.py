'''
Conor O'Donovan
Part of Udemy final capstone project

Product Inventory Project
Create an application which manages an inventory of products.
Create a product class which has a price, id, and quantity on hand.
Then create an inventory class which keeps track of various products and can sum up the inventory value.
'''


def main():
    from Product_Class import Product
    from Inventory_Class import Inventory

    banana = Product("Banana", 3, 500)
    apple = Product("Apple", 2, 500)

    my_stock = Inventory()
    my_stock.update_product_list(banana)
    my_stock.update_product_list(banana)
    my_stock.update_product_list(apple)
    print(my_stock)
    print(my_stock.product_count())
    print(my_stock.stock_value())


if __name__ == "__main__":
    main()
