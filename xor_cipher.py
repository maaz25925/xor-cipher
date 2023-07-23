def xor(message, key):
    return ''.join(chr(ord(c) ^ key) for c in message)

message = input("Enter the message: ")
key = int(input("Enter the key (an integer value): "))

processed_message = xor(message, key)
print("\nProcessed message:", processed_message)

