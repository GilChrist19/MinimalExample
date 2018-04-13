#generate some matrix. Numeric is fine too. Must have column names, no row names
myMat <- matrix(data = 1:100, nrow = 10, ncol = 10, dimnames = list(NULL, LETTERS[1:10]))



#This works. Put in full path, no expansion. It returns null to the consol.
#MinimalExample::WriteMat(mat = myMat, file = "/tmp/IWork.csv", sep = ",",eol = "\n", dec = ".", buffMB = 8L)



#THIS WILL CRASH R!!!!!!
#MinimalExample::WriteMatCpp(fileName = "/tmp/IDoNotWork.csv", testMat = myMat)
MinEx::WriteMatCpp(fileName = "/tmp/IDoNotWork.csv", testMat = myMat)

