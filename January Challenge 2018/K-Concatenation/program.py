def maxSubArraySum(a,size):    
    max_so_far =a[0]
    curr_max = a[0]
     
    for i in range(1,size):
        curr_max = max(a[i], curr_max + a[i])
        max_so_far = max(max_so_far,curr_max)
         
    return max_so_far

t = int(input())
for i in range(t):
    arr = list(map(int, input().split()))
    ele = list(map(int, input().split()))
    ele = ele * arr[1]
    #print(ele)
    print(maxSubArraySum(ele,arr[0]*arr[1]))
