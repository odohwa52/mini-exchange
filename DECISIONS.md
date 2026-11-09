# DECISIONS.md

Format: ID, date, decision, why, how reversible.

## D-001 (2026-11-09): Develop in WSL2 + Ubuntu 24.04
Why: the sanitizers, clang-tidy, perf and CI all behave like the Linux the CI runs on. Native MSVC would diverge from CI and from what trading firms use. Cost: tail-latency noise from virtualisation, to be documented. Reversible: yes.

## D-002 (2026-11-09): C++20, CMake, GCC and Clang both in CI
Why: C++20 is the realistic baseline for modern codebases; building on two compilers catches portability bugs and different warnings. Reversible: yes, but C++20 is kept for the whole project.

## D-003 (2026-11-09): Catch2 v3 for tests, Google Benchmark for performance
Why: Catch2 has a readable syntax and good generators for the fuzz and property tests; one of Catch2 or GoogleTest had to be picked. Reversible: cheap until about 100 tests exist.

## D-004 (2026-11-09): Public GitHub repo from day one, commit small and often
Why: commit history shows steady work, which a recruiter can see; CI badge and README grow with the project. Reversible: yes.

## D-005 (2026-11-09): Timeline target is end of Feb 2027, with the plan above
Why: student wants the project on the resume for fall 2027 internship applications, and sooner is better. Stages 0-2 take until about the end of January at 6-8 h/week, so Stage 3 plus a basic Stage 4 is the realistic Feb outcome unless winter-break hours go up. Reversible: reviewed at the end of week 5 and again at week 11.

## Proposed, not yet decided (decide in Week 3)
- Prices as integer ticks (int64), quantities as integer lots. Leading option because floating-point prices break equality and ordering in a book.
- Modify semantics: reducing quantity keeps queue priority; changing price or increasing quantity loses it.
- Self-trade handling: ignored in v1 (document it as a limitation).
