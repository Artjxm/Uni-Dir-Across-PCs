FROM php:7.2-apache
RUN docker-php-ext-install mysqli pdo pdo_mysql && docker-php-ext-enable pdo_mysql
RUN echo "ServerName localhost" >> /etc/apache2/apache2.conf
