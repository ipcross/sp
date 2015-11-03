def fun(n)
  return 10 if n==0
  return 1 if n==1
  q=0
  p=1
  9.downto(2) do |div|
    while (n%div)==0
      q+=p*div
      p=p*10
      n/=div
    end
  end
  return (n==1) ? q : -1
end

puts fun(gets.to_i)
