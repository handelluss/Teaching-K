def dp(cur, end):
    if cur == end:
        return 1
    elif cur > end or cur == 14:
        return 0
    else:
        return dp(cur+1, end) + dp(cur+3, end)

print(dp(2,9) * dp(9, 18))
