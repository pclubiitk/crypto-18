#!/bin/ruby

key = "madamegao"
in_string = "It is the clever man who plays a fool"
out_string = ""

in_string.split('').each do |char|
    char.downcase!
    next if char == " "
    index = (char.ord - "a".ord) % key.length
    puts "#{char} -> #{key[index]}"
    out_string += key[index]
end

puts out_string
