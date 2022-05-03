
//THIS IS DONE IN CONSTANT TIME
void AttributeMap::add(string a) {
    if (attribute_map[a].idx == -1) {
        //Add to the list

        attributes.push_back(a);

        //Add to the searching unordered map
        AttributeIdx idx(attributes.size() - 1);
        attribute_map[a] = idx;
    }
}

//THIS IS ALSO DONE IN CONSTANT TIME
string AttributeMap::get(int i) {
    unsigned index = i;
    if (index > attributes.size() - 1) {
        return "";
    } 
    return attributes[i];
}

int AttributeMap::findIndex(string a) {
    return attribute_map[a].idx;
}

//THIS IS ALSO DONE IN CONSTANT TIME
int AttributeMap::getIndex(string a) {
    if (attribute_map[a].idx == -1)
        add(a);

    return attribute_map[a].idx;
}