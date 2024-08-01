USE media_bowl;
DELIMITER //
CREATE PROCEDURE add_movie(
							IN movie_release_year int(11),
                            IN movie_title varchar(50), 
                            IN movie_rating double(4,2),
                            IN movie_runtime int(11),
                            IN movie_description varchar (50))
	BEGIN
	IF(SELECT count(*) FROM movies WHERE movie_title = title) = 0
    THEN
	INSERT INTO movies (release_year, title, rating, runtime, description)
		VALUES (movie_release_year, movie_title, movie_rating, movie_runtime, movie_description);
	END IF;
    END //

CREATE PROCEDURE add_movie_genre(
							IN movie_title varchar(50),
                            IN movie_genre varchar(50))
	BEGIN
	INSERT INTO movie_genre(movie_id, genre)
			VALUES ((SELECT movie_id FROM movies WHERE movie_title = title), movie_genre);
	END //

CREATE PROCEDURE add_movie_director(
							IN movie_title varchar(50),
                            IN movie_director varchar(50))
	BEGIN
	INSERT INTO movie_director(movie_id, director)
			VALUES ((SELECT movie_id FROM movies WHERE movie_title = title), movie_director);
	END //

CREATE PROCEDURE add_movie_actor(
							IN movie_title varchar(50),
                            IN movie_actor varchar(50))
	BEGIN
	INSERT INTO movie_actor(movie_id, actor)
			VALUES ((SELECT movie_id FROM movies WHERE movie_title = title), movie_actor);
	END //
