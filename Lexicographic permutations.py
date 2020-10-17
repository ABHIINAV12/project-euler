#the largest index where A[i] < A[i + 1]
# -1 if there is no such i where A[i] < A[i + 1]
def get_split_index(A):
    i = len(A) - 1
    while i > 0:
        if A[i] < A[i - 1]:
            i -= 1
        else:
            break
    return i - 1

def get_change_index(A, i):
    j = len(A) - 1
    while j >= i:
        if A[j] > A[i]:
            break
        else:
            j -= 1
    return j

def swap(A, i, j):
    A[i], A[j] = (A[j], A[i])


#reverse A[start:]
def reverse(A, start):
    left = start
    right = len(A) - 1
    while left < right:
        swap(A, left, right)
        left += 1
        right -= 1

def next_permutation(A):
    split_index = get_split_index(A)
    # the Array is sorted in descreased order
    if split_index == -1:
        reverse(A, 0)
    else:
        change_index = get_change_index(A, split_index)
        swap(A, split_index, change_index)
        reverse(A, split_index + 1)


A = [0,1,2,3,4,5,6,7,8,9]

for i in range(1000000-1):
    next_permutation(A)
print(A)