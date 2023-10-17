FROM ubuntu:latest
LABEL matainger woohyung
LABEL contect flrst24@naver.com
ENV DEBIAN_FRONTED=noninteractive
ENV TZ=Asia/Seoul
RUN apt-get update
RUN apt-get install -y curl nginx
COPY index.html /var/www/html/index.html
CMD [ "ngnix", "-g", "daemon off;"]
EXPOSE 80
