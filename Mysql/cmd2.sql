
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
