# 📅 August – Week 3 (Aug 15–21) – File Storage System & Advanced CS Core

## 🎯 Weekly Goal:
Design and implement a scalable file storage system while diving deeper into DBMS anomalies and CN internals. Continue building your System Design arsenal with a focus on trade-offs and distributed architecture thinking.

---

## ✅ Weekly Targets

### 🔹 System Design: File Storage System (e.g., Dropbox Lite)

- [ ] Design components:
  - [ ] Chunking large files
  - [ ] Metadata service (stores fileID, size, owner, chunks)
  - [ ] Upload & Download Service
  - [ ] Storage Layer (simulate S3/local disk)
  - [ ] Versioning (optional stretch)

- [ ] Think about:
  - [ ] Horizontal scaling
  - [ ] Fault tolerance
  - [ ] Write amplification & retries

- [ ] Deliverables:
  - [ ] HLD diagram
  - [ ] README with performance considerations
  - [ ] Sample usage script

---

### 🔹 CS Core: DBMS + CN Deep Dive

- [ ] DBMS:
  - [ ] Isolation levels (Read Uncommitted → Serializable)
  - [ ] Anomalies (Lost Update, Dirty Read, Phantom Read)
  - [ ] Transaction locking

- [ ] CN:
  - [ ] TLS Handshake in detail
  - [ ] DNS resolution path
  - [ ] Load balancing strategies (RR, IP Hashing, Least Connections)

---

### 🔹 Light DSA Touch (3 sessions)

- [ ] Solve 6–8 mixed problems this week:
  - [ ] 2 DP
  - [ ] 2 Graph
  - [ ] 2 Sliding Window / Two Pointers
- [ ] Participate in 1 Leetcode contest (optional)

---

### 🔹 Blog/Content

- [ ] Start Blog #7: “Inside a File Storage System”
- [ ] Diagram: Upload → Chunk → Store → Retrieve Flow

---

## ⏱️ Daily Breakdown

| Day       | Focus Area                                               |
|-----------|----------------------------------------------------------|
| Thu (Aug 15)  | DBMS Anomalies + Chunking logic for File Storage       |
| Fri (Aug 16)  | Upload/Download APIs + TLS handshake deep dive         |
| Sat (Aug 17)  | Implement Metadata Service + DNS internals             |
| Sun (Aug 18)  | Finish services + CN: Load Balancer techniques         |
| Mon (Aug 19)  | DSA revision + prepare system test cases               |
| Tue (Aug 20)  | HLD Diagram + finalize README                          |
| Wed (Aug 21)  | Blog draft + code push                                 |

---

## 🧠 Notes to Self

- Think in terms of **read vs write optimization** for file storage.
- Build systems assuming **partial failures**.
- Revisit Leetcode problems you got wrong this month and annotate why.

---

## 📌 Deliverables by End of Week

- [ ] ✅ File Storage System (chunked, fault-tolerant MVP)
- [ ] ✅ DBMS: Isolation & Transactions understood
- [ ] ✅ CN: TLS, DNS, Load Balancing reviewed
- [ ] ✅ 6–8 mixed DSA problems solved
- [ ] ✅ Blog #7 drafted
- [ ] ✅ GitHub updated with HLD and README
