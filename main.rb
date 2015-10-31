$m=100000
$n = gets.to_i
$a = gets.split.map!{|i| i.to_i}

def f(i, q1, q2)
  if(i == $n)
    $m = [$m, (q1-q2).abs].min
  else
    f(i+1,q1+$a[i],q2)
    f(i+1,q1,q2+$a[i])
  end
end

f(0, 0, 0)
puts $m
