CREATE TABLE jlxc_group (id INTEGER PRIMARY KEY  UNIQUE , groupId VARCHAR, groupTitle VARCHAR , type INTEGER, groupRemark VARCHAR NOT NULL , avatarPath VARCHAR, currentState INTEGER, isRead INTEGER, isNew INTEGER,owner VARCHAR, addDate VARCHAR);


CREATE TABLE jlxc_user (id int(10) NOT NULL,username varchar(20) DEFAULT NULL,name varchar(48) DEFAULT NULL,helloha_id varchar(20) DEFAULT NULL, sex int(1), phone_num varchar(13) DEFAULT NULL ,school varchar(30) DEFAULT NULL ,school_code varchar(20) DEFAULT NULL,head_image varchar(100) DEFAULT NULL ,head_sub_image varchar(100) DEFAULT NULL ,age int(3) DEFAULT NULL ,birthday varchar(20) DEFAULT NULL ,city varchar(20) DEFAULT NULL ,sign varchar(100) DEFAULT NULL ,background_image varchar(100) DEFAULT NULL,login_token varchar(100) DEFAULT NULL,im_token varchar(100) DEFAULT NULL,iosdevice_token varchar(100) DEFAULT NULL,PRIMARY KEY (id))

CREATE TABLE jlxc_news_push (id INTEGER PRIMARY KEY NOT NULL ,uid INTEGER ,head_image VARCHAR, name VARCHAR, comment_content VARCHAR, type INTEGER,news_id VARCHAR,news_content VARCHAR,news_image VARCHAR,news_user_name VARCHAR, is_read BOOL, push_time VARCHAR)





�������ɻ�