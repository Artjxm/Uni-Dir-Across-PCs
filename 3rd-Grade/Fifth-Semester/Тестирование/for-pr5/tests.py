from crypt import Coder, Decoder, Hangman

def test_coder():
    assert Coder.coder("СУПЕР СЕКРЕТНОЕ СООБЩЕНИЕ", "ЛАДЬЯ") == "УСТСЕПЕНОНС Е ЩЕКООИРРЕБЕ"

def test_decoder():
    assert Decoder.decoder("УСТСЕПЕНОНС Е ЩЕКООИРРЕБЕ", "ЛАДЬЯ") == "СУПЕР СЕКРЕТНОЕ СООБЩЕНИЕ"

def test_hangman():
    assert Hangman.hangman() == 0