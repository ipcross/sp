var
  n, i, j, k : integer;
  a: longint;
  s1 : array [1..1000] of string[8];
  s2 : array [1..1000] of string[23];
  s, b, c : string;
begin
  assign(input, 'input.txt'); reset(input);
  assign(output, 'output.txt'); rewrite(output);
  readln(n);
  for i:=1 to n do
  begin
    readln(s); s1[i]:=s;
    a:=0; k:=1;
    while s[k]<>' ' do begin
      a:=a*10+ord(s[k])-48; k:=k+1 end;
     k:=k+1; b:='';
     if s[k] in ['m','k','M','G'] then
     begin
       if s[k]='k' then b:='000000';
       if s[k]='M' then b:='000000000';
       if s[k]='G' then b:='000000000000';
       k:=k+1
     end;
     if s[k]='g' then begin c:=''; if s[k-1]=' ' then c:='000' end;
     if s[k]='p' then begin a:=a*16380; c:=''; if s[k-1]=' ' then c:='000' end;
     if s[k]='t' then begin c:='000000'; if s[k-1]=' ' then c:='000000000' end;
     s:=''; while a>0 do begin s:=chr(a mod 10+48)+s; a:=a div 10 end;
     s:=s+b+c;
     while length(s)<23 do s:='0'+s;
     s2[i]:=s
  end;
  for i:=1 to n-1 do
     for j:=1 to n-i do
       if s2[j]>s2[j+1] then
       begin s:=s2[j]; s2[j]:=s2[j+1]; s2[j+1]:=s;
              s:=s1[j]; s1[j]:=s1[j+1]; s1[j+1]:=s end;
  for i:= 1 to n do
     writeln(s1[i]);
  close(output)
end.
