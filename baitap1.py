# 1.1 tìm giá trị lớn nhất trong mảng A theo phương pháp đệ quy
def timMax(A, head, last):
    if head < last - 1:
        return max (A[head], timMax(A, head + 1, last))
    else:
        return max(A[head], A[last])

# Đảo ngược dãy A
def daoNguoc(A, head, last):
    if head < last:
        A[head], A[last] = A[last], A[head]
        return daoNguoc(A, head + 1, last - 1)
    else:
        return A

# Kiểm tra đối xứng
def kiemTraDoiXung(A, head, last):
    if head < last:
        if A[head] != A[last]:
            return False
        else:
            return kiemTraDoiXung(A, head + 1, last - 1)
    else:
        return True

