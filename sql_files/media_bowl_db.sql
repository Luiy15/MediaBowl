DROP DATABASE IF EXISTS `media_bowl`;
CREATE DATABASE `media_bowl`;
USE `media_bowl`;

CREATE TABLE `movies`(
	`movie_id` int(11) NOT NULL AUTO_INCREMENT,
	`release_year` int(11) NOT NULL,
	`title` varchar(50) NOT NULL,
    `description` varchar(50) NOT NULL,
    `rating` double(2,1) NOT NULL,
    `runtime` int(11) NOT NULL,
    `image`  varchar(50),
    PRIMARY KEY (`movie_id`)
    ) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
    
    
CREATE TABLE `movie_genre`(
	`movie_id` int(11) NOT NULL,
    `genre` varchar(50) NOT NULL
    )ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
    
CREATE TABLE `director`(
	`movie_id` int (11) NOT NULL,
    `director` varchar(50) NOT NULL
    )ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
    
CREATE TABLE `actor`(
	`movie_id` int(11) NOT NULL,
    `actor` varchar(50) NOT NULL
    )ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
    
CREATE TABLE `books`(
	`book_id` int(11) NOT NULL AUTO_INCREMENT,
    `title` varchar(50) NOT NULL,
    `release_year` int(11) NOT NULL,
    `rating` double(2, 1) NOT NULL,
    `image` varchar(50),
    `description` varchar(50),
    PRIMARY KEY (`book_id`)
    ) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE `book_genre`(
	`book_id` int(11) NOT NULL,
    `genre` varchar(10) NOT NULL
    )ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
    
CREATE TABLE `auhtor`(
	`book_id` int (11) NOT NULL,
    `author` varchar(20) NOT NULL
    )ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;


CREATE TABLE `tv_show`(
	`tv_id` int(11) NOT NULL AUTO_INCREMENT,
	`release_year` int(11) NOT NULL,
	`title` varchar(50) NOT NULL,
    `description` varchar(50) NOT NULL,
    `rating` double(2,1) NOT NULL,
    `image`  varchar(50),
    PRIMARY KEY (`tv_id`)
    )ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE `tv_genre`(
	`tv_id` int(11) NOT NULL,
    `genre` varchar(50) NOT NULL
    )ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE `tv_director`(
	`tv_id` int (11) NOT NULL,
    `director` varchar(50) NOT NULL
    )ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
    
CREATE TABLE `tv_actor`(
	`tv_id` int(11) NOT NULL,
    `actor` varchar(50) NOT NULL
    )ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

        
