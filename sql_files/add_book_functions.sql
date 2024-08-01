USE media_bowl;
DELIMITER //
CREATE PROCEDURE add_book(
							IN book_release_year int(11),
                            IN book_title varchar(50), 
                            IN book_rating double(4,2),
                            IN book_description varchar (50))
	BEGIN
	IF(SELECT count(*) FROM books WHERE book_title = title) = 0
    THEN
	INSERT INTO books (release_year, title, rating, description)
		VALUES (book_release_year, book_title, book_rating, book_description);
	END IF;
    END //

CREATE PROCEDURE add_book_genre(
							IN book_title varchar(50),
                            IN book_genre varchar(50))
	BEGIN
	INSERT INTO book_genre(book_id, genre)
			VALUES ((SELECT book_id FROM books WHERE book_title = title), book_genre);
	END //


CREATE PROCEDURE add_book_author(
							IN book_title varchar(50),
                            IN book_author varchar(50))
	BEGIN
	INSERT INTO author(book_id, author)
			VALUES ((SELECT book_id FROM books WHERE book_title = title), book_author);
	END //
