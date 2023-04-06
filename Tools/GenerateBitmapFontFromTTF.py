from PIL import Image, ImageFont, ImageDraw
import numpy
import sys


def char_to_bitmap(char: str, font_file: str, font_size: int, bitmap_size: tuple[int, int]):
    """Convert character from TTF to bitmap

    Keyword arguments:
    char        -- the character to convert
    font_file   -- the TrueType font file
    font_size   -- the font size, usually 1 pixel smaller than height to leave character spacing and line spacing
    bitmap_size -- A tuple of (width, height)
    """

    # Create a new black and white image
    img = Image.new('1', bitmap_size, color=1)

    # Get a drawing context for the image
    draw = ImageDraw.Draw(img)

    # Draw the character in the center of the image
    font = ImageFont.truetype(font_file, font_size)
    draw.text((0, -2), char, fill=0, font=font)

    # Convert the image to a numpy array
    arr = numpy.array(img)

    # numpy.set_prsintoptions(threshold=sys.maxsize)
    # print(arr)

    # Convert the bitmap line by line into a uint8_t array
    bytes = []
    for x in range(bitmap_size[0]):
        bits = 0
        for y in range(bitmap_size[1]):
            if arr[y][x] == 0:
                bits |= (1 << y)
        for i in range(bitmap_size[1] // 8):
            bytes.append(bits & 0xFF)
            bits >>= 8

    # Convert the array to uint8_t array
    count = 0
    output = "\n"
    for byte in bytes:
        # if count % 16 == 0:
        #     output += "\n    "
        output += f'{byte:#04x}, '
        count += 1

    # Append the character and hex value
    output += f"// '{char}' {ord(char):#0{4 if ord(char) < 256 else 6}x}"

    return output


def main():
    output = "{"

    # # Printable ASCII characters from space (0x20) to ~ (0x7E)
    # for char in r""" !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_'abcdefghijklmnopqrstuvwxyz{|}~""":
    #     output += char_to_bitmap(char, "iosevka-term-regular.ttf", 15, (8, 16))

    # Unicode characters
    for char in r"""　⇐⇒北京上海秦皇岛大连广州""":
        output += char_to_bitmap(char, "sarasa-mono-sc-regular.ttf", 15, (16, 16))

    output += "\n}"

    print(output)


if __name__ == "__main__":
    main()
