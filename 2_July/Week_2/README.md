# 📅 July – Week 2 (July 8–14) – Graphs & LFU Cache Design

## 🎯 Weekly Goal:
Shift focus to graphs and explore traversal techniques such as BFS, DFS, and Union-Find. Simultaneously, expand your cache system by designing a more complex LFU (Least Frequently Used) cache.

---

## ✅ Weekly Targets

### 🔹 DSA: Graphs – Traversals & Union-Find

- [ ] Solve 35 Leetcode problems:
  - [ ] Breadth-First Search (BFS)
  - [ ] Depth-First Search (DFS)
  - [ ] Union-Find (Disjoint Set)
  - [ ] Topological Sort
  - [ ] Cycle detection (directed + undirected)

### Recommended Problems:
- [ ] Number of Islands
- [ ] Clone Graph
- [ ] Course Schedule
- [ ] Redundant Connection
- [ ] Accounts Merge

---

### 🔹 LLD: LFU (Least Frequently Used) Cache

- [ ] Understand how LFU differs from LRU
- [ ] Design an efficient solution with:
  - [ ] O(1) operations for get/put
  - [ ] PriorityQueue or OrderedDict hybrid approach
- [ ] Implement core logic:
  - [ ] Frequency Map
  - [ ] Eviction policy on tie
  - [ ] Resetting access count after evict

- [ ] Add:
  - [ ] Unit tests
  - [ ] Benchmarks comparing LRU vs LFU

---

### 🔹 Blog/Content

- [ ] Start Blog #3: “From LRU to LFU – The Evolution of Caching”
- [ ] Add diagrams explaining eviction and access count

---

## ⏱️ Daily Breakdown

| Day       | Focus Area                                    |
|-----------|-----------------------------------------------|
| Mon (July 8)   | Graph BFS problems + LFU concept reading       |
| Tue (July 9)   | Graph DFS + implement LFU data structure       |
| Wed (July 10)  | Union-Find + LFU eviction logic                |
| Thu (July 11)  | Topo Sort + finalize LFU + unit testing        |
| Fri (July 12)  | Benchmark LRU vs LFU performance               |
| Sat (July 13)  | Push code + write README                      |
| Sun (July 14)  | Draft Blog #3 + share a LinkedIn post         |

---

## 🧠 Notes to Self

- Union-Find needs `path compression` to scale.
- For LFU, think in terms of two maps:
  - [ ] Key to Frequency
  - [ ] Frequency to LinkedHashSet
- Document trade-offs between space vs time complexity.

---

## 📌 Deliverables by End of Week

- [ ] ✅ 35 Graph problems solved and categorized
- [ ] ✅ LFU Cache implemented with tests
- [ ] ✅ Benchmark vs LRU results documented
- [ ] ✅ Blog #3 drafted with diagrams
- [ ] ✅ GitHub pushed with clean commits and README
