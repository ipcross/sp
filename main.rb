tokens = []
while string = gets do
   string.split().each do |token|
      tokens << token
   end
end
tokens.reverse.each do |token|
   puts (token.to_i ** 0.5).round(4) 
end
