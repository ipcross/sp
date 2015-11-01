matr=[]
8.times{matr<<gets.split("")}
a,b=9,9

8.times do |j|
  tmp=0
  8.times do |i|
    if matr[i][j] == "W"
      tmp=i
      a=[tmp,a].min
      break
    elsif matr[i][j] == "B"
      break
    end
  end
end

8.times do |j|
  tmp=0
   (0..7).to_a.reverse.each do |i|
    if matr[i][j] == "B"
      tmp=7-i
    b=[tmp,b].min
      break
    elsif matr[i][j] == "W"
      break
    end
  end
end

puts a>b ? "B" : "A"
