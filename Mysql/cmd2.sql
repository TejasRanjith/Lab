DECLARE
  -- message varchar2(1000):= 'Hello';
  A integer(20) := 40;
  B integer(20) := 20;
  C integer(20) := 30;
  Big integer;
BEGIN 
  -- dbms_output.put_line(B+A);
  if a > b then 
    Big:= A;
  else
    Big:=B;
  end if;
END;
/

DECLARE
  -- message varchar2(1000):= 'Hello';
  A integer(20) := 40;
  B integer(20) := 20;
  C integer(20) := 30;
  Big integer;
BEGIN 
  -- dbms_output.put_line(B+A);
  if (a>b and a>c) then
    dbms_output.put_line('Biggest of A,B,C is ' || A);
  elsif (B>C) then
    dbms_output.put_line('Biggest of A,B,C is ' || B);
  else
    dbms_output.put_line('Biggest of A,B,C is ' || C);
  end if;
END;
/
