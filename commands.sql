insert into emp values (1,'Steven', 'Marketing','1995-01-06',24000, NULL,2),
  (2,'Neena', 'FI_ACCOUNT', '1987-02-06',34000, NULL,1),
  (3,'Lex', 'FI_MGR', '1980-01-06',240000, NULL,1),
  (4,'Tejas','SA_REP','1987-06-06',20000,NULL,4),
  (5,'Peter','IT_PROG','1990-07-06',24000,NULL,4),
  (6,'David', 'IT_PROG', '1991-09-06',22000, NULL,4),
  (7,'vipin', 'IT_PROG', '1987-11-16',28000, NULL,4),
  (8,'Diana', 'Pur_Man', '1987-01-26',24000, NULL,3),
  (9,'John', 'FI_ACCOUNT', '1992-12-01', 24000, NULL,1),
  (10,'Ismael', 'CLERK', '1994-03-29', 4000, NULL,3),
  (11,'Mathew', 'CLERK', '1992-10-12', 46000, 200,3),
  (12,'Hayes', 'Marketing', '1998-04-21',14000, 1000,2),
  (13,'sarun', 'Marketing', '1993-05-18',18000, NULL,2),
  (14,'Henin','FI_MGR', '1980-08-06',240000, NULL,1),
  (15,'Greesh','Clerk', '1980-08-06',240000, NULL,5);

insert into dept values (1, 'Administration', null, 'Boston'),
    (2, 'Marketing', null, 'Boston'),
    (3, 'Purchase', null, 'perryridge'),
    (4, 'Programming',null, 'Hudson'),
    (5, 'HR', null, 'Hudson');


Alter table dept add foreign key(manager_id) references emp(EMP_no);
Update dept set manager_id=2 where department_id=1;
Update dept set manager_id=1 where department_id=2;
Update dept set manager_id=8 where department_id=3;
Update dept set manager_id=7 where department_id=4;


select emp_name, salary from emp where salary not between 5000 and
35000;

select emp_name, job, hiredate from emp where hiredate between '1990-02-20' and '1998-05-01' order by hiredate

select Emp_name "Employee", Salary "Monthly Salary" ,Depno from emp
where Salary between 5000 and 30000 and depno IN (2, 4);

select emp_name, hiredate from emp where hiredate like '%94';

select emp_name, salary, comm from emp where comm >0
order by salary desc, comm desc;

select emp_name, job from emp,dept where manager_id is null and
emp.depno=dept.department_id;

select emp_name from emp where emp_name like ' a%';

select emp_name from emp where emp_name like '%a%' and emp_name
like '%e%';

select emp_name, job, salary from emp where job IN ('Sa_rep', 'CLERK')
and salary not IN (2000, 4000, 7000);

select INITCAP(emp_name) "Name", LENGTH(emp_name) "Length" from emp where emp_name like 'J%' OR emp_name like 'M%' OR emp_name like
'A%'order by emp_name;

select emp_name, ROUND(MONTHS_between(SYSDATE, hiredate))
MONTHS_WORKED, round(MONTHS_between(SYSDATE, hiredate)/12,2) “NO:
Of YEARS” from emp order by MONTHS_between(SYSDATE, hiredate);

select emp.emp_name, emp.depno, dept.department_name from emp , dept
where emp.depno = dept.department_id order by dept.department_name;

select emp_Name, HireDate from Emp where ((HireDate)>any(select
HireDate from Emp where emp_Name='Mathew'));

select emp.emp_name employee , emp.hiredate “EMP HIRE DATE”, emp.salary,
manager.emp_name manager, manager.hiredate “MANAGER HIRE DATE” from emp ,
dept, emp manager where dept.manager_id = manager.emp_no and
emp.depno=dept.department_id and
emp.hiredate < manager.hiredate;

select job, COUNT(*) “No: of Jobs” from emp GROUP BY job;

select min(salary) “MINIMUM SALARY”,manager_id, department_name from
emp,dept where emp.depno=dept.department_id and manager_id IS not NULL
GROUP BY manager_id, department_name HAVING MIN(salary) > 6000
order by “MINIMUM SALARY” desc

