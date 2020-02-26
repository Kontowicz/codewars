def reverse_words(text):
    to_return = []
    for word in text.split(' '):
        to_return.append(word[::-1])
        
    return ' '.join(to_return)

assert reverse_words('The quick brown fox jumps over the lazy dog.') == 'ehT kciuq nworb xof spmuj revo eht yzal .god'
assert reverse_words('apple') == 'elppa'
assert reverse_words('a b c d') == 'a b c d'
assert reverse_words('double  spaced  words') == 'elbuod  decaps  sdrow'

print("Test pass.")