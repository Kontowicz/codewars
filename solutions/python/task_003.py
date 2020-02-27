def FindOutlier(arr):
    even = []
    odd = []
    even_cnt = 0
    odd_cnt = 0
    for item in arr:
        if item % 2 == 1:
            odd_cnt+=1
            odd.append(item)
        else:
            even_cnt+=1
            even.append(item)

    if even_cnt > odd_cnt:
        return odd[0]
    return even[0]



assert FindOutlier([1, 2, 3]) == 2
assert FindOutlier([4, 1, 3, 5, 9]) == 4
assert FindOutlier([2, 3, 4]) == 3

print('All tests pass.')

arr = [1, 2, 3]
print('Outliner for numbers: [{}] is {}'.format(' '.join([str(x) for x in arr]), FindOutlier(arr)))

arr = [4, 1, 3, 5, 9]
print('Outliner for numbers: [{}] is {}'.format(' '.join([str(x) for x in arr]), FindOutlier(arr)))

arr = [2, 3, 4]
print('Outliner for numbers: [{}] is {}'.format(' '.join([str(x) for x in arr]), FindOutlier(arr)))