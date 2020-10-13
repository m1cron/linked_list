#ifndef HASH_NODE_H
#define HASH_NODE_H

template<typename K, typename V>
class HashNode {
public:
    K key;
    V value;
    HashNode(K key, V value);
};

#endif