import socket, select

Hash = {
        "1":"Iron Man",
        "2":"Iron Man 2",
        "3":"The Incredible Hulk",
        "4":"Thor",
        "5":"Captain America: The First Avenger",
        "6":"The Avengers",
        "7":"Iron Man 3",
        "8":"Agents of S.H.I.E.L.D.",
        "9":"Thor: The Dark World",
        "10":"Captain America: The Winter Soldier",
        "11":"Guardians of the Galaxy",
        "12":"Guardians of the Galaxy Vol. 2",
        "13":"Daredevil",
        "14":"Avengers: Age of Ultron",
        "15":"Jessica Jones",
        "16":"Ant-Man",
        "17":"Doctor Strange",
        "18":"Luke Cage",
        "19":"Captain America: Civil War",
        "20":"Black Panther",
        "21":"Spider-Man: Homecoming",
        "22":"Iron Fist",
        "23":"The Defenders",
        "24":"The Punisher",
        "25":"Inhumans",
        "26":"Thor: Ragnarok",
        "27":"Avengers: Infinity War",
        }

def func(data, count):
    if Hash[str(count)] == data.strip():
        return "Carry on !!\n"
    else:
        return data
        #return Hash[str(count)]
  
if __name__ == "__main__":
      
    CONNECTION_LIST = []    # list of socket clients
    RECV_BUFFER = 4096 # Advisable to keep it as an exponent of 2
    PORT = 5000
         
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    # this has no effect, why ?
    server_socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    server_socket.bind(("0.0.0.0", PORT))
    server_socket.listen(10)
 
    # Add server socket to the list of readable connections
    CONNECTION_LIST.append(server_socket)
 
    print "Chat server started on port " + str(PORT)

    flag = "The flag is : --flag--"

    count=1
    max_count=27
 
    while 1:
        # Get the list sockets which are ready to be read through select
        read_sockets,write_sockets,error_sockets = select.select(CONNECTION_LIST,[],[])
 
        for sock in read_sockets:
             
            #New connection
            if sock == server_socket:
                # Handle the case in which there is a new connection recieved through server_socket
                sockfd, addr = server_socket.accept()
                CONNECTION_LIST.append(sockfd)
                print "Client (%s, %s) connected" % addr
                 
            #Some incoming message from a client
            else:
                # Data recieved from client, process it
                try:
                    #In Windows, sometimes when a TCP program closes abruptly,
                    # a "Connection reset by peer" exception will be thrown
                    data = sock.recv(RECV_BUFFER)
                    print "server recieved : " + data
                    response = func(data, count)
                    if response.strip()=="Carry on !!":
                        count=count+1
                    if count==max_count:
                        response=flag
                    # echo back the client message
                    if data:
                        sock.send('OK ... ' + response)
                 
                # client disconnected, so remove from socket list
                except:
                    broadcast_data(sock, "Client (%s, %s) is offline" % addr)
                    print "Client (%s, %s) is offline" % addr
                    sock.close()
                    CONNECTION_LIST.remove(sock)
                    continue
         
    server_socket.close()
