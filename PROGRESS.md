# PROGRESS.md: Mini exchange + market maker (C++20)

Paste this file (and DECISIONS.md) at the start of a new chat to resume.

## Goal and constraints
- Goal: quant role in the US (ideally NYC). Near-term: quant-adjacent internship, fall 2027 (Seoul / Singapore / Hong Kong / Tokyo).
- This project is the main proof of skill on the resume and GitHub. Realistic advice only, no hype.
- Background: strong maths, Python and SQL. Almost no C++ before this project.
- Hard-ish deadline: project visible on resume by about end of Feb 2027. Sooner is better.
- Budget: 6-8 h/week during semester. Winter break (about Dec 22 to Feb 28) may be higher, to be confirmed.
- Environment: Windows with WSL2 + Ubuntu 24.04. Repo: github.com/odohwa52/mini-exchange (public).

## How we work
- Claude is mentor and code reviewer: design, skeleton, the why. The student writes the core pieces. Claude reviews critically and says plainly when something is weak or wrong.
- Small steps. Claude sometimes asks for a prediction before showing a result.
- End of each stage: interview questions (C++, microstructure, systems, math) plus a short quiz.
- If the student says "just write it", Claude switches to writing the code.
- Answers in English.
- Claude can read the repo but cannot push. The student pushes, then Claude pulls and reviews.

## Plan, Stages 0-2 (dates are targets, slippage expected)
| Wk | Dates | Focus | Hrs | Deliverable | Status |
|---|---|---|---|---|---|
| 1 | Nov 9-15 | 0a: WSL2, g++/clang, CMake, Git, first CMake project | 6 | Repo builds from a clean clone | IN PROGRESS |
| 2 | Nov 16-22 | 0b: Catch2, clang-format/tidy, ASan/UBSan, GitHub Actions | 7 | Green CI, planted sanitizer bug caught | |
| 3 | Nov 23-29 | 1a: matching spec, slow ReferenceBook, unit tests | 7 | ReferenceBook + ~30 tests | |
| 4 | Nov 30-Dec 6 | 1b: real engine v1 (map of levels + id index) | 8 | Engine passes same tests | |
| 5 | Dec 7-13 | 1c: seeded differential fuzzer, invariants; Stage 1 review + quiz | 7 | 1M+ ops match reference | |
| 6 | Dec 14-20 | Finals | 0 | none | |
| 7 | Dec 21-27 | 2a: order-flow generator, benchmarks, p50/p99/p99.9 baseline | 7-8 | Baseline table | |
| 8 | Dec 28-Jan 3 | 2b: perf sampling, flamegraphs, memory layout | 6-7 | Top 3 bottlenecks | |
| 9 | Jan 4-10 | 2c: object pool, flat price-level array | 7 | Before/after | |
| 10 | Jan 11-17 | 2d: intrusive lists, flat id lookup, struct layout | 7 | Before/after | |
| 11 | Jan 18-24 | 2e: final benchmarks, OPTIMISATIONS.md; Stage 2 review + quiz | 6 | Documented results | |
| 12 | Jan 25-31 | Buffer, README v1 with architecture diagram | 5 | Stages 0-2 presentable | |

Stages 3-6 are not scheduled in detail yet. Expectation by end of Feb 2027: Stages 0-3 done, Stage 4 basic or started. More winter-break hours would pull Stage 4 forward.

Optional parallel track: Python L2/trade recorder (Stage 3), started around week 7 if the student has an always-on machine, so real data accumulates in the meantime.

## Current status
- 2026-11-09: Plan agreed. Repo created. WSL2 + Ubuntu 24.04 installed. Toolchain installed: GCC 13.3.0, Clang 18.1.3, CMake 3.28.3, clang-format/tidy 18, gdb, ninja.
- Next: CMake skeleton + sizeof/alignof exercise (predictions BEFORE running), then push.

## Open items
- [ ] Send sizeof/alignof predictions for structs A and B before running.
- [ ] Confirm exact finals dates.
- [ ] Confirm winter-break weekly hours.
- [ ] Always-on machine for the data recorder? (VPS / spare PC)

## Known risks
- Stage 4 is what makes this stand out; Stages 0-2 alone are a common portfolio project. Protect time for Stage 4.
- WSL2 timing noise inflates tail latency; document the environment, optionally rerun on a native Linux box.
- Only list on the resume what is actually done and reproducible.
