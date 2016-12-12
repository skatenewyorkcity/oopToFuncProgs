#!/usr/bin/env runhaskell
import Data.Char

lString :: String
lString = ['P','A','T','F','A','T','C','A','T']

occNumber elem list = length $ filter (\x -> x == elem) list

totNumber :: [String] -> [Int]
totNumber = map length

main :: IO()
main = do
    putStrLn "Consider finite sequences of lists drawn from the finite alphabet"
    putStrLn "S = {A, C, G, T}."
    putStrLn "Given a sequence L, one would like to perform the following tasks:"
    putStrLn "Compute the length of L."
    putStrLn "Count the number of occurrences in L of each alphabet letter."
    putStrLn "Create a histogram or frequency distribution for L"
    putStrLn "Extra Credit) Perform a Huffman coding on the L histogram"
    putStrLn ""
    putStrLn "My choosen L finite sequence is as follows:"
    putStrLn "L = {P, A, T, F, A, T, C, A, T}"

    putStrLn " "

    let tVal = (totNumber [lString])
    let tMsg = " elements in the set L."
    print (tVal, tMsg)

    putStrLn " "

    let pVal = (occNumber 'P' lString)
    let pMsg = " 'P' characters repeated"
    print (pVal, pMsg)
    let aVal = (occNumber 'A' lString)
    let aMsg = " 'A' characters repeated"
    print (aVal, aMsg)
    let cVal = (occNumber 'C' lString)
    let cMsg = " 'C' characters repeated"
    print (cVal, cMsg)
    let fVal = (occNumber 'F' lString)
    let fMsg = " 'F' characters repeated"
    print (fVal, fMsg)
    let tVal = (occNumber 'T' lString)
    let tMsg = " 'T' characters repeated"
    print (tVal, tMsg)
 
  




 