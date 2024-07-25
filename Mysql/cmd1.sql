create table emp(
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

insert into emp values
    ('E-101','Adarsh',101,'MG Road'),
    ('E-102','Bonny',101,'MG Road'),
    ('E-103','Catherine',102,'Road'),
    ('E-104','Glenn',104,'Road'),
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

