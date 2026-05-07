# C++ Projects

A comprehensive collection of C++ programming exercises covering fundamental and advanced concepts including object-oriented programming, recursion, data structures, and algorithmic problem-solving.

## 📋 Project Overview

This repository contains a series of well-documented programming exercises designed to strengthen problem-solving skills and C++ proficiency. Each exercise includes:

- Clear problem descriptions
- Example test cases
- Expected outputs
- Complete source code implementations

## 🎯 Exercises

| #                                                            | Exercise                                  | Topic                                 | Difficulty   |
| ------------------------------------------------------------ | ----------------------------------------- | ------------------------------------- | ------------ |
| [1](OOP%20Exercises/Exercise-1/readme.md)                    | Object-Oriented Programming & Inheritance | Classes, Inheritance, Polymorphism    | Intermediate |
| [2](structured-programming-exercises/Exercise-2/readme.md)   | Matrix Pattern Detection                  | Arrays, Matrices, Logic               | Intermediate |
| [3](structured-programming-exercises/Exercise-3/readme.md)   | Matrix Analysis                           | Linear Algebra, Statistics            | Intermediate |
| [4](structured-programming-exercises/Exercise-4/readme.md)   | String Processing                         | String Manipulation, Edge Cases       | Intermediate |
| [5](structured-programming-exercises/Exercise-5/readme.md)   | Continued Fractions                       | Recursion, Floating-Point Math        | Advanced     |
| [6](structured-programming-exercises/Exercise-6/readme.md)   | Substring Extraction                      | String Processing, Pattern Matching   | Beginner     |
| [7](structured-programming-exercises/Exercise-7/readme.md)   | Digit Collection & Sorting                | Character Processing, Sorting         | Beginner     |
| [8](structured-programming-exercises/Exercise-8/readme.md)   | Recursive Counting                        | Recursion, Array Processing           | Intermediate |
| [9](structured-programming-exercises/Exercise-9/readme.md)   | Matrix Transformation                     | Matrix Operations, Conditional Logic  | Intermediate |
| [10](structured-programming-exercises/Exercise-10/readme.md) | Matrix Reshaping                          | Array Manipulation, Dimensions        | Intermediate |
| [11](structured-programming-exercises/Exercise-11/readme.md) | Number Analysis                           | Number Theory, Most Significant Digit | Beginner     |
| [12](structured-programming-exercises/Exercise-12/readme.md) | Recursive Digit Transformation            | Recursion, Number Manipulation        | Advanced     |

## 🛠️ Requirements

- **C++ Standard**: C++11 or later
- **Build System**: CMake 3.10+
- **Compiler**: GCC 11+ or Clang 12+
- **OS**: Linux/WSL, macOS, or Windows (with appropriate tools)

## 📦 Installation & Setup

### Prerequisites

Ensure you have the following installed:

```bash
# Ubuntu/Debian
sudo apt-get install build-essential cmake

# macOS (with Homebrew)
brew install cmake

# Windows (with MSVC or MinGW)
# Download from cmake.org and add to PATH
```

### Clone the Repository

```bash
git clone https://github.com/todorx/VS-Code-Projects.git
cd VS-Code-Projects
```

## 🔨 Building the Project

### Using CMake (Recommended)

```bash
# Create build directory
mkdir build
cd build

# Configure and build
cmake ..
make

# Or use the preset (if available)
cmake --preset default
cmake --build --preset default
```

### Using VS Code with CMake Tools

1. Open the project in VS Code
2. Install the "CMake Tools" extension
3. Select your preferred compiler kit
4. Click "Build" in the status bar

## 🚀 Running Exercises

After building, you can run individual exercises:

```bash
# Run all exercises
./VS-Code-Projects

# Or compile and run a specific OOP exercise
cd "OOP Exercises/Exercise-5"
g++ -std=c++11 exercise.cpp -o exercise5
./exercise5

# Or compile and run a specific structured exercise
cd structured-programming-exercises/Exercise-5
g++ -std=c++11 5.cpp -o exercise5
./exercise5
```

## 📁 Project Structure

```
VS-Code-Projects/
├── CMakeLists.txt              # Build configuration
├── CMakePresets.json           # CMake build presets
├── README.md                   # This file
├── .gitignore                  # Git ignore rules
├── OOP Exercises/              # Object-Oriented Programming exercises
│   ├── README.md
│   ├── Exercise-1/             # OOP & Inheritance (Product/DiscountedProduct)
│   │   ├── main.cpp
│   │   └── readme.md
│   ├── Exercise-2/             # Song & CD Management
│   │   ├── exercise.cpp
│   │   └── readme.md
│   ├── Exercise-3/             # Ingredient & Dish Composition
│   │   ├── exercise.cpp
│   │   └── readme.md
│   ├── Exercise-4/             # Passenger & Train Management
│   │   ├── exercise.cpp
│   │   └── readme.md
│   ├── Exercise-5/             # List & ListContainer
│   │   ├── exercise.cpp
│   │   └── readme.md
│   ├── Exercise-6/             # Automobile & RentACar
│   │   ├── exercise.cpp
│   │   └── readme.md
│   ├── Exercise-7/             # Stopwatch (Operator Overloading)
│   │   ├── exercise.cpp
│   │   └── readme.md
│   ├── Exercise-8/             # NBAPlayer & AllStarPlayer (Inheritance)
│   │   ├── exercise.cpp
│   │   └── readme.md
│   ├── Exercise-9/             # Chocolate Factory (Operator Overloading)
│   │   ├── exercise.cpp
│   │   └── readme.md
│   ├── Exercise-10/            # Stock Record & Client Portfolio
│   │   ├── exercise.cpp
│   │   └── readme.md
│   ├── Exercise-11/            # Song & CD (from Vezbi Courses)
│   │   ├── exercise.cpp
│   │   └── readme.md
│   └── Exercise-12/            # Train Management (from Vezbi Courses)
│       ├── exercise.cpp
│       └── readme.md
├── structured-programming-exercises/  # Procedural exercises
│   ├── Exercise-2/             # Matrix Pattern Detection
│   │   ├── 2.cpp
│   │   └── readme.md
│   ├── Exercise-3/             # Matrix Analysis
│   │   ├── 3.cpp
│   │   └── readme.md
│   ├── Exercise-4/             # String Processing
│   │   ├── 4.cpp
│   │   └── readme.md
│   ├── Exercise-5/             # Continued Fractions
│   │   ├── 5.cpp
│   │   ├── 5-1.cpp
│   │   └── readme.md
│   ├── Exercise-6/             # Substring Extraction
│   │   ├── 6.cpp
│   │   └── readme.md
│   ├── Exercise-7/             # Digit Collection
│   │   ├── 7.cpp
│   │   └── readme.md
│   ├── Exercise-8/             # Recursive Counting
│   │   ├── 8.cpp
│   │   └── readme.md
│   ├── Exercise-9/             # Matrix Transformation
│   │   ├── 9.cpp
│   │   └── readme.md
│   ├── Exercise-10/            # Matrix Reshaping
│   │   ├── 10.cpp
│   │   └── readme.md
│   ├── Exercise-11/            # Number Analysis
│   │   ├── 11.cpp
│   │   └── readme.md
│   └── Exercise-12/            # Recursive Digit Transformation
│       ├── 12.cpp
│       └── readme.md
└── out/                        # Build output (ignored)
```

## 🎓 Learning Path

### Beginner Track

Start with these exercises if you're new to C++:

- Exercise 6: Basic string manipulation
- Exercise 7: Character processing and sorting
- Exercise 11: Number operations

### Intermediate Track

Build on your fundamentals:

- Exercise 1: OOP and inheritance concepts
- Exercise 2: Matrix operations
- Exercise 3: Data analysis
- Exercise 4: String edge cases
- Exercise 9: Complex matrix transformations

### Advanced Track

Challenge yourself with:

- Exercise 5: Recursive mathematical computations
- Exercise 8: Advanced recursion patterns
- Exercise 10: Complex array manipulation
- Exercise 12: Recursive number theory

## 💡 Key Concepts Covered

- **Object-Oriented Programming**: Classes, inheritance, polymorphism, virtual methods
- **Recursion**: Base cases, recursive calls, optimization
- **Data Structures**: Arrays, matrices, strings
- **Algorithms**: Sorting, pattern matching, mathematical computations
- **String Processing**: Parsing, substring extraction, character manipulation
- **Matrix Operations**: Transposition, transformation, analysis
- **Number Theory**: Digit manipulation, mathematical properties

## 📝 Each Exercise Includes

- **Problem Description**: Clear statement of what needs to be implemented
- **Input/Output Specifications**: Format and constraints
- **Example Test Cases**: Multiple examples with expected outputs
- **Difficulty Rating**: Beginner, Intermediate, or Advanced
- **Implementation**: Complete, working C++ solution

## 🔍 Code Quality

All code follows these principles:

- Clean, readable naming conventions
- Comprehensive comments where needed
- Proper error handling
- Efficient algorithms
- Standard C++ practices

## 🐛 Troubleshooting

### Build Issues

```bash
# Clean previous builds
rm -rf build/

# Rebuild from scratch
mkdir build && cd build && cmake .. && make
```

### Compiler Errors

- Ensure C++11 or later: `-std=c++11 -std=c++14 -std=c++17`
- Check CMakeLists.txt configuration
- Verify all dependencies are installed

## 📚 Resources

- [C++ Reference](https://en.cppreference.com/)
- [CMake Documentation](https://cmake.org/documentation/)
- [Algorithm Visualizations](https://visualgo.net/)

## 📄 License

This project is provided for educational purposes.

## ✨ Contributing

Feel free to:

- Report issues or bugs
- Suggest improvements
- Submit optimized solutions
- Add additional test cases

---

**Last Updated**: May 7, 2026

For questions or feedback, feel free to open an issue or reach out!
