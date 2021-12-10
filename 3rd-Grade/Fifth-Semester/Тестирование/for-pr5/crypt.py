from itertools import zip_longest

class Coder:
    def coder(msg, key):
        lmsg = len(msg)
        lkey = len(key)
        tmp = dict((k, msg[i:lmsg:lkey]) for i, k in enumerate(key))
        return "".join(tmp[x] for x in sorted(key))

class Decoder:
    def decoder(msg, key):
        lmsg = len(msg)
        lkey = len(key)

        d, m = divmod(lmsg, lkey)
        group = dict((k, d) for k in key)
        for i in range(m):
            group[key[i]] += 1

        tmp = {}
        for k in sorted(key):
            tmp[k], msg = msg[:group[k]], msg[group[k]:]
        return("".join("".join(x) for x in zip_longest(*(tmp[k] for k in key), fillvalue="")))

class Hangman:
    def hangman():
        word = 'ЛАДЬЯ'
        flag = False
        health = 10
        test=False
        used_letters=""
        win_word=[]
        len_word=len(word)

        for i in range(len(word)):
            win_word+="_"
        
        while len_word != 0 and health != 0:
            test = False

            while True:
                letter = input("\nВаша буква: ")
                if letter in used_letters or len(letter)>1:
                    print("\nНе больше одного символа, попробуйте снова!")
                else:
                    used_letters+=letter
                    break
            count=0
            for i in word:
                if letter in i:
                    len_word -= 1
                    test=True
                    win_word[count]=letter
                count+=1
            if not test:
                health -= 1
                print("Неверно")
            else:
                print("Верно")
                print(win_word)
        
            print("Ваше здоровье = ", health)
        
        if(len_word == 0):
            
            flag = True
            print("\nИтоговый ключ: ", word.upper())
        else:
            print("\nВ попытках отказано, попробуйте снова!")
        return 0
