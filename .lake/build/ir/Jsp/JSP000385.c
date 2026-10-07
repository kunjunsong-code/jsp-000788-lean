// Lean compiler output
// Module: Jsp.JSP000385
// Imports: Init Init.Data.List.Basic
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_object* l_perm8___closed__6;
static lean_object* l_perm9___closed__9;
static lean_object* l_perm5___closed__4;
static lean_object* l_perm8___closed__3;
uint8_t l_List_all___rarg(lean_object*, lean_object*);
static lean_object* l_perm9___closed__5;
static lean_object* l_perm9___closed__4;
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_perm7___closed__4;
LEAN_EXPORT lean_object* l_perm6;
LEAN_EXPORT lean_object* l_perm10;
static lean_object* l_perm3___closed__1;
static lean_object* l_perm6___closed__5;
LEAN_EXPORT lean_object* l_adjacentSums(lean_object*);
static lean_object* l_perm9___closed__3;
static lean_object* l_perm4___closed__1;
static lean_object* l_perm4___closed__3;
LEAN_EXPORT uint8_t l_isPrime(lean_object*);
static lean_object* l_perm4___closed__2;
static lean_object* l_perm9___closed__1;
static lean_object* l_perm7___closed__6;
LEAN_EXPORT lean_object* l_isPrime___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_perm9___closed__6;
static lean_object* l_perm9___closed__7;
static lean_object* l_perm7___closed__2;
static lean_object* l_perm2___closed__2;
static lean_object* l_perm3___closed__2;
static lean_object* l_perm7___closed__7;
static lean_object* l_perm10___closed__7;
static lean_object* l_perm8___closed__5;
static lean_object* l_perm4___closed__4;
static lean_object* l_perm5___closed__5;
static lean_object* l_perm8___closed__4;
lean_object* l_List_range(lean_object*);
static lean_object* l_perm5___closed__2;
static lean_object* l_perm10___closed__8;
static lean_object* l_perm10___closed__5;
LEAN_EXPORT lean_object* l_perm4;
static lean_object* l_perm8___closed__2;
static lean_object* l_perm6___closed__6;
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_perm5;
LEAN_EXPORT lean_object* l_perm9;
static lean_object* l_perm10___closed__10;
LEAN_EXPORT lean_object* l_perm3;
static lean_object* l_perm8___closed__1;
static lean_object* l_perm6___closed__4;
static lean_object* l_perm8___closed__8;
LEAN_EXPORT uint8_t l_isPrime___lambda__1(lean_object*, lean_object*);
static lean_object* l_perm1___closed__1;
LEAN_EXPORT lean_object* l_perm7;
static lean_object* l_perm6___closed__2;
static lean_object* l_perm5___closed__3;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_perm10___closed__3;
LEAN_EXPORT lean_object* l_perm2;
lean_object* l_List_drop___rarg(lean_object*, lean_object*);
static lean_object* l_perm9___closed__8;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_takeWhileTR_go___at_isPrime___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_perm10___closed__2;
static lean_object* l_perm9___closed__2;
static lean_object* l_perm7___closed__5;
static lean_object* l_perm7___closed__3;
LEAN_EXPORT lean_object* l_isPrime___boxed(lean_object*);
static lean_object* l_perm5___closed__1;
static lean_object* l_perm10___closed__9;
lean_object* lean_nat_mul(lean_object*, lean_object*);
static lean_object* l_perm8___closed__7;
static lean_object* l_perm6___closed__3;
static lean_object* l_perm3___closed__3;
lean_object* lean_array_mk(lean_object*);
static lean_object* l_perm2___closed__1;
LEAN_EXPORT lean_object* l_perm8;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_perm1;
static lean_object* l_isPrime___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_perm10___closed__4;
LEAN_EXPORT lean_object* l_adjacentSumsAllPrime___boxed(lean_object*);
static lean_object* l_perm10___closed__1;
static lean_object* l_perm10___closed__6;
static lean_object* l_perm7___closed__1;
static lean_object* l_perm6___closed__1;
LEAN_EXPORT uint8_t l_adjacentSumsAllPrime(lean_object*);
LEAN_EXPORT lean_object* l_List_takeWhileTR_go___at_isPrime___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_takeWhileTR_go___at_isPrime___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_4);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_nat_mul(x_5, x_5);
x_8 = lean_nat_dec_le(x_7, x_1);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_5);
x_9 = lean_array_to_list(x_4);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_array_push(x_4, x_5);
x_3 = x_6;
x_4 = x_10;
goto _start;
}
}
}
}
LEAN_EXPORT uint8_t l_isPrime___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_nat_mod(x_1, x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
lean_dec(x_3);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
static lean_object* _init_l_isPrime___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_isPrime(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(2u);
x_3 = lean_nat_dec_lt(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_1, x_4);
x_6 = l_List_range(x_5);
x_7 = l_List_drop___rarg(x_2, x_6);
lean_dec(x_6);
x_8 = l_isPrime___closed__1;
lean_inc(x_7);
x_9 = l_List_takeWhileTR_go___at_isPrime___spec__1(x_1, x_7, x_7, x_8);
lean_dec(x_7);
x_10 = lean_alloc_closure((void*)(l_isPrime___lambda__1___boxed), 2, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = l_List_all___rarg(x_9, x_10);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_1);
x_12 = 0;
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_List_takeWhileTR_go___at_isPrime___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_takeWhileTR_go___at_isPrime___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_isPrime___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_isPrime___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_isPrime___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_isPrime(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_adjacentSumsAllPrime(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
lean_dec(x_1);
x_4 = 1;
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
x_9 = lean_nat_add(x_5, x_7);
lean_dec(x_5);
x_10 = l_isPrime(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_free_object(x_3);
lean_dec(x_8);
lean_dec(x_7);
x_11 = 0;
return x_11;
}
else
{
x_1 = x_3;
goto _start;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_15 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_16 = l_isPrime(x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_14);
lean_dec(x_13);
x_17 = 0;
return x_17;
}
else
{
lean_object* x_18; 
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_14);
x_1 = x_18;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_adjacentSumsAllPrime___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_adjacentSumsAllPrime(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_adjacentSums(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
lean_dec(x_7);
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_nat_add(x_6, x_9);
lean_dec(x_6);
x_11 = l_adjacentSums(x_3);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_10);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
x_14 = lean_nat_add(x_6, x_12);
lean_dec(x_6);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_13);
x_16 = l_adjacentSums(x_15);
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_ctor_get(x_3, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_3, 1);
lean_inc(x_19);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_20 = x_3;
} else {
 lean_dec_ref(x_3);
 x_20 = lean_box(0);
}
x_21 = lean_nat_add(x_17, x_18);
lean_dec(x_17);
if (lean_is_scalar(x_20)) {
 x_22 = lean_alloc_ctor(1, 2, 0);
} else {
 x_22 = x_20;
}
lean_ctor_set(x_22, 0, x_18);
lean_ctor_set(x_22, 1, x_19);
x_23 = l_adjacentSums(x_22);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
static lean_object* _init_l_perm1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_perm1() {
_start:
{
lean_object* x_1; 
x_1 = l_perm1___closed__1;
return x_1;
}
}
static lean_object* _init_l_perm2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(2u);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_perm2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_perm2___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm2() {
_start:
{
lean_object* x_1; 
x_1 = l_perm2___closed__2;
return x_1;
}
}
static lean_object* _init_l_perm3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(3u);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_perm3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_perm3___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_perm3___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm3() {
_start:
{
lean_object* x_1; 
x_1 = l_perm3___closed__3;
return x_1;
}
}
static lean_object* _init_l_perm4___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(4u);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_perm4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = l_perm4___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_perm4___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm4___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_perm4___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm4() {
_start:
{
lean_object* x_1; 
x_1 = l_perm4___closed__4;
return x_1;
}
}
static lean_object* _init_l_perm5___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(5u);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_perm5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_perm5___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm5___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = l_perm5___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm5___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = l_perm5___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm5___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_perm5___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm5() {
_start:
{
lean_object* x_1; 
x_1 = l_perm5___closed__5;
return x_1;
}
}
static lean_object* _init_l_perm6___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(6u);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_perm6___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(5u);
x_2 = l_perm6___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm6___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_perm6___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm6___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = l_perm6___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm6___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = l_perm6___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm6___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_perm6___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm6() {
_start:
{
lean_object* x_1; 
x_1 = l_perm6___closed__6;
return x_1;
}
}
static lean_object* _init_l_perm7___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(7u);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_perm7___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(6u);
x_2 = l_perm7___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm7___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(5u);
x_2 = l_perm7___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm7___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_perm7___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm7___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = l_perm7___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm7___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = l_perm7___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm7___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_perm7___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm7() {
_start:
{
lean_object* x_1; 
x_1 = l_perm7___closed__7;
return x_1;
}
}
static lean_object* _init_l_perm8___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(8u);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_perm8___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(5u);
x_2 = l_perm8___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm8___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(6u);
x_2 = l_perm8___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm8___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(7u);
x_2 = l_perm8___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm8___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = l_perm8___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm8___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = l_perm8___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm8___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_perm8___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm8___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_perm8___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm8() {
_start:
{
lean_object* x_1; 
x_1 = l_perm8___closed__8;
return x_1;
}
}
static lean_object* _init_l_perm9___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(9u);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_perm9___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_perm9___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm9___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(5u);
x_2 = l_perm9___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm9___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(6u);
x_2 = l_perm9___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm9___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(7u);
x_2 = l_perm9___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm9___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = l_perm9___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm9___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = l_perm9___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm9___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_perm9___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm9___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_perm9___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm9() {
_start:
{
lean_object* x_1; 
x_1 = l_perm9___closed__9;
return x_1;
}
}
static lean_object* _init_l_perm10___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(10u);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_perm10___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(9u);
x_2 = l_perm10___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm10___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_perm10___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm10___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(5u);
x_2 = l_perm10___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm10___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(6u);
x_2 = l_perm10___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm10___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(7u);
x_2 = l_perm10___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm10___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = l_perm10___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm10___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = l_perm10___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm10___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_perm10___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm10___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_perm10___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_perm10() {
_start:
{
lean_object* x_1; 
x_1 = l_perm10___closed__10;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_List_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Jsp_JSP000385(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_isPrime___closed__1 = _init_l_isPrime___closed__1();
lean_mark_persistent(l_isPrime___closed__1);
l_perm1___closed__1 = _init_l_perm1___closed__1();
lean_mark_persistent(l_perm1___closed__1);
l_perm1 = _init_l_perm1();
lean_mark_persistent(l_perm1);
l_perm2___closed__1 = _init_l_perm2___closed__1();
lean_mark_persistent(l_perm2___closed__1);
l_perm2___closed__2 = _init_l_perm2___closed__2();
lean_mark_persistent(l_perm2___closed__2);
l_perm2 = _init_l_perm2();
lean_mark_persistent(l_perm2);
l_perm3___closed__1 = _init_l_perm3___closed__1();
lean_mark_persistent(l_perm3___closed__1);
l_perm3___closed__2 = _init_l_perm3___closed__2();
lean_mark_persistent(l_perm3___closed__2);
l_perm3___closed__3 = _init_l_perm3___closed__3();
lean_mark_persistent(l_perm3___closed__3);
l_perm3 = _init_l_perm3();
lean_mark_persistent(l_perm3);
l_perm4___closed__1 = _init_l_perm4___closed__1();
lean_mark_persistent(l_perm4___closed__1);
l_perm4___closed__2 = _init_l_perm4___closed__2();
lean_mark_persistent(l_perm4___closed__2);
l_perm4___closed__3 = _init_l_perm4___closed__3();
lean_mark_persistent(l_perm4___closed__3);
l_perm4___closed__4 = _init_l_perm4___closed__4();
lean_mark_persistent(l_perm4___closed__4);
l_perm4 = _init_l_perm4();
lean_mark_persistent(l_perm4);
l_perm5___closed__1 = _init_l_perm5___closed__1();
lean_mark_persistent(l_perm5___closed__1);
l_perm5___closed__2 = _init_l_perm5___closed__2();
lean_mark_persistent(l_perm5___closed__2);
l_perm5___closed__3 = _init_l_perm5___closed__3();
lean_mark_persistent(l_perm5___closed__3);
l_perm5___closed__4 = _init_l_perm5___closed__4();
lean_mark_persistent(l_perm5___closed__4);
l_perm5___closed__5 = _init_l_perm5___closed__5();
lean_mark_persistent(l_perm5___closed__5);
l_perm5 = _init_l_perm5();
lean_mark_persistent(l_perm5);
l_perm6___closed__1 = _init_l_perm6___closed__1();
lean_mark_persistent(l_perm6___closed__1);
l_perm6___closed__2 = _init_l_perm6___closed__2();
lean_mark_persistent(l_perm6___closed__2);
l_perm6___closed__3 = _init_l_perm6___closed__3();
lean_mark_persistent(l_perm6___closed__3);
l_perm6___closed__4 = _init_l_perm6___closed__4();
lean_mark_persistent(l_perm6___closed__4);
l_perm6___closed__5 = _init_l_perm6___closed__5();
lean_mark_persistent(l_perm6___closed__5);
l_perm6___closed__6 = _init_l_perm6___closed__6();
lean_mark_persistent(l_perm6___closed__6);
l_perm6 = _init_l_perm6();
lean_mark_persistent(l_perm6);
l_perm7___closed__1 = _init_l_perm7___closed__1();
lean_mark_persistent(l_perm7___closed__1);
l_perm7___closed__2 = _init_l_perm7___closed__2();
lean_mark_persistent(l_perm7___closed__2);
l_perm7___closed__3 = _init_l_perm7___closed__3();
lean_mark_persistent(l_perm7___closed__3);
l_perm7___closed__4 = _init_l_perm7___closed__4();
lean_mark_persistent(l_perm7___closed__4);
l_perm7___closed__5 = _init_l_perm7___closed__5();
lean_mark_persistent(l_perm7___closed__5);
l_perm7___closed__6 = _init_l_perm7___closed__6();
lean_mark_persistent(l_perm7___closed__6);
l_perm7___closed__7 = _init_l_perm7___closed__7();
lean_mark_persistent(l_perm7___closed__7);
l_perm7 = _init_l_perm7();
lean_mark_persistent(l_perm7);
l_perm8___closed__1 = _init_l_perm8___closed__1();
lean_mark_persistent(l_perm8___closed__1);
l_perm8___closed__2 = _init_l_perm8___closed__2();
lean_mark_persistent(l_perm8___closed__2);
l_perm8___closed__3 = _init_l_perm8___closed__3();
lean_mark_persistent(l_perm8___closed__3);
l_perm8___closed__4 = _init_l_perm8___closed__4();
lean_mark_persistent(l_perm8___closed__4);
l_perm8___closed__5 = _init_l_perm8___closed__5();
lean_mark_persistent(l_perm8___closed__5);
l_perm8___closed__6 = _init_l_perm8___closed__6();
lean_mark_persistent(l_perm8___closed__6);
l_perm8___closed__7 = _init_l_perm8___closed__7();
lean_mark_persistent(l_perm8___closed__7);
l_perm8___closed__8 = _init_l_perm8___closed__8();
lean_mark_persistent(l_perm8___closed__8);
l_perm8 = _init_l_perm8();
lean_mark_persistent(l_perm8);
l_perm9___closed__1 = _init_l_perm9___closed__1();
lean_mark_persistent(l_perm9___closed__1);
l_perm9___closed__2 = _init_l_perm9___closed__2();
lean_mark_persistent(l_perm9___closed__2);
l_perm9___closed__3 = _init_l_perm9___closed__3();
lean_mark_persistent(l_perm9___closed__3);
l_perm9___closed__4 = _init_l_perm9___closed__4();
lean_mark_persistent(l_perm9___closed__4);
l_perm9___closed__5 = _init_l_perm9___closed__5();
lean_mark_persistent(l_perm9___closed__5);
l_perm9___closed__6 = _init_l_perm9___closed__6();
lean_mark_persistent(l_perm9___closed__6);
l_perm9___closed__7 = _init_l_perm9___closed__7();
lean_mark_persistent(l_perm9___closed__7);
l_perm9___closed__8 = _init_l_perm9___closed__8();
lean_mark_persistent(l_perm9___closed__8);
l_perm9___closed__9 = _init_l_perm9___closed__9();
lean_mark_persistent(l_perm9___closed__9);
l_perm9 = _init_l_perm9();
lean_mark_persistent(l_perm9);
l_perm10___closed__1 = _init_l_perm10___closed__1();
lean_mark_persistent(l_perm10___closed__1);
l_perm10___closed__2 = _init_l_perm10___closed__2();
lean_mark_persistent(l_perm10___closed__2);
l_perm10___closed__3 = _init_l_perm10___closed__3();
lean_mark_persistent(l_perm10___closed__3);
l_perm10___closed__4 = _init_l_perm10___closed__4();
lean_mark_persistent(l_perm10___closed__4);
l_perm10___closed__5 = _init_l_perm10___closed__5();
lean_mark_persistent(l_perm10___closed__5);
l_perm10___closed__6 = _init_l_perm10___closed__6();
lean_mark_persistent(l_perm10___closed__6);
l_perm10___closed__7 = _init_l_perm10___closed__7();
lean_mark_persistent(l_perm10___closed__7);
l_perm10___closed__8 = _init_l_perm10___closed__8();
lean_mark_persistent(l_perm10___closed__8);
l_perm10___closed__9 = _init_l_perm10___closed__9();
lean_mark_persistent(l_perm10___closed__9);
l_perm10___closed__10 = _init_l_perm10___closed__10();
lean_mark_persistent(l_perm10___closed__10);
l_perm10 = _init_l_perm10();
lean_mark_persistent(l_perm10);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
