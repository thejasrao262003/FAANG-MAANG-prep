# 📅 August – Week 1 (Aug 1–7) – System Design Kickoff & Core Concepts

## 🎯 Weekly Goal:
Begin your system design journey with foundational concepts, understand large-scale system components, and implement your first HLD example: URL Shortener. Simultaneously revise OS and CN basics.

---

## ✅ Weekly Targets

### 🔹 System Design: Foundations & URL Shortener

- [ ] Understand these core components:
  - [ ] Load Balancer (round-robin vs consistent hashing)
  - [ ] Caching (write-through, write-back, TTL)
  - [ ] Sharding vs Replication
  - [ ] Message Queues (Kafka basics)

- [ ] Design & implement **URL Shortener**:
  - [ ] Base62 Encoding
  - [ ] Short to Long & vice versa mapping
  - [ ] DB schema for fast lookup
  - [ ] Horizontal scaling considerations
  - [ ] Expiry and collision handling

- [ ] Create:
  - [ ] HLD diagram
  - [ ] README with trade-offs
  - [ ] Performance bottlenecks section

---

### 🔹 CS Core: OS & Networking

- [ ] Operating Systems:
  - [ ] Process vs Thread
  - [ ] CPU Scheduling (FCFS, RR, SJF)
  - [ ] Context Switching
- [ ] Computer Networks:
  - [ ] OSI vs TCP/IP Models
  - [ ] TCP 3-way handshake
  - [ ] DNS resolution
  - [ ] CDN, Load Balancing

---

### 🔹 Blog/Content

- [ ] Draft Blog #5: “URL Shortener – Tiny System, Big Design”
- [ ] Create diagrams explaining flow and scaling choices

---

## ⏱️ Daily Breakdown

| Day       | Focus Area                                             |
|-----------|--------------------------------------------------------|
| Thu (Aug 1)   | Read about Load Balancing + Caching + OS Processes     |
| Fri (Aug 2)   | Study Sharding, Replication + Design URL Shortener    |
| Sat (Aug 3)   | Build basic URL Shortener implementation              |
| Sun (Aug 4)   | Add DB logic, expiry & collision handling             |
| Mon (Aug 5)   | Finalize HLD diagram + edge cases                     |
| Tue (Aug 6)   | Write README + performance discussion                 |
| Wed (Aug 7)   | Draft Blog #5 + share visual summary                  |

---

## 🧠 Notes to Self

- Start every design with assumptions + constraints.
- Think like a backend architect, not a coder — scalability is key.
- If you're confused, diagram it — clarity follows visuals.

---

## 📌 Deliverables by End of Week

- [ ] ✅ URL Shortener designed and implemented
- [ ] ✅ HLD diagram and scaling notes completed
- [ ] ✅ OS and CN core topics revised
- [ ] ✅ Blog #5 drafted with clear visuals
- [ ] ✅ GitHub updated with system design README
