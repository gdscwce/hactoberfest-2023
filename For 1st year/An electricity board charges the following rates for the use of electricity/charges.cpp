
def calculate_electricity_charges(units_consumed):
    meter_charge = 100  # Minimum meter charge
    total_charge = 0

    if units_consumed <= 200:
        total_charge = units_consumed * 0.80
    elif units_consumed <= 300:
        total_charge = (200 * 0.80) + ((units_consumed - 200) * 0.90)
    else:
        total_charge = (200 * 0.80) + (100 * 0.90) + ((units_consumed - 300) * 1.00)

    if total_charge > 400:
        surcharge = total_charge * 0.15
        total_charge += surcharge

    total_charge += meter_charge

    return total_charge


user_name = input("Enter user name: ")
units_consumed = int(input("Enter units consumed: "))


charges = calculate_electricity_charges(units_consumed)


print(f"Electricity charges for {user_name}: Rs. {charges:.2f}")
