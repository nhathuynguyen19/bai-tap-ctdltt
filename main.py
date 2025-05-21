from baitap1 import timMax, daoNguoc, kiemTraDoiXung, insertSort

A = [41, 992, 62, 740, 101, 39, 500]
head = 0
last = len(A) - 1

print("Max:", timMax(A, head, last))
print("Dao nguoc:", daoNguoc(A, head, last))
print("Kiem tra doi xung:", kiemTraDoiXung(A, head, last))
print("Sap xep:", insertSort(A, len(A)))
