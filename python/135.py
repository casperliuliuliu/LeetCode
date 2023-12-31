"""
There are n children standing in a line. Each child is assigned a rating value given in the integer array ratings.

You are giving candies to these children subjected to the following requirements:

Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
Return the minimum number of candies you need to have to distribute the candies to the children.

 

Example 1:

Input: ratings = [1,0,2]
Output: 5
Explanation: You can allocate to the first, second and third child with 2, 1, 2 candies respectively.
Example 2:

Input: ratings = [1,2,2]
Output: 4
Explanation: You can allocate to the first, second and third child with 1, 2, 1 candies respectively.
The third child gets 1 candy because it satisfies the above two conditions.
 

Constraints:

n == ratings.length
1 <= n <= 2 * 104
0 <= ratings[i] <= 2 * 104
"""

class Solution:
    def candy_ver1(self, ratings: list[int]) -> int: # TLE, happens when the input list is in completely reversed order. 
        candies = [1 for _ in range(len(ratings))]
        for ii in range(len(candies)-1):
            if ratings[ii] > ratings[ii+1] and candies[ii] <= candies[ii+1]:
                candies[ii] += 1
                for jj in range(ii):
                    if ratings[ii-jj-1] > ratings[ii-jj] and candies[ii-jj-1] <= candies[ii-jj]:
                        candies[ii-jj-1] += 1
                    else:
                        break

            elif ratings[ii] < ratings[ii+1]:
                candies[ii+1] = candies[ii]+1

        print(candies)
        return sum(candies)


    def candy(self, ratings: list[int]) -> int: # PASS
        candies = [1 for _ in range(len(ratings))]
        for ii in range(len(candies)-1):
            if ratings[ii] < ratings[ii+1]:
                candies[ii+1] = candies[ii]+1

        for ii in range(len(candies)-1, 0,-1):
            if ratings[ii-1] > ratings[ii] and candies[ii-1] <= candies[ii]:
                candies[ii-1] = candies[ii]+1
                
        print(candies)
        return sum(candies)

# ratings = [1,2,2]
# ratings = [1,2,87,87,87,2,1]
ratings = [1,2,3,3,2,1]

Solution().candy(ratings)
