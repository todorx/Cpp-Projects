## Goal

Create a class Stopwatch that stores elapsed seconds and supports prefix and postfix increment/decrement operators.

## Implementation Instructions

### 1. Class Definition

- Field: int seconds (private)
- Constructor: Stopwatch(int s) to set initial value
- Getter: int getSeconds() const to read current value

### 2. Prefix Operators (++obj, --obj)

- Signature: Stopwatch& operator++()
- Steps:
  1. Increment seconds
  2. Return \*this

(Apply the same logic for prefix decrement.)

### 3. Postfix Operators (obj++, obj--)

- Signature: Stopwatch operator++(int)
- Steps:
  1. Create a temporary copy: Stopwatch temp = \*this
  2. Increment the original object
  3. Return temp

(Apply the same logic for postfix decrement.)

## Test Code (main.cpp)

Use the provided main to verify:

- prefix and postfix increment
- prefix and postfix decrement
- final value correctness.
