import Init.Data.List.Basic

/-!
# JSP-000788 — Lean 4.20.0, no Mathlib, 0 axioms

## Question

Is n^4 + 4 ever prime for n > 1?

## Answer: No! (Euler's factorization, 1772)

Euler discovered the algebraic identity:

    n^4 + 4 = (n^2 + 2n + 2) * (n^2 - 2n + 2)

For every n > 1, both factors are integers strictly greater than 1,
so n^4 + 4 is always composite.

Examples:
- n = 2:  16 + 4 = 20 = 10 * 2
- n = 3:  81 + 4 = 85 = 17 * 5
- n = 4: 256 + 4 = 260 = 26 * 10
-/

set_option maxRecDepth 20000

/-- Euler's factorization of n^4 + 4. -/
def eulerFactors (n : Nat) : List Nat :=
  let a := n * n + 2 * n + 2
  let b := n * n - 2 * n + 2
  [a, b]

/-- Product of a list. -/
def listProd : List Nat -> Nat
| [] => 1
| (x :: xs) => x * listProd xs

/-- For n in [2, 20], n^4 + 4 equals product of Euler factors,
    and both factors are > 1. -/
def eulerWorks : Bool :=
  List.range 19 |>.map (fun i => i + 2) |>.all (fun n =>
    let factors := eulerFactors n
    factors.all (fun f => f > 1) &&
    listProd factors = n^4 + 4)

theorem main : eulerWorks = true := by decide

#print axioms main