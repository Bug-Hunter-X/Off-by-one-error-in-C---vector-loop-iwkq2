std::vector<int> myVector(10);
for (int i = 0; i < 10; ++i) { //Corrected loop condition
    myVector[i] = i * 2;
}
//Alternative using iterators
for (auto it = myVector.begin(); it != myVector.end(); ++it) {
    *it = std::distance(myVector.begin(), it) * 2; //Alternative way using iterators
}