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


DECLARE
  Grade char(10) := 'B';
BEGIN 
  -- dbms_output.put_line(B+A);
  CASE Grade
    when 'A' then dbms_output.put_line('Excellent');
    when 'B' then dbms_output.put_line('Very Good');
    when 'C' then dbms_output.put_line('Well Done');
    when 'D' then dbms_output.put_line('You Passed');
    when 'E' then dbms_output.put_line('Better Luck next Time');
    else dbms_output.put_line('Invalid Grade');
  END CASE;
END;
/
