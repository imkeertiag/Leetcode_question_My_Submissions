class TimeLimitedCache {
    // Use a Map to store key-value pairs and associated expiration times
    cache = new Map();
    
    set(key, value, duration) {
        // Check if the key already exists in the cache
        const exist = this.cache.get(key);
        
        // If the key exists, clear the previous timeout to update the value and duration
        if (exist) {
            clearTimeout(exist.timeId);
        }
        
        // Set a new timeout to remove the key once the duration has elapsed
        const timeId = setTimeout(() => {
            this.cache.delete(key);
        }, duration);
        
        // Update the cache with the new key-value pair and timeout
        this.cache.set(key, { value, timeId });
        
        // Return true if the key already existed, false otherwise
        return Boolean(exist);
    }

    get(key) {
        // Check if the key exists and is unexpired
        return this.cache.has(key) ? this.cache.get(key).value : -1;
    }

    count() {
        // Count the number of unexpired keys in the cache
        return this.cache.size;
    }
}