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
    StudentCode varchar(25),
    SubjectCode varchar(25),
    Mark int
);

-- Insert values into Faculty table
-- Insert values into Faculty table
INSERT INTO Faculty (FacultyCode, FacultyName) VALUES 
('FAC001', 'Alice Smith'),
('FAC002', 'Bob Johnson'),
('FAC003', 'Carol White'),
('FAC004', 'David Brown'),
('FAC005', 'Eve Davis'),
('FAC006', 'Frank Clark'),
('FAC007', 'Grace Lewis'),
('FAC008', 'Hank Wilson'),
('FAC009', 'Ivy Turner'),
('FAC010', 'John Moore');

-- Insert values into Subject table
INSERT INTO Subject (SubjectCode, SubjectName, MaxMark, FacutlyCode) VALUES 
('SUB001', 'Mathematics', 100, 'FAC001'),
('SUB002', 'Physics', 100, 'FAC002'),
('SUB003', 'Chemistry', 100, 'FAC003'),
('SUB004', 'Biology', 100, 'FAC004'),
('SUB005', 'English', 100, 'FAC005'),
('SUB006', 'History', 100, 'FAC006'),
('SUB007', 'Geography', 100, 'FAC007'),
('SUB008', 'Computer Science', 100, 'FAC008'),
('SUB009', 'Economics', 100, 'FAC009'),
('SUB010', 'Art', 100, 'FAC010');

-- Insert values into Student table
INSERT INTO Student (StudentCode, StudentName, DOB, StudentsBranch, AdmissionDate) VALUES 
('STU001', 'Tom Green', '2002-05-14', 'CS', '2020-09-01'),
('STU002', 'Lucy Adams', '2003-11-23', 'EC', '2021-09-01'),
('STU003', 'Mark Taylor', '2002-07-09', 'EE', '2020-09-01'),
('STU004', 'Nina Scott', '2004-02-18', 'CS', '2022-09-01'),
('STU005', 'Owen Clark', '2002-12-30', 'EC', '2020-09-01'),
('STU006', 'Pamela Brooks', '2003-03-21', 'CS', '2021-09-01'),
('STU007', 'Quinn Evans', '2002-10-12', 'ME', '2020-09-01'),
('STU008', 'Riley James', '2004-08-07', 'EE', '2022-09-01'),
('STU009', 'Samantha Wright', '2003-06-29', 'CS', '2021-09-01'),
('STU010', 'Tyler Murphy', '2002-04-25', 'ME', '2020-09-01');

-- Insert values into M_Mark table
INSERT INTO M_Mark (StudentCode, SubjectCode, Mark) VALUES 
('STU001', 'SUB001', 85),
('STU001', 'SUB002', 90),
('STU002', 'SUB003', 75),
('STU002', 'SUB004', 88),
('STU003', 'SUB005', 92),
('STU003', 'SUB006', 78),
('STU004', 'SUB007', 80),
('STU004', 'SUB008', 85),
('STU005', 'SUB009', 65),
('STU005', 'SUB010', 70),
('STU006', 'SUB001', 88),
('STU006', 'SUB002', 79),
('STU007', 'SUB003', 91),
('STU007', 'SUB004', 86),
('STU008', 'SUB005', 77),
('STU008', 'SUB006', 82),
('STU009', 'SUB007', 68),
('STU009', 'SUB008', 74),
('STU010', 'SUB009', 81),
('STU010', 'SUB010', 77);

select * from Student;
select * from Faculty;
select * from M_Mark;
select * from Subject;

select count(FacultyCode) from Faculty;