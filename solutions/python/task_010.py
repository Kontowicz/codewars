def anagrams(word, words):
    to_return = []
    
    word_set = {}
    for ch in word:
        if ch in word_set:
            word_set[ch] = word_set[ch] + 1
        else:
            word_set[ch] = 1
    
    for w in words:
        tmp = {}
        for ch in w:
            if ch in tmp:
                tmp[ch] = tmp[ch] + 1
            else:
                tmp[ch] = 1

        if tmp == word_set:
            to_return.append(w)
    
    return to_return

assert anagrams('abba', ['aabb', 'abcd', 'bbaa', 'dada']) == ['aabb', 'bbaa']
assert anagrams('racer', ['crazer', 'carer', 'racar', 'caers', 'racer']) == ['carer', 'racer']
print('Test pass.')