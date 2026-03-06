# GradeWise MW 🎓 (C++ Edition)
**Clarity in Your Grades — Terminal MVP**

GradeWise MW is a specialized grade calculator designed for Malawian university students. This C++ implementation serves as the backend logic MVP for the larger edutech platform.

## 🚀 Features
* **Malawian Grading Scale:** Automatic letter grade assignment based on the standard UNIMA/Malawian scale (A, B+, B, C+, C, D+, D, F).
* **Component Weighting:** Calculate contributions using the formula: `(Score ÷ Max) × Weight`.
* **Weight Validation:** Ensures all course components total exactly 100% before proceeding.
* **Terminal Interface:** Simple, robust command-line interaction for grade entry.

## 📊 How It Works
The program follows a two-phase workflow:
1.  **Setup:** Define your course components (e.g., Test 1, Assignment, Final Exam) and their respective weights.
2.  **Calculation:** Input your scores and maximum possible marks to see your secured percentage and projected letter grade.

## 🎓 Malawian Grading Scale
| Letter Grade | Range | GPA |
| :--- | :--- | :--- |
| **A** | 80 - 100% | 4.0 |
| **B+** | 75 - 79% | 3.5 |
| **B** | 70 - 74% | 3.0 |
| **C+** | 65 - 69% | 2.5 |
| **C** | 60 - 64% | 2.0 |
| **D+** | 55 - 59% | 1.5 |
| **D** | 50 - 54% | 1.0 |
| **F** | 0 - 49% | 0.0 |

## 🛠 Usage
1. Compile the program: `g++ main.cpp -o gradewise`
2. Run the application: `./gradewise`

---
*Empowering Malawian students through innovative tools.*