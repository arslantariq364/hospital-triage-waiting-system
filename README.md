# 🏥 Hospital Patient Triage & Waiting Area Management System

[![C++17](https://img.shields.io/badge/C%2B%2B-17-00599C.svg?logo=c%2B%2B&logoColor=white)](#)
[![Data Structure](https://img.shields.io/badge/Data%20Structure-Circular%20Queue-orange.svg)](#)
[![Complexity](https://img.shields.io/badge/Time%20Complexity-O(1)%20Operations-brightgreen.svg)](#)
[![FAST NUCES](https://img.shields.io/badge/Academic-FAST%20NUCES-red.svg)](#)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

> A high-performance patient triage and waiting room scheduling simulation engineered in C++, utilizing low-level pointer arithmetic and a fixed-capacity Circular Queue buffer to guarantee constant time $\mathcal{O}(1)$ admissions and doctor dispatches.

---

## 🔬 Computational Architecture: Circular Queue Buffer

Traditional linear array queues suffer from *capacity exhaustion drift*—as elements are dequeued, memory preceding `front` becomes unreachable unless expensive $\mathcal{O}(N)$ shifting is triggered.

This implementation overcomes memory fragmentation through a **Circular Buffer with Direct Pointer Arithmetic**:
- **Array Pointer (`arr`):** Points to the contiguous heap block of size $N$.
- **Pointers `front` and `rear`:** Traverse memory directly. When `rear` reaches `arr + size - 1`, it wraps around to `arr` if preceding slots have been cleared.
- **Constant Time Guarantees:** All core operations execute in strict $\mathcal{O}(1)$ time.

```text
[ Slot 0 ] <--- front (Next Patient to see Doctor)
[ Slot 1 ] <--- Patient in waiting
[ Slot 2 ] <--- Patient in waiting
[ Slot 3 ] <--- rear (Most recent arrival)
[ Slot 4 ] (Available capacity)
[ Slot 5 ] (Available capacity)
```

---

## ⚡ Algorithmic Complexity

| Operation | Method | Time Complexity | Space Complexity | Description |
| :--- | :--- | :---: | :---: | :--- |
| **Admit Patient** | `Addpatient()` | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | Enqueues patient name to next available circular slot. |
| **Dispatch to Doctor** | `removepatient()` | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | Dequeues patient at head of line and advances `front` pointer. |
| **Inspect Next** | `nextpatient()` | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | Non-destructive peek at front patient. |
| **Buffer Checks** | `isempty()`, `isfull()` | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | Validates active occupancy count against capacity limit. |

---

## 🖥️ Interactive Console Workflow

```text
Menu Patients
1. Add Patients
2. Send to the Doctor
3. Next Patient
4. Exit the menu

Enter your choice: 1
Enter the name of the patient for queue:
Ahmad

Enter your choice: 3
The next patient in line is : Ahmad

Enter your choice: 2
The Patient with name : Ahmad is Removed from queue and sent to the Doctor
```

---

## 🛠️ Compilation & Execution

```bash
# Clone the repository
git clone https://github.com/arslantariq364/Hospital-Waiting-Area-System.git
cd Hospital-Waiting-Area-System

# Compile using GCC
g++ -std=c++17 -Wall -Wextra -O2 "Patient Waiting Room System .cpp" -o triage_system

# Run executable
./triage_system
```

---

## 👨‍💻 Author

**Arslan Tariq**  
*Computer Science Undergraduate @ FAST NUCES*  
*Applied Physics Teaching Assistant*  
[GitHub Profile](https://github.com/arslantariq364)

---

## 📜 License

Distributed under the MIT License. See [LICENSE](LICENSE) for details.
