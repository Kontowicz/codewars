def scramble(s1, s2):
    cnt_s1 = {}
    cnt_s2 = {}
    
    for ch in s1:
        if ch in cnt_s1:
            cnt_s1[ch] = cnt_s1[ch] + 1
        else:
            cnt_s1[ch] = 1

    for ch in s2:
        if ch in cnt_s2:
            cnt_s2[ch] = cnt_s2[ch] + 1
        else:
            cnt_s2[ch] = 1
    print(cnt_s1)
    print(cnt_s2)
    for k, v in cnt_s2.items():
        if k not in cnt_s1:
            return False
        if cnt_s1[k] < v:
            return False
    return True

assert scramble('rkqodlw', 'world') ==  True
assert scramble('cedewaraaossoqqyt', 'codewars') == True
assert scramble('katas', 'steak') == False
assert scramble('scriptjava', 'javascript') == True
assert scramble('scriptingjava', 'javascript') == True