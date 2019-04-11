import os

def main():
  i = 5
  if __debug__:
    i += 1
  if i <= 0:
    return
  c = 'import os\n\ndef main():\n  i = %d\n  if __debug__:\n    i += 1\n  if i <= 0:\n    return\n  c = %r\n  with open(f"Sully_{i - 1}.py", "w") as f:\n    f.write(c %% (i - 1, c))\n  os.system(f"python3 -O Sully_{i - 1}.py")\n\nif __name__ == "__main__":\n  main()\n'
  with open(f"Sully_{i - 1}.py", "w") as f:
    f.write(c % (i - 1, c))
  os.system(f"python3 -O Sully_{i - 1}.py")

if __name__ == "__main__":
  main()
