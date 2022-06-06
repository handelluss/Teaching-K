def dp(cur, end):
    if cur == end:
        return 1
    elif cur > end:
        return 0
    else:
        return dp(cur+1, end) + dp(cur*2, end)
    

print(dp(1, 10) * dp(10, 20))
