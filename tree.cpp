
template <typename BaseData>
void Tree<BaseData>::insert(BaseData data){
    insertHelper(data,root);
}
template <typename BaseData>
void Tree<BaseData>:: inOrder(){
    inOrderHelper(root);   
}
template <typename BaseData>
void Tree<BaseData>:: searchAndDestroy(BaseData target){
    treeNode<BaseData>* parent = nullptr;
    treeNode<BaseData>*  current = root;
    
    while (current != nullptr && target != current->TreeData){
    parent = current;
        if(target<current->TreeData){
            current = current->leftNode;
        }
        else{
            current = current->rightNode;
        }

    }

    if(!current){
        std::cout<<"not found";
    }
    else{

        if( current==root)remove(root);
        else if (current==parent->leftNode)remove(parent->leftNode);
        else if (current==parent->rightNode)remove(parent->rightNode);
        std::cout<<"success!";
    }
    
}
template <typename BaseData>
void Tree<BaseData>::inOrderHelper(treeNode <BaseData>* &into){
    if (into) { // Check if the current node is null before accessing members
        inOrderHelper(into->leftNode);
        std::cout << into->TreeData << " "; // Print the node's TreeData
        inOrderHelper(into->rightNode);
    }
}
template <typename BaseData>
void Tree<BaseData>::insertHelper(BaseData data,treeNode<BaseData>* &into){
    if(!into){
        into = new treeNode<BaseData>(data);
    }
    else if((into->TreeData)<=data && into->rightNode==nullptr)
    {
        into->rightNode = new treeNode<BaseData>(data);
    }
    else if((into->TreeData)<=data){
        insertHelper(data, into->rightNode);
    }
    else if((into->TreeData)>data && into->leftNode==nullptr)
    {
        into->leftNode = new treeNode<BaseData>(data);
    }
    else{
        insertHelper(data, into->leftNode);
    
    }
}

template <typename BaseData>
void Tree<BaseData>::remove(treeNode<BaseData>* &target){

        treeNode<BaseData>* currentPos = target; //current Possition (to track, find next suitable value to replace target)
            treeNode<BaseData>* followCurr = nullptr; //follows currentPos (parent of currentPos)
        treeNode<BaseData>*  parent = root;
        

    if(target->rightNode == nullptr && target->leftNode ==nullptr){//leaf node
            target = nullptr;
            
    
    }    
    if (target != nullptr && target != root) { // Ensure target is not the root and not null

    //Find parent Node(ParentNode of the Target)
            
        while (parent->rightNode != target && parent->leftNode != target) {
            if (parent->TreeData < target->TreeData) 
                parent = parent->rightNode;

            else 
                parent = parent->leftNode;
            
        }
        
        
    

    }
    //Removing for target that has no leftNode                 
    if(target != nullptr && target->leftNode == nullptr ){
                    currentPos = currentPos->rightNode;
                    
                    if (parent->TreeData> currentPos->TreeData && target !=root){
                        parent->leftNode = currentPos;}
                    else if(target == root){
                        currentPos= target->rightNode;
                        root = currentPos;

                    }
                    else{
                        parent->rightNode = currentPos;
                    }
                
            }
    //Removing for target that has both leftNode and RightNode   or only RightNode       
    else if(target != nullptr ){
        currentPos = target->leftNode;
        while(currentPos->rightNode!=nullptr){
            followCurr = currentPos;
            currentPos = currentPos->rightNode;
        }   
                    if (parent->TreeData> currentPos->TreeData && target !=root){
                        currentPos->rightNode= target->rightNode;
                        if(currentPos->leftNode!=nullptr){
                            currentPos->leftNode=followCurr->leftNode;
                        } 
                        else{
                            currentPos->leftNode = target->leftNode;
                        }
                        parent->leftNode = currentPos;
                        currentPos =nullptr;
                        followCurr->rightNode = nullptr;
                        
                    }
                    else if(target == root){
                        currentPos->rightNode= target->rightNode;
                        root = currentPos;

                    }
                    else{ 
                        currentPos->rightNode= target->rightNode; 
                        if(currentPos->leftNode!=nullptr){
                            currentPos->leftNode->leftNode=target->leftNode;
                        } 
                        else{
                            currentPos->leftNode = target->leftNode;
                        }
                        parent->rightNode = currentPos;
                        currentPos =nullptr;
                        followCurr->rightNode = nullptr;

                        
                    }
                    
        

    }
};