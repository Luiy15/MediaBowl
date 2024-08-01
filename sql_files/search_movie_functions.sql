CREATE PROCEDURE search_movie_title(
										IN movie_title varchar(50))
		SELECT title, release_year, rating, description, runtime FROM movies
        WHERE movie_title = title;

CREATE PROCEDURE search_movie_director(
										IN movie_director varchar(50))
		SELECT title, release_year, rating, description, runtime FROM movies
        WHERE movie_id IN (SELECT movie_id FROM movie_director WHERE movie_director = director);

CREATE PROCEDURE search_movie_actor(
										IN movie_actor varchar(50))
		SELECT title, release_year, rating, description, runtime FROM movies
        WHERE movie_id IN (SELECT movie_id FROM movie_actor WHERE movie_actor = actor);

CREATE PROCEDURE search_movie_genre(
										IN movie_genre varchar(50))
		SELECT title, release_year, rating, description, runtime FROM movies
        WHERE movie_id IN (SELECT movie_id FROM movie_genre WHERE movie_genre = genre);
