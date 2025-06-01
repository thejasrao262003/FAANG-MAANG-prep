# 📅 August – Week 2 (Aug 8–14) – Rate Limiter Design + OS & DBMS Deep Dive

## 🎯 Weekly Goal:
Master the design of a real-world rate limiter system using Redis and token bucket logic. Deep dive into key OS mechanisms and DBMS internals essential for system design and interviews.

---

## ✅ Weekly Targets

### 🔹 System Design: Rate Limiter

- [ ] Learn rate limiting algorithms:
  - [ ] Fixed Window
  - [ ] Sliding Window
  - [ ] Token Bucket (focus)
  - [ ] Leaky Bucket (compare)

- [ ] Design and implement:
  - [ ] In-memory rate limiter using token bucket
  - [ ] Redis-based distributed limiter (optional stretch)
  - [ ] Per-user and per-endpoint throttling

- [ ] Create:
  - [ ] HLD diagram with flow
  - [ ] Rate Limiter strategy comparison table
  - [ ] Scalability notes (latency, burst traffic)

---

### 🔹 CS Core: OS + DBMS

- [ ] OS:
  - [ ] Virtual Memory
  - [ ] Paging, Segmentation
  - [ ] Deadlocks (conditions, prevention)
  - [ ] Semaphores, Mutex, Context Switching

- [ ] DBMS:
  - [ ] Indexing (B+ Tree, Hash)
  - [ ] Transactions (ACID properties)
  - [ ] Isolation Levels & Anomalies
  - [ ] Join Types + Query Planning

---

### 🔹 Blog/Content

- [ ] Continue Blog #5 if not complete
- [ ] Draft Blog #6: “How Rate Limiting Really Works”

---

## ⏱️ Daily Breakdown

| Day       | Focus Area                                               |
|-----------|----------------------------------------------------------|
| Thu (Aug 8)   | Understand rate limiting types + token bucket logic      |
| Fri (Aug 9)   | OS: Memory management + segmentation                    |
| Sat (Aug 10)  | Build in-memory rate limiter with test suite           |
| Sun (Aug 11)  | DBMS: Indexing + ACID + Isolation Levels               |
| Mon (Aug 12)  | Redis-based limiter integration (optional)             |
| Tue (Aug 13)  | Finalize HLD + diagrams + README                       |
| Wed (Aug 14)  | Write Blog #6 draft + GitHub update                    |

---

## 🧠 Notes to Self

- Token bucket controls burst traffic; leaky bucket smooths it.
- In Redis limiter, use `SETEX` or Lua scripting for atomic ops.
- Review SQL execution plan diagrams — they often come up.

---

## 📌 Deliverables by End of Week

- [ ] ✅ Rate Limiter system implemented (basic + stretch)
- [ ] ✅ Comparison of strategies documented
- [ ] ✅ HLD diagram + scalability trade-offs in README
- [ ] ✅ OS + DBMS key topics revised
- [ ] ✅ Blog #6 drafted/published
- [ ] ✅ GitHub repo updated and shared
