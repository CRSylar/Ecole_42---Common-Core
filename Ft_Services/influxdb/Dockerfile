# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/31 10:17:35 by cromalde          #+#    #+#              #
#    Updated: 2021/03/31 11:24:48 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#		-*-		Dockerfile		-*-

FROM	alpine:latest

RUN		apk update && \
		apk add --no-cache openrc libc6-compat influxdb

RUN		mkdir /etc/influxdb ; mkdir /run/openrc ; touch /run/openrc/softlevel

RUN		mkdir /var/lib/influxdb ; cd /var/lib/influxdb/ ; mkdir meta data wal ; cd /

RUN		adduser -D admin && \
		echo "admin:password" | chpasswd

VOLUME	/var/lib/influxdb

RUN		rc-status

RUN		rc-update add influxdb

COPY	influxdb.conf /etc/

CMD		["influxd", "-config", "/etc/influxdb.conf"]
