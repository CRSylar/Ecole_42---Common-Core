.PHONY:	all up stop down start re

all:
	mkdir -p /home/${USER}/data/db
	mkdir -p /home/${USER}/data/wp
	sudo docker-compose -f srcs/docker-compose.yaml build
	sudo docker-compose -f srcs/docker-compose.yaml up -d

up:
	sudo docker-compose -f srcs/docker-compose.yaml up -d

down:
	sudo docker-compose -f srcs/docker-compose.yaml down

ps:
	sudo docker-compose -f srcs/docker-compose.yaml ps

clean:
	sudo docker system prune
	rm -rf /home/${USER}/data

net:
	sudo docker network ls

vol:
	sudo docker volume ls
