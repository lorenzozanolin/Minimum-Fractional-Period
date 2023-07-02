# Minimum Fractional Period Calculation 
## Project Description 
This project aims to implement and analyze the complexity of two algorithms for calculating the minimum fractional period of a string. The minimum fractional period of a string s with length $|s| = n$ is defined as the smallest positive integer $p > 0$ such that $∀i=1,...,n-p$, $s(i)=s(i+p)$.  Within this report, two algorithms will be discussed for solving the problem: $PeriodNaive$ and $PeriodSmart$. As we will see in the following sections, these two procedures implement significantly different methods for calculating the minimum fractional period, and this heterogeneity is reflected in vastly different execution times between the two functions.  
### PeriodNaive Algorithm 
The PeriodNaive algorithm is a naive solution for calculating the minimum fractional period of a string. It employs a simple approach by comparing characters in pairs within the string until a valid period is found. Although intuitive, this algorithm may be less efficient in terms of execution time compared to the alternative PeriodSmart.  
### PeriodSmart Algorithm
The PeriodSmart algorithm represents a more advanced alternative for calculating the minimum fractional period. It utilizes a more optimized strategy, intelligently searching for possible periods, thereby reducing the overall execution time. The approach taken by PeriodSmart can offer significant performance advantages, especially for large-sized strings.  
## Complexity Analysis
During the development of this project, a careful analysis of the implemented algorithms' complexity will be performed. Factors such as time complexity and space complexity will be considered to evaluate the performance and limitations of the two proposed approaches.  
## Usage of the Project
To use the implemented algorithms, simply import the source code file into your project. Within your code, you can invoke the functions PeriodNaive and PeriodSmart, providing the input string for which you want to calculate the minimum fractional period. The results will be returned as the output of the respective functions.  
## Contributions and Future Improvements
This project is open to contributions and improvements from the community. If you have ideas on how to further optimize the existing algorithms or if you wish to implement new solutions for calculating the minimum fractional period, you are encouraged to open a pull request or provide feedback through the repository's issue tracker.
