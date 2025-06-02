# 📅 June – Week 1 (June 1–7) – Kickoff & Foundation Building

## 🎯 Weekly Goal:
Start strong by building a solid foundation in DSA patterns and gradually build your Low-Level Design (LLD) mindset from OOP concepts to implementing a Rate Limiter.

---

## ✅ Weekly Targets

### 🔹 DSA: Arrays, Strings, Sliding Window, Hash Maps

- [ ] Solve 35 Leetcode problems covering:
  - [ ] Arrays – Easy & Medium
  - [ ] Strings – Parsing, pattern matching
  - [ ] Sliding Window – Longest substring, max sum subarray
  - [ ] Hash Maps – Frequency count, first non-repeating
- [ ] Tag each problem with its pattern in your Notion/Tracker
- [ ] Track time taken per problem and review after every 5

### Recommended Problems:
- [ ] Two Sum
- [ ] Group Anagrams
- [ ] Longest Substring Without Repeating Characters
- [ ] Maximum Subarray
- [ ] Valid Anagram
- [ ] Find All Duplicates in an Array

---

### 🔹 LLD: OOP + SOLID Principles + Rate Limiter

#### 🔸 Step 1: Core OOP Concepts
- [x] Encapsulation, Inheritance, Abstraction, Polymorphism
- [ ] Abstract classes vs Interfaces
- [ ] Composition vs Inheritance
- [ ] Method Overloading vs Overriding

#### 🔸 Step 2: Design Principles (SOLID)
- [ ] **S** – Single Responsibility Principle
- [ ] **O** – Open/Closed Principle
- [ ] **L** – Liskov Substitution Principle
- [ ] **I** – Interface Segregation Principle
- [ ] **D** – Dependency Inversion Principle

#### 🔸 Step 3: Build a Token Bucket-based Rate Limiter
- [ ] Define `IRateLimiter` interface
- [ ] Implement `TokenBucketRateLimiter`
- [ ] Include:
  - Token refill logic
  - Request allowance decision
  - In-memory tracking
- [ ] Unit test edge cases: burst traffic, refill accuracy

#### 🔸 Optional Stretch:
- [ ] Implement `FixedWindowRateLimiter` for comparison
- [ ] Use Strategy Pattern to swap limiter strategies

---

### 🔹 Blog/Content

- [ ] Start draft: “Restarting DSA – Patterns That Matter”
- [ ] Outline learnings from sliding window and hashmap problems
- [ ] Optional: Share GitHub repo link with DSA notes

---

## ⏱️ Daily Breakdown

| Day         | Date       | Focus Area                                         |
|--------------|------------|----------------------------------------------------|
| Sunday       | June 1     | Set up tracker, solve 5 DSA problems               |
| Monday       | June 2     | OOP refresher + abstract class vs interface        |
| Tuesday      | June 3     | SOLID (S, O, L) + DSA HashMap problems             |
| Wednesday    | June 4     | Design `IRateLimiter` + Sliding Window DSA         |
| Thursday     | June 5     | Implement token bucket logic + edge case DSA       |
| Friday       | June 6     | Write unit tests + compare with fixed window       |
| Saturday     | June 7     | Finalize project + write README and weekly recap   |

---

## 🧠 Notes to Self

- LSP is violated if subclass overrides method and breaks base class expectations.
- Don't rush into implementation — sketch logic and flow first.
- Clean commits, meaningful comments, clear docs.

---

## 📌 Deliverables by End of Week

- [ ] ✅ 35 DSA problems solved and tracked
- [ ] ✅ OOP and all 5 SOLID principles reviewed
- [ ] ✅ Token Bucket Rate Limiter implemented and tested
- [ ] ✅ LLD README + architecture explanation written
- [ ] ✅ Blog draft started or notes posted on LinkedIn
