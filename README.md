# Circular Queue Patient Waiting System

A C++ coursework program using a bounded array-and-pointer queue for patient names. The menu adds patients, removes the next patient and displays who is next.

This is a FIFO queue exercise, not clinical urgency triage or a stochastic medical simulation.

## Run

```bash
git clone https://github.com/arslantariq364/hospital-triage-waiting-system.git
cd hospital-triage-waiting-system
g++ -std=c++17 -Wall -Wextra 'Patient Waiting Room System .cpp' -o waiting
./waiting
```

## Known limitations

Removal at the final array slot resets the front pointer and then increments it, skipping the first slot. The owned array lacks destructor cleanup. These need repair and boundary tests before relying on queue correctness. There are no clinical priorities, arrival distributions or bed-capacity models.
