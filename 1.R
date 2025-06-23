# Print and loop basics
"hello"
cat("Hello World!\n")

for(x in 1:10){
    print(x)
}

# Variable assignments
me <- owner <- name <- "parvej"
name
age <- 21
age

# String concatenation and printing
paste("my name is", name)
cat("my name is", name, "\n")
paste("my name is", name, "and I'm", age)
paste(name, age)
cat(age, "\n")

# More variable access
"break"
name
me
owner

# Logical and string operations
grepl("e", me)
str <- "We are the so-called \"Vikings\", from the north."
cat(str, "\n")

# Logical comparisons
10 == 10
1 == 9

# While loop
i <- 1
while (i < 6) {
  print(i)
  i <- i + 1
}

# For loop with list
fruits <- list("apple", "banana", "cherry")
for (x in fruits){
    cat(x, "\n")
}

# Function definition and call
my_function <- function(){
    cat(name, "\n")
}
my_function()

# Vectors and matrices
fruits <- c("apple", "banana", "cherry")
fruits

my_matrix <- matrix(c(1,2,3,4,5,6,7,8,9), nrow=3, ncol=3)
my_matrix

# User input
name <- readline(prompt = "Enter your name: ")
cat("Hello,", name, "!\n")

# Data frame
Data_Frame <- data.frame (
  Training = c("Strength", "Stamina", "Other"),
  Pulse = c(100, 150, 120),
  Duration = c(60, 30, 45)
)
Data_Frame

# Sequence
numbers <- seq(from = 0, to = 100, by = 20)
numbers

# Plotting numbers from 1 to 10 and saving as image
png("out.png")          # Replaces bitmap(); works on Mac
plot(1:10, type="l")    # Line plot
dev.off()               # Close the graphics device


bitmap(file="out1.png")

x<- c(1,20,30,69)
    pie(x)


# We need this line of code to show graphs in our compiler
bitmap(file="out2.png")

# Create a vector of pies
x <- c(10,20,30,40)

# Create a vector of labels
mylabel <- c("Apples", "Bananas", "Cherries", "Dates")

# Create a vector of colors
colors <- c("blue", "yellow", "green", "black")

# Display the pie chart
pie(x, label = mylabel, main = "Fruits", col = colors)


# We need this line of code to show graphs in our compiler
bitmap(file="out3.png")

# x-axis values
x <- c("A", "B", "C", "D")

# y-axis values
y <- c(2, 4, 6, 8)

barplot(y, names.arg = x)

data_cars<-mtcars
#?mtcars
dim(data_cars)
names(data_cars)
