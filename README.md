# Josephus-problem
There are n people standing in a circle waiting to be executed. The counting out begins at some point in the circle and proceeds around the circle in a fixed direction. In each step, a certain number of people are skipped and the next person is executed. The elimination proceeds around the circle (which is becoming smaller and smaller as the executed people are removed), until only the last person remains, who is given freedom. Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle. The task is to choose the place in the initial circle so that you are the last one remaining and so survive.

For example, if n = 5 and k = 2, then the safe position is 4. Firstly, the person at position 3 is killed, then person at position 1 is killed, then person at position 5 is killed. Finally, the person at position 2 is killed. So the person at position 4 survives.

If n = 100 and k = 1, then the safe position is 73. 

# Approach
1.Make a circular queue of n people.

2.Pointer the temporary pointer to the start(i.e. person no-1).

3.kill the kth person(i.e. delete the Kth node from the temporary pointer).

4.move the temporary pointer to (k+1)th person(node).

5.repeat step 3 and step 4 until only one node is left.

kudos!! '
The only node is the luckiest one.



Run the lucky_guy.cpp with a c++ compiler to see the results.
