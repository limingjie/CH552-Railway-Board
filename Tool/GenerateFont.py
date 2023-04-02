from PIL import Image, ImageFont, ImageDraw
import numpy
import sys

def char_to_bitmap(char, fontFile, fontSize, width, height):
    # Create a new black and white image
    img = Image.new('1', (width, height), color=1)

    # Get a drawing context for the image
    draw = ImageDraw.Draw(img)

    # Draw the character in the center of the image
    font = ImageFont.truetype(fontFile, fontSize)
    draw.text((0, 0), char, font=font, fill=0)

    # Convert the image to a numpy array
    arr = numpy.array(img)

    # numpy.set_prsintoptions(threshold=sys.maxsize)
    # print(arr)

    # Convert the bitmap line by line into a uint8_t array
    bytes = []
    for x in range(width):
        bits = 0
        for y in range(height):
            if arr[y][x] == 0:
                bits |= (1 << y)
        for i in range (height // 8):
            bytes.append(bits & 0xFF)
            bits >>= 8

    # Convert the array to uint8_t array
    count = 0
    output_str = ""
    for byte in bytes:
        hex_str = hex(byte)[2:].zfill(2)
        if count % 16 == 0:
            output_str += "\n    "
        count += 1
        output_str +="0x" + hex_str + ', '
    output_str += "  // '" + char + "'"

    return output_str

output = "{"
for char in " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_'abcdefghijklmnopqrstuvwxyz{|}~":
    output += char_to_bitmap(char, "iosevka-term-regular.ttf", 8, 4, 8)
output += "\n}"

# output = "{"
# for char in "微处理器":
#     output += char_to_bitmap(char, "sarasa-mono-sc-regular.ttf", 15, 16, 16)
# output += "\n}"

print(output)
