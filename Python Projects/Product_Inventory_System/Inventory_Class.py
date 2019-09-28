'''
Inventory Class
Keeps track of various products and can sum up the inventory value
'''


class Inventory:

    def __init__(self):
        self.product_list = []
        self.total_value = 0
        self.number_of_products = 0

    def __str__(self):
        inventory_str = ""
        for i in range(len(self.product_list)):
            if i < (len(self.product_list) - 1):
                inventory_str += (self.product_list[i].product_id + ", ")
            else:
                inventory_str += self.product_list[i].product_id
        return "Inventory: {}".format(inventory_str)

    def __repr__(self):
        return self.product_list

    def update_product_list(self, product_to_add):
        if product_to_add not in self.product_list:
            self.product_list.append(product_to_add)

    def product_count(self):
        for i in self.product_list:
            self.number_of_products += 1
        if self.number_of_products > 1:
            return "There are {} different products in stock".format(self.number_of_products)
        else:
            return "There is {} product in stock".format(self.number_of_products)

    def stock_value(self):
        for i in self.product_list:
            self.total_value += (i.product_price * i.product_quantity)
        return "Total value of stock: €{}".format(self.total_value)
