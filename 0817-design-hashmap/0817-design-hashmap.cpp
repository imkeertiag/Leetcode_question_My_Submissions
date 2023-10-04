class MyHashMap {
    // parameter declation
    vector<int> hmap;
public:
    MyHashMap() {
        // initializing all the entries with -1
        hmap = vector<int>(1000001,-1);
    }
    
    void put(int key, int value) {
        hmap[key]=value;
    }
    
    int get(int key) {
        return hmap[key];
    }
    
    void remove(int key) {
        hmap[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */