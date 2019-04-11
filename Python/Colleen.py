# Useless Function
def func():
  pass

if __name__ == "__main__":
  # Main Function
  func()
  c = '# Useless Function\ndef func():\n  pass\n\nif __name__ == "__main__":\n  # Main Function\n  func()\n  c = %r\n  print(c %% c)'
  print(c % c)
