def fcfs():
n = int(input("Enter number of processes: "))
processes = []

for _ in range(n):
pid = int(input("PID: "))
bt = int(input("Burst Time: "))
processes.append((pid, bt))

time = 0
total_wt = 0
total_tat = 0

print("\nPID BT WT TAT")
for pid, bt in processes:
wt = time
time += bt
tat = time

total_wt += wt

total_tat += tat
print(pid, bt, wt, tat)

print("\nAverage Waiting Time =", total_wt / n)
print("Average Turnaround Time =", total_tat / n)

fcfs()

2. SJF (Shortest Job First) Scheduling
Description
Shortest Job First (SJF) scheduling selects the process with the smallest burst time for execution first.
Since arrival time is ignored, all processes are available in the ready queue at the beginning.
The processes are sorted in ascending order of burst time, and the CPU executes them one by one.
This algorithm minimizes the average waiting time compared to FCFS.
Features
• Non-preemptive scheduling
• Optimal for minimum average waiting time
• Requires prior knowledge of burst time
Source Code:
def sjf():
n = int(input("Enter number of processes: "))
processes = []

for _ in range(n):
pid = int(input("PID: "))
bt = int(input("Burst Time: "))
processes.append((pid, bt))

# Sort by burst time
processes.sort(key=lambda x: x[1])

time = 0

total_wt = 0
total_tat = 0

print("\nPID BT WT TAT")
for pid, bt in processes:
wt = time
time += bt
tat = time

total_wt += wt
total_tat += tat
print(pid, bt, wt, tat)

print("\nAverage Waiting Time =", total_wt / n)
print("Average Turnaround Time =", total_tat / n)

sjf()