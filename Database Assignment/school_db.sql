-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Nov 28, 2024 at 04:59 PM
-- Server version: 10.4.28-MariaDB
-- PHP Version: 8.2.4

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `school_db`
--

DELIMITER $$
--
-- Procedures
--
CREATE DEFINER=`root`@`localhost` PROCEDURE `GetCourseDetailsById` (IN `course_id` INT)   BEGIN
    SELECT course_id, course_name, course_description, department
    FROM courses
    WHERE course_id = course_id;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetEmployeesByDepartment` (IN `dept_name` VARCHAR(100))   BEGIN
    SELECT employee_id, first_name, last_name, department
    FROM employees
    WHERE department = IT;
END$$

DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `courses`
--

CREATE TABLE `courses` (
  `course_id` int(255) NOT NULL,
  `course_name` varchar(255) NOT NULL,
  `course_duration` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `courses`
--

INSERT INTO `courses` (`course_id`, `course_name`, `course_duration`) VALUES
(1, 'Introduction to Computer Science', 3),
(3, 'Data Structures', 3),
(4, 'JAVA', 5);

-- --------------------------------------------------------

--
-- Table structure for table `departments`
--

CREATE TABLE `departments` (
  `department_id` int(11) NOT NULL,
  `department_name` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `departments`
--

INSERT INTO `departments` (`department_id`, `department_name`) VALUES
(1, 'HR'),
(2, 'IT'),
(3, 'IT');

-- --------------------------------------------------------

--
-- Table structure for table `employees`
--

CREATE TABLE `employees` (
  `employee_id` int(11) NOT NULL,
  `first_name` varchar(100) DEFAULT NULL,
  `last_name` varchar(100) DEFAULT NULL,
  `department_id` int(11) DEFAULT NULL,
  `department` varchar(20) DEFAULT NULL,
  `salary` int(100) DEFAULT NULL,
  `last_modified` timestamp NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employees`
--

INSERT INTO `employees` (`employee_id`, `first_name`, `last_name`, `department_id`, `department`, `salary`, `last_modified`) VALUES
(101, 'John', 'Doe', 1, 'IT', 80000, '2024-11-28 15:50:36'),
(102, 'Jane', 'Smith', 2, 'HR', 90000, '2024-11-28 15:50:36'),
(103, 'Alice', 'Johnson', 3, 'IT', 80000, '2024-11-28 15:50:36'),
(104, 'Bob', 'Brown', 2, 'IT', 80000, '2024-11-28 15:50:36');

--
-- Triggers `employees`
--
DELIMITER $$
CREATE TRIGGER `log_employee_insert` AFTER INSERT ON `employees` FOR EACH ROW BEGIN
    INSERT INTO employee_log (employee_id, action)
    VALUES (NEW.employee_id, 'INSERT');
END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `update_last_modified` BEFORE UPDATE ON `employees` FOR EACH ROW BEGIN
    -- Update the last_modified timestamp to the current time
    SET NEW.last_modified = CURRENT_TIMESTAMP;
END
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Stand-in structure for view `employee_department_view`
-- (See below for the actual view)
--
CREATE TABLE `employee_department_view` (
`employee_id` int(11)
,`first_name` varchar(100)
,`last_name` varchar(100)
,`department_name` varchar(100)
);

-- --------------------------------------------------------

--
-- Table structure for table `employee_log`
--

CREATE TABLE `employee_log` (
  `log_id` int(11) NOT NULL,
  `employee_id` int(11) DEFAULT NULL,
  `action` varchar(50) DEFAULT NULL,
  `action_time` timestamp NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Structure for view `employee_department_view`
--
DROP TABLE IF EXISTS `employee_department_view`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `employee_department_view`  AS SELECT `e`.`employee_id` AS `employee_id`, `e`.`first_name` AS `first_name`, `e`.`last_name` AS `last_name`, `d`.`department_name` AS `department_name` FROM (`employees` `e` join `departments` `d` on(`e`.`department_id` = `d`.`department_id`)) WHERE `e`.`salary` >= 50000 ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `courses`
--
ALTER TABLE `courses`
  ADD PRIMARY KEY (`course_id`);

--
-- Indexes for table `departments`
--
ALTER TABLE `departments`
  ADD PRIMARY KEY (`department_id`);

--
-- Indexes for table `employees`
--
ALTER TABLE `employees`
  ADD PRIMARY KEY (`employee_id`),
  ADD KEY `department_id` (`department_id`);

--
-- Indexes for table `employee_log`
--
ALTER TABLE `employee_log`
  ADD PRIMARY KEY (`log_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `courses`
--
ALTER TABLE `courses`
  MODIFY `course_id` int(255) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `employee_log`
--
ALTER TABLE `employee_log`
  MODIFY `log_id` int(11) NOT NULL AUTO_INCREMENT;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `employees`
--
ALTER TABLE `employees`
  ADD CONSTRAINT `employees_ibfk_1` FOREIGN KEY (`department_id`) REFERENCES `departments` (`department_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
