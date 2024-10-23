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


DECLARE
  Counter integer := 1;
BEGIN 
  while counter <= 5
  loop
    dbms_output.put_line('Counter is: ' || Counter);
    Counter := Counter + 1;
  end loop;
END;
/


Create Table employees (
  employee_id number(5) primary key,
  first_name varchar2(50),
  last_name varchar2(50),
  hire_date date,
  salary number(10,2)
);

insert into employees(employee_id,first_name,last_name,hire_date,salary)
values (1,'john','doe',to_date('2023-10-20','YYYY-MM-DD'),50000),
(2,'jane','smith',to_date('2023-11-02','YYYY-MM-DD'),25000);

Commit;

declare
v_first_name employees.first_name%TYPE;
v_last_name employees.last_name%TYPE;
v_salary employees.salary%TYPE;

BEGIN 
  select first_name, last_name, salary
  into v_first_name, v_last_name, v_salary
  from employees
  where employee_id = 1;
  
  dbms_output.put_line('Employee Name: ' || v_first_name || ' ' || v_last_name);
END;
/
