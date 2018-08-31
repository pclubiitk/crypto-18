FROM madduci/docker-linux-cpp:latest
CMD [""]
ENTRYPOINT [""]

COPY . /code
COPY .bash_aliases /root/.bash_aliases

WORKDIR /code

RUN chmod 700 ~/.bash_aliases ~/.bashrc
RUN chmod 700 Dockerfile alias.sh checker.sh flag.txt Iron_man.cpp Thanos.cpp
RUN g++ Thanos.cpp -o Thanos
RUN g++ Iron_man.cpp -o Iron_man
RUN ./Thanos &
RUN ./Iron_man

RUN useradd -ms /bin/bash newuser
USER newuser

