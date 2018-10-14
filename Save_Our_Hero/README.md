# Save\_Our\_Hero

## Problem Description (Shared)

Our hero Daredevil has been captured while fighting the Chinese triads.
The gangs are interrogating him to give up the location of one of their leader i.e. **Finger of the Hand**.

You have to help him stall them for enough time so that your friend **Stick**, the old man comes to save you.

Files Shared -> *is_it_the_flag?.png*

## Setup

The 2 images were combined using the code in stegnography.py and the combination scheme was 5 bits of first image and 3 bits of second in a sample of pixel.
The images and 7z archive was combined directly by using cat.
```sh
$ cat merged_image.png the_flag.7z > is_it_the_flag\?.png
```

## Solution

When you display the image, it won't help you much, so you can try `binwalk` which reveals that file contains a *7-zip* archive file.

```sh
$ binwalk is_it_the_flag\?.png

DECIMAL       HEXADECIMAL     DESCRIPTION
--------------------------------------------------------------------------------
0             0x0             PNG image, 1920 x 1080, 8-bit/color RGB, non-interlaced
41            0x29            Zlib compressed data, default compression
915568        0xDF870         7-zip archive data, version 0.4
```

Now, you try to open the 7-zip archive which will prompt you for a password (since it is encrypted).
So, you go back to the image and putting it through various filters you will find that there is a second image merged with the image that you are seeing (first 5 bits -> image1 and 3 bits -> image2 in a pixel), thus image 2 is not visible.

When you are able to see image2, you will find a quote -> **It is the clever man who plays a fool**.

A simple google search of the text will give you the speaker of the quote -> **madam gao**.

Using **madamgao** as key, a modulo subsitution of the phrase **It is the clever man who plays a fool** (lowering the case and removing spaces) will give you the password for the archive which is -> **oaomaamddmamoammmaegdmgmmeeed**.
