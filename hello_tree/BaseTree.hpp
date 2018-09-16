//
//  BaseTree.hpp
//  hello_tree
//
//  Created by 陈宇 on 2018/9/15.
//  Copyright © 2018年 陈宇. All rights reserved.
//

#ifndef BaseTree_hpp
#define BaseTree_hpp

#include <stdio.h>
#include <string>
//节点
//指针域
//数据域
struct Node
{
    Node* p_node;//指针域 指向自己 point to oneself points field
    Node* p_parentNode;//point to parents node
    //point to
    //data field
    std::string m_nodeName;//node name
    virtual std::string getName(){return m_nodeName;} //get node name
};
//base tree
//树的定义 tree definition
//树的数据结构 tree data structure
class BaseTree
{
    
};

#endif /* BaseTree_hpp */
