import socket

# Create a UDP socket
server_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# Bind the socket to a specific IP address and port
server_address = ('', 1700)  # Use an empty string ('') for the IP address to listen on all available network interfaces
server_socket.bind(server_address)

print("Server is listening on UDP port 1700...")

while True:
    # Receive incoming packets
    data, client_address = server_socket.recvfrom(4096)
    
    print("Received packet from:", client_address)
    
    # Forward the received packet to the specified IP and port
    forward_address = ('172.26.72.171', 1700)
    server_socket.sendto(data, forward_address)
    
    print("Forwarded packet to:", forward_address)
    
    # Receive response from the specified IP and port
    response, _ = server_socket.recvfrom(4096)
    
    print("Received response from:", forward_address)
    
    # Send the response back to the original client
    server_socket.sendto(response, client_address)
    
    print("Sent response back to:", client_address)
