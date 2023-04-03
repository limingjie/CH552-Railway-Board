from PIL import Image, ImageFont, ImageDraw
import numpy
import sys


# Convert character from TTF to bitmap
# fontSize       - font height, 1 pixel
# width & height - bitmap size
def char_to_bitmap(char: str, fontFile: str, fontSize: int, bitmapSize: tuple[int, int]):
    """Convert character from TTF to bitmap

    Keyword arguments:
    char       -- the character to convert
    fontFile   -- the font file path
    fontSize   -- the font size, usually 1 pixel smaller than height to leave character spacing and line spacing
    bitmapSize -- A tuple of (width, height)
    """

    # Create a new black and white image
    img = Image.new('1', bitmapSize, color=1)

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
    for x in range(bitmapSize[0]):
        bits = 0
        for y in range(bitmapSize[1]):
            if arr[y][x] == 0:
                bits |= (1 << y)
        for i in range (bitmapSize[1] // 8):
            bytes.append(bits & 0xFF)
            bits >>= 8

    # Convert the array to uint8_t array
    count = 0
    output_str = ""
    for byte in bytes:
        if count % 16 == 0:
            output_str += "\n    "
        output_str +=f'0x{byte:02x}, '
        count += 1

    # Append the character and hex value
    output_str += "// '" + char + "' 0x" + (f'{ord(char):02x}' if ord(char) < 256 else f'{ord(char):04x}')

    return output_str

def main():
    output = "{"

    # ASCII printable characters from space (0x20) to ~ (0x7E)
    for char in r""" !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_'abcdefghijklmnopqrstuvwxyz{|}~""":
        output += char_to_bitmap(char, "iosevka-term-regular.ttf", 8, (4, 8))

    # Other Unicode characters
    # for char in r"""微处理器""": # "微處理器" / "マイクロプロセッサ"
    #     output += char_to_bitmap(char, "sarasa-mono-sc-regular.ttf", 31, (32, 32))

    output += "\n}"

    print(output)

if __name__ == "__main__":
    main()
