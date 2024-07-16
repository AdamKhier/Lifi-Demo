UIn == input("What would you like to send")

# Dictionary mapping characters to their binary representation
char_to_binary = {
    'a': '01100001', 'A': '01000001',
    'b': '01100010', 'B': '01000010',
    'c': '01100011', 'C': '01000011',
    'd': '01100100', 'D': '01000100',
    'e': '01100101', 'E': '01000101',
    'f': '01100110', 'F': '01000110',
    'g': '01100111', 'G': '01000111',
    'h': '01101000', 'H': '01001000',
    'i': '01101001', 'I': '01001001',
    'j': '01101010', 'J': '01001010',
    'k': '01101011', 'K': '01001011',
    'l': '01101100', 'L': '01001100',
    'm': '01101101', 'M': '01001101',
    'n': '01101110', 'N': '01001110',
    'o': '01101111', 'O': '01001111',
    'p': '01110000', 'P': '01010000',
    'q': '01110001', 'Q': '01010001',
    'r': '01110010', 'R': '01010010',
    's': '01110011', 'S': '01010011',
    't': '01110100', 'T': '01010100',
    'u': '01110101', 'U': '01010101',
    'v': '01110110', 'V': '01010110',
    'w': '01110111', 'W': '01010111',
    'x': '01111000', 'X': '01011000',
    'y': '01111001', 'Y': '01011001',
    'z': '01111010', 'Z': '01011010',
    ' ': '00100000', '!': '00100001'
}

# Dictionary for binary to character mapping
binary_to_char = {v: k for k, v in char_to_binary.items()}

# Function to convert text to binary
def text_to_binary(text):
    binary_result = ''.join(char_to_binary[char] + ' ' for char in text)
    return binary_result.strip()

# Function to convert binary to text
def binary_to_text(binary):
    binary_values = binary.split()
    text_result = ''.join(binary_to_char[binary_value] for binary_value in binary_values)
    return text_result

# Example usage
UIn == input("What would you like to send")
binary = text_to_binary(UIn)
print(f'Text to Binary: {binary}')

reverted_text = binary_to_text(binary)
print(f'Binary to Text: {reverted_text}')
