//Implementation 1

L = 0
R = N - 1
while L <= R:
  mid = L + (R - L) / 2   //should be floor
  if a[mid] == target:
    return mid
  if a[mid] < target:
    L = mid  + 1
  else:
    R = mid - 1
return -1
      
//Implementation 2

L = 0
R = N - 1
ans = -1
while L <= R:
  mid = L + (R - L) / 2
  if a[mid] >= target:
    ans = mid
    R = mid - 1
  else:
    L = mid + 1
return ans
