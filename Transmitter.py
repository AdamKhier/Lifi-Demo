# Define the mapping dictionaries
text_to_binary = {
    'a': '01100001', 'A': '01000001', 'b': '01100010', 'B': '01000010',
    'c': '01100011', 'C': '01000011', 'd': '01100100', 'D': '01000100',
    'e': '01100101', 'E': '01000101', 'f': '01100110', 'F': '01000110',
    'g': '01100111', 'G': '01000111', 'h': '01101000', 'H': '01001000',
    'i': '01101001', 'I': '01001001', 'j': '01101010', 'J': '01001010',
    'k': '01101011', 'K': '01001011', 'l': '01101100', 'L': '01001100',
    'm': '01101101', 'M': '01001101', 'n': '01101110', 'N': '01001110',
    'o': '01101111', 'O': '01001111', 'p': '01110000', 'P': '01010000',
    'q': '01110001', 'Q': '01010001', 'r': '01110010', 'R': '01010010',
    's': '01110011', 'S': '01010011', 't': '01110100', 'T': '01010100',
    'u': '01110101', 'U': '01010101', 'v': '01110110', 'V': '01010110',
    'w': '01110111', 'W': '01010111', 'x': '01111000', 'X': '01011000',
    'y': '01111001', 'Y': '01011001', 'z': '01111010', 'Z': '01011010',
    ' ': '00100000', '!': '00100001'
}

binary_to_text = {v: k for k, v in text_to_binary.items()}

# Function to translate text to binary
def text_to_binary_translator(text):
    return ' '.join(text_to_binary[char] for char in text)

# Function to translate binary to text
def binary_to_text_translator(binary):
    return ''.join(binary_to_text[b] for b in binary.split())

# Example usage
input_text = input("What text would you like to translate: ")
binary_output = text_to_binary_translator(input_text)
print("Text to Binary:", binary_output)
