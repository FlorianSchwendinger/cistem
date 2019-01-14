q("no")
R

library(cistem)

stemmer("Automarken")
segmenter(c("Automarken", "Automarken"))

stemmer(c("Adamsapfels", "Adamsäpfeln", "Adamsäpfel", "Adamsapfel"))
segmenter(c("Adamsapfels", "Adamsäpfeln", "Adamsäpfel", "Adamsapfel"))

segmenter(c("Adamsapfels"))
segmenter(c("Adamsapfels", "Adamsäpfeln"))

segmenter(c("Abbaurechts", "Abbaurecht", "Abbaurechtes", "Abbaurechten", "Abbaurechte"))


