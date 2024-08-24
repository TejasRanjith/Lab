create table employee(
    emp_id char(8) check(emp_id like 'E%') primary key,
    emp_name varchar(18),
    street_no int,
    city varchar(18)
);

create table company(
    company_name varchar(18) primary key,
    city varchar(18)
);

create table works(
    emp_id char(8) references emp(emp_id),
    company_name varchar(18) references company(company_name),
    salary float,
    primary key(emp_id,company_name)
);

create table manages(
    emp_id char(8) references emp2(emp_id),
    manager_id char(8) references emp2(emp_id),
    unique(emp_id,manager_id)
);

insert into employee values
    ('E-101','Adarsh',101,'MG Road'),
    ('E-102','Bonny',101,'MG Road'),
    ('E-103','Catherine',102,'Cochin'),
    ('E-104','Glenn',104,'Ernakulam'),
    ('E-105','George',201,'MG Road'),
    ('E-106','Hayes',101,'MG Road'),
    ('E-107','Johnson',102,'Cochin'),
    ('E-108','Jones',101,'Cochin'),
    ('E-109','Karthik',101,'Ernakulam'),
    ('E-110','Lavanya',101,'Palace Road'),
    ('E-111','Niharika',102,'Ernakulam');

insert into company values
    ('SBI','MG Road'),
    ('SBT','MG Road'),
    ('Federal','Broadway'),
    ('Indian Bank','Cochin'),
    ('SIB','Ernakulam'),
    ('HDFC','Palace Road'),
    ('Axis','Cochin'),
    ('City Bank','Ernakulam');

insert into works values
    ('E-101','SBI',71000),
    ('E-102','SBI',90000),
    ('E-103','SBT',40000),
    ('E-104','Federal',37000),
    ('E-105','SBT',17000),
    ('E-106','Indian Bank',30000),
    ('E-107','SIB',21000),
    ('E-108','SIB',18000),
    ('E-109','Indian Bank',28000),
    ('E-110','SBT',25000),
    ('E-111','Federal',40000);

insert into manages values
    ('E-101','E-102'),
    ('E-102',Null),
    ('E-103','E-110'),
    ('E-104','E-111'),
    ('E-105','E-110'),
    ('E-106','E-109'),
    ('E-107',Null),
    ('E-108',Null),
    ('E-109',Null),
    ('E-110',Null),
    ('E-111',Null);


select * from emp;
select * from company;
select * from works;
select * from manages;

rename table emp to employee;

select distinct salary from works;

select * from company where city = 'Cochin';

select * from works where salary between 15000 and 35000;

select emp_name,city from employee where city like 'C%';

select * from employee where emp_id = 'E-103' or emp_name like 'J%';

select * from employee where emp_id = 'E-103' and emp_name like 'S%';

update employee set emp_name = 'Tejas'
where emp_name = 'Johnson';

select greatest(23,67,90,123,12);

select mod(4,2);

select exp(2);

select current_date;

select extract(year from sysdate());

select extract(day from sysdate());

select extract(month from sysdate());

select sysdate();

select ascii('a');

select ascii('A');

select ascii('t');

select ascii('T');

select upper("hi my names is Tejas");

select upper("hi my names is Tejas");

select lower("HI MY NAME IS Tejas");

select replace("Hello","H","k");

select replace("Hello","l","A");

select trim('A' from 'ANACONDA');

select ltrim('A' from 'ANACONDA');

select ltrim('ANIL','A');

select rtrim('ANITA','A');

select rtrim('ANACONDA','A','A');

create table Faculty(
FacultyCode varchar(25) primary key,
FacultyName varchar(25));

create table Subject(
    SubjectCode varchar(25) primary key,
    SubjectName varchar(25),
    MaxMark int,
    FacutlyCode varchar(25)
);

create table Student(
    StudentCode varchar(25) primary key,
    StudentName varchar(25),
    DOB date,
    StudentsBranch varchar(25),
    AdmissionDate date
);

create table M_Mark(
    StudentCode varchar(25) primary key,
    SubjectCode varchar(25),
    Mark int
);

