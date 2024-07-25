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