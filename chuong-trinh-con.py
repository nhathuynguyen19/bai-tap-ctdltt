# Bài tập 1 - Bài 1.1 tìm giá trị lớn nhất trong mảng A theo phương pháp đệ quy
def timMax(A, head, last):
    if head < last - 1:
        return max (A[head], timMax(A, head + 1, last))
    else:
        return max(A[head], A[last])
        

A = [41, 992, 62, 740, 101, 39, 500]
head = 0
last = len(A) - 1

print("Max:", timMax(A, head, last))