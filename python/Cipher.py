def vigenere(message, key, direction):
    key_index = 0
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    final_message = ''

    for char in message.lower():
        # Append any non-letter character to the message
        if not char.isalpha():
            final_message += char
        else:
            # Find the right key character to encode/decode
            key_char = key[key_index % len(key)]
            key_index += 1

            # Define the offset and the encrypted/decrypted letter
            offset = alphabet.index(key_char)
            index = alphabet.index(char)
            new_index = (index + offset * direction) % len(alphabet)
            final_message += alphabet[new_index]

    return final_message

def encrypt(message, key):
    return vigenere(message, key, 1)

def decrypt(message, key):
    return vigenere(message, key, -1)

# Get user input
text = str(input('Write a sentence: '))
custom_key = str(input('Write a custom key: '))
direction = int(input('Type 1 for encryption and -1 for decryption: '))

# Encrypt or decrypt the message
if direction == 1:
    encrypted_text = encrypt(text, custom_key)
    print(f'\nEncrypted text: {encrypted_text}')
elif direction == -1:
    decrypted_text = decrypt(text, custom_key)
    print(f'\nDecrypted text: {decrypted_text}')
else:
    print('Invalid direction. Please type 1 for encryption or -1 for decryption.')
