# 📅 July – Week 3 (July 15–21) – Advanced Graphs & Notification System LLD

## 🎯 Weekly Goal:
This week focuses on mastering advanced graph algorithms such as Dijkstra and Disjoint Set Union (DSU). Simultaneously, you’ll architect and build a scalable notification service as your third LLD project.

---

## ✅ Weekly Targets

### 🔹 DSA: Advanced Graphs – Weighted Graphs & Union-Find

- [ ] Solve 40 Leetcode problems:
  - [ ] Dijkstra’s Algorithm (min path in weighted graphs)
  - [ ] Prim’s Algorithm (MST)
  - [ ] Disjoint Set Union (Cycle Detection, Kruskal)
  - [ ] BFS/DFS-based Shortest Path problems

### Recommended Problems:
- [ ] Network Delay Time
- [ ] Cheapest Flights Within K Stops
- [ ] Minimum Spanning Tree (Kruskal’s/Prim’s)
- [ ] Evaluate Division
- [ ] Path With Minimum Effort

---

### 🔹 LLD: Notification System

- [ ] Architect a scalable notification service:
  - [ ] Multi-channel support (Email, SMS, In-app)
  - [ ] Pluggable strategy pattern for different channels
  - [ ] Queue-based job processing (simulate async via sleep)
  - [ ] Retry logic with exponential backoff

- [ ] Code deliverables:
  - [ ] Service Interface
  - [ ] EmailNotification, SMSNotification classes
  - [ ] NotificationManager controller
  - [ ] Unit tests for send success/failure/retry

---

### 🔹 Blog/Content

- [ ] Finalize Blog #3 and publish it
- [ ] Outline Blog #4: “How to Design a Scalable Notification System”

---

## ⏱️ Daily Breakdown

| Day       | Focus Area                                        |
|-----------|---------------------------------------------------|
| Mon (July 15)  | Dijkstra problems + Notification design outline  |
| Tue (July 16)  | DSU problems + build EmailNotification class     |
| Wed (July 17)  | BFS-based shortest paths + SMS channel logic     |
| Thu (July 18)  | Controller + retry + error simulation            |
| Fri (July 19)  | Integrate, test, and benchmark Notification LLD  |
| Sat (July 20)  | Push code + polish README                        |
| Sun (July 21)  | Publish Blog #3 + write Blog #4 outline          |

---

## 🧠 Notes to Self

- Use PriorityQueue (min-heap) for Dijkstra’s optimal performance.
- Consider logging + retries in LLD to simulate production ops.
- Test LLD with channel failures, queue overflow, and invalid inputs.

---

## 📌 Deliverables by End of Week

- [ ] ✅ 40 Advanced Graph problems solved
- [ ] ✅ Notification System (LLD) implemented with tests
- [ ] ✅ Blog #3 published
- [ ] ✅ Blog #4 outline created
- [ ] ✅ GitHub updated with clean code, README, and architecture diagram
