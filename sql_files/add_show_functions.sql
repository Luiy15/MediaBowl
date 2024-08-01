USE media_bowl;
DELIMITER //
CREATE PROCEDURE add_show(
							IN show_release_year int(11),
                            IN show_title varchar(50), 
                            IN show_rating double(4,2),
                            IN show_description varchar (50))
	BEGIN
	IF(SELECT count(*) FROM tv_show WHERE show_title = title) = 0
    THEN
	INSERT INTO tv_show (release_year, title, rating, description)
		VALUES (show_release_year, show_title, show_rating, show_description);
	END IF;
    END //

CREATE PROCEDURE add_show_genre(
							IN show_title varchar(50),
                            IN show_genre varchar(50))
	BEGIN
	INSERT INTO tv_genre(tv_id, genre)
			VALUES ((SELECT tv_id FROM tv_show WHERE show_title = title), show_genre);
	END //

CREATE PROCEDURE add_show_director(
							IN show_title varchar(50),
                            IN show_director varchar(50))
	BEGIN
	INSERT INTO tv_director(tv_id, director)
			VALUES ((SELECT tv_id FROM tv_show WHERE show_title = title), show_director);
	END //

CREATE PROCEDURE add_show_actor(
							IN show_title varchar(50),
                            IN show_director varchar(50))
	BEGIN
	INSERT INTO tv_actor(tv_id, actor)
			VALUES ((SELECT tv_id FROM tv_show WHERE show_title = title), show_actor);
	END //