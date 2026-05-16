## Driver Class Definition

### Class `Vozac`

This class serves as the base class and contains the following information:

- **Name:** A string of up to 100 characters.
- **Age:** An integer.
- **Number of races:** An integer.
- **Veteran:** A boolean value (yes/no).

**Operators that should be overloaded:**

- `<<`: For printing the name, age, number of races, and the label `VETERAN` if the driver is a veteran.
- `==`: For comparing two drivers according to their **income per race**.

---

### Derived classes

#### 1. Class `Avtomobilist`

Additional data:

- **Car price:** A decimal number.

**Calculations:**

- **Income per race:** $\frac{CAR\_PRICE}{5}$
- **Tax:**
  - If the number of races is $> 10$, the tax is $15\%$ of the income.
  - Otherwise, the tax is $10\%$ of the income.

#### 2. Class `Motociklist`

Additional data:

- **Engine power:** An integer.

**Calculations:**

- **Income per race:** $ENGINE\_POWER \times 20$
- **Tax:**
  - If the driver is a veteran, the tax is $25\%$ of the income.
  - Otherwise, the tax is $20\%$ of the income.

---

### External function

`soIstaZarabotuvachka(Vozac **niza, int n, Vozac *v)`

- **Arguments:** An array of pointers to `Vozac`, the number of elements, and a pointer to a specific `Vozac` object.
- **Result:** Returns the number of drivers that have the same income per race as the passed driver `v`.

### Test examples

| Input                                                                                                                                                 | Result                                                                                                                                                                                                                                                                                        |
| :---------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 5<br>1<br>Hamilton 30 95 0 55000<br>Vetel 26 88 1 800<br>Barrichello 38 198 0 810<br>Rossi 32 130 1 800<br>Lorenzo 24 45 0 900<br>VozacX 38 198 1 800 | === TAX ===<br>Hamilton<br>30<br>95<br>1650<br>Vetel<br>26<br>88<br>VETERAN<br>4000<br>Barrichello<br>38<br>198<br>3240<br>Rossi<br>32<br>130<br>VETERAN<br>4000<br>Lorenzo<br>24<br>45<br>3600<br>=== DRIVER X ===<br>VozacX<br>38<br>198<br>VETERAN<br>=== SAME INCOME AS DRIVER X ===<br>2 |
