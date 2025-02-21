std::vector<int> myVector(10); 
for (int i = 0; i <= 10; ++i) { //Error: Accessing myVector at index 10 is out of bounds
    myVector[i] = i * 2; 
}