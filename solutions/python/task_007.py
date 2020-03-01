def spin_words(sentence):
    to_return = []
    
    for word in sentence.split(' '):
        if len(word) >= 5:
            to_return.append(word[::-1])
            continue
        to_return.append(word)
    
    return ' '.join(to_return)

assert spin_words("Welcome") == "emocleW"
print('Test pass.')