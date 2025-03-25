# 🔌 Resistance Calculator (Series & Parallel)

A simple **C++ console application** that calculates the **total resistance** for resistors connected in **series** or **parallel**.

Created by **Shota Matsumoto**  
📅 **Date:** February 24, 2024  
🎓 **Project:** CPE First Assignment

---

## 📌 Features

- ✅ Interactive **main menu** and **secondary menu**
- ✅ Calculates resistance for:
  - 🔗 Series connections
  - 🔀 Parallel connections
- ✅ Input validation to prevent negative resistance values
- ✅ Helpful instructions under the "Help" option
- ✅ Graceful program exit

---

## 💻 How It Works

### Main Menu Options:

| Option | Description                          |
|--------|--------------------------------------|
| 1      | Calculate total resistance           |
| 2      | Help – Explanation about the program |
| 3      | Exit the program                     |

### Series Calculation:
Total Resistance (Ω) = R₁ + R₂ + R₃ + ... + Rₙ

### Parallel Calculation:
Total Resistance (Ω) = 1 / (1/R₁ + 1/R₂ + 1/R₃ + ... + 1/Rₙ)

---

## 🧠 Example

```text
Main Menu
1) Calculate total resistance value
2) Help
3) Exit
Please enter your choice: 1

Secondary Menu
1) Series
2) Parallel
Please select connection type: 2

Please enter the total number of resistors: 3
Please enter the value of resistor 1 (Omega): 100
Please enter the value of resistor 2 (Omega): 200
Please enter the value of resistor 3 (Omega): 300
The total resistance value is: 54.5455 (Omega)
