# cn-lab

lab 2a and 2b
Character stuffing (or byte stuffing) is a technique in character-oriented protocols to avoid misinterpreting special "flag" or "delimiter" characters as frame boundaries when they appear within the actual data. If a flag character is present in the data, an extra "escape" character (ESC) is inserted before it, or the flag character itself is duplicated, signaling to the receiver to treat it as data and not a delimiter. The receiver then removes the escape character to reconstruct the original data.
Bit stuffing is a data communication technique for preventing a specific bit pattern, called a flag, from appearing in the data stream by inserting extra bits. When five consecutive '1' bits occur in the data, a '0' is inserted to break up the sequence. The receiver then automatically removes this stuffed '0' to reconstruct the original data, ensuring synchronization and preventing misinterpretation of the flag as a frame delimiter.

lab 3
The data link layer utilizes checksums as an error detection method within its framing process. This technique aims to identify errors that may occur during data transmission across a network link.
Checksum Calculation at the Sender:
The data to be transmitted is divided into fixed-size segments.
These segments are added together using one's complement arithmetic.
The sum obtained from this addition is then complemented (all 0s become 1s, and all 1s become 0s) to produce the checksum.
This calculated checksum is appended to the data segments, forming a complete frame, which is then transmitted.


lab 4
Hamming code is an error-correcting code used to ensure data accuracy during transmission or storage. Hamming code detects and corrects the errors that can occur when the data is moved or stored from the sender to the receiver. This simple and effective method helps improve the reliability of communication systems and digital storage. It adds extra bits to the original data, allowing the system to detect and correct single-bit errors. It is a technique developed by Richard Hamming in the 1950s.

lab 5 
CRC-12 refers to a Cyclic Redundancy Check with a 12-bit checksum, but it's not a single standard, as there are multiple algorithms that use the name CRC-12 with different polynomials, initial values, and final XOR values. A CRC is an error-detection code that uses polynomial division to generate a checksum at the sender, which is then verified by the receiver to detect data corruption during transmission or storage. 
"CRC-12" specifies the length of the generated CRC, which is 12 bits.
However, there isn't one single CRC-12 standard; different implementations use various polynomials and parameters.
Therefore, when working with CRC-12, it is crucial to verify the specific polynomial and settings being used.

lab 6
The sliding window protocol is a network protocol for reliable and ordered data transmission, allowing the sender to transmit multiple data frames simultaneously without waiting for individual acknowledgments. It uses sequence numbers for frames and maintains a "window" of acceptable sequence numbers at both sender and receiver. When a frame is acknowledged, the window "slides" forward, enabling efficient use of the communication channel and improving throughput compared to stop-and-wait protocols. 

lab 7
Reliable data transmission is critical in computer networking, particularly across long distances or in networks that have high latency. The Sliding Window Protocol is a critical component in obtaining this reliability. It is part of the OSI model's Data Link Layer and is used in several protocols, including TCP. Sliding Window protocol handles efficiency issues by sending more than one packet at a time with a larger sequence number. The idea is the same as pipelining in architecture. In this article, we will discuss about Sliding Window Protocol.

lab 8
Stop and Wait ARQ is a Sliding Window Protocol method used for the reliable delivery of data frames. The stop-and-wait ARQ is used for noisy channels or links to handle flow and error control between sender and receiver. The Stop and Wait ARQ protocol sends a data frame and then waits for an acknowledgment (ACK) from the receiver.
The Stop and Wait ARQ protocol sends a data frame and then waits for an acknowledgment (ACK) from the receiver. The ACK indicates that the receiver successfully received the data frame. After receiving the ACK from the receiver, the sender delivers the next data frame. So there is a stop before the next data frame is transferred, hence it is known as the Stop and Wait ARQ protocol.

lab 9
Suppose we have a bucket in which we are pouring water at random points in time but we have to get water at a fixed rate to achieve this we will make a hole at the bottom of the bucket. This will ensure that the water coming out is at some fixed rate. If the bucket gets full, then we will stop pouring water into it.
The input rate can vary but the output rate remains constant. Similarly, in networking, a technique called leaky bucket can smooth out bursty traffic. Bursty chunks are stored in the bucket and sent out at an average rate.
The following is an algorithm for variable-length packets:  
1.Initialize a counter to n at the tick of the clock.
2.Repeat until n is smaller than the packet size of the packet at the head of the queue.
 1.Pop a packet out of the head of the queue, say P.
 2.Send the packet P, into the network
 3.Decrement the counter by the size of packet P.
3.Reset the counter and go to step 1.

lab 10
The algorithm maintains a set of visited vertices and a set of unvisited vertices. It starts at the source vertex and iteratively selects the unvisited vertex with the smallest tentative distance from the source. It then visits the neighbors of this vertex and updates their tentative distances if a shorter path is found. This process continues until the destination vertex is reached, or all reachable vertices have been visited.
Mark the source node with a current distance of 0 and the rest with infinity.
Set the non-visited node with the smallest current distance as the current node.
For each neighbor, N of the current node adds the current distance of the adjacent node with the weight of the edge connecting 0->1. If it is smaller than the current distance of Node, set it as the new current distance of N.
Mark the current node 1 as visited.
Go to step 2 if there are any nodes are unvisited.

lab 11
Distance Vector Routing (DVR) Protocol is a method used by routers to find the best path for data to travel across a network. Each router keeps a table that shows the shortest distance to every other router, based on the number of hops (or steps) needed to reach them. Routers share this information with their neighbors, allowing them to update their tables and find the most efficient routes. This protocol helps ensure that data moves quickly and smoothly through the network.
Arouter transmits its distance vector to each of its neighbors in a routing packet.
Each router receives and saves the most recently received distance vector from each of its neighbors.
A router recalculates its distance vector when:
It receives a distance vector from a neighbor containing different information than before.
It discovers that a link to a neighbor has gone down.

lab 12
A broadcast tree is a conceptual data structure and communication model in computer networks and parallel computing that represents the path of a message sent from a single root node to all other nodes in the network, forming a tree structure with no cycles. This tree structure is used to ensure efficient and optimized information dissemination, with the goal of reaching every node with minimal cost (like bandwidth or time). 
How it works:
Root Node: The process begins with a designated root node that has the message. 
Hierarchical Communication: The root sends the message to its child nodes. 
Recursive Information Transfer: Each node that receives the message then sends it to its own children. 
No Cycles: The tree structure inherently prevents loops and duplicate transmissions, ensuring that each message reaches all nodes without unnecessary repetition. 
Leaf Nodes: Nodes at the end of the tree branches (leaf nodes) have no children and therefore do not need to send messages.
