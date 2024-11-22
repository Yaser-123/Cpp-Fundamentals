#include <iostream>
#include <cstdlib>

struct BST
{
    int info;
    BST *left, *right;
} *root = nullptr, *parent, *loc, *parsuc, *suc, *newnode, *child;

BST* searching(int);
void traversal(BST*);
void insertion(int);
void case1(BST*, BST*);
void case2(BST*, BST*);
void case3(BST*, BST*);
void deletion(int);

BST* searching(int key)
{
    parent = nullptr;
    loc = root;
    while (loc != nullptr)
    {
        if (loc->info == key)
            return loc;
        else if (loc->info > key)
        {
            parent = loc;
            loc = loc->left;
        }
        else
        {
            parent = loc;
            loc = loc->right;
        }
    }
    return loc;
}

void traversal(BST* root)
{
    if (root != nullptr)
    {
        traversal(root->left);
        std::cout << root->info << "\t";
        traversal(root->right);
    }
}

void insertion(int key)
{
    loc = searching(key);
    newnode = (BST*)malloc(sizeof(BST));
    newnode->info = key;
    newnode->left = nullptr;
    newnode->right = nullptr;
    if (loc != nullptr)
    {
        return;
    }
    else
    {
        if (parent == nullptr)
        {
            root = newnode;
        }
        else
        {
            if (parent->info > key)
                parent->left = newnode;
            else
                parent->right = newnode;
        }
    }
}

void deletion(int key)
{
    loc = searching(key);
    if (loc == nullptr)
    {
        return;
    }
    else
    {
        if (loc->left == nullptr && loc->right == nullptr)
            case1(parent, loc);
        else if (loc->left == nullptr || loc->right == nullptr)
            case2(parent, loc);
        else
            case3(parent, loc);
    }
}

void case1(BST* parent, BST* loc)
{
    if (parent == nullptr)
    {
        root = nullptr;
    }
    else
    {
        if (loc == parent->left)
            parent->left = nullptr;
        else
            parent->right = nullptr;
    }
}

void case2(BST* parent, BST* loc)
{
    if (loc->left != nullptr)
        child = loc->left;
    else
        child = loc->right;
    if (parent == nullptr)
    {
        root = child;
    }
    else
    {
        if (parent->left == loc)
            parent->left = child;
        else
            parent->right = child;
    }
}

void case3(BST* parent, BST* loc)
{
    parsuc = loc;
    suc = loc->right;
    while (suc->left != nullptr)
    {
        parsuc = suc;
        suc = suc->left;
    }
    if (suc->left == nullptr && suc->right == nullptr)
        case1(parsuc, suc);
    else
        case2(parsuc, suc);
    if (parent == nullptr)
    {
        root = suc;
    }
    else
    {
        if (loc == parent->right)
            parent->right = suc;
        else
            parent->left = suc;
    }
    suc->left = loc->left;
    suc->right = loc->right;
}

int main()
{
    int choice, ch, key;
    do
    {
        std::cout << "\n1. Insertion\n2. Deletion\n3. Searching\n4. Traversal\nEnter your choice: ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            std::cout << "\nEnter key to be inserted: ";
            std::cin >> key;
            insertion(key);
            if (loc == nullptr)
                std::cout << "\nKey " << key << " inserted";
            break;

        case 2:
            std::cout << "\nEnter key to be deleted: ";
            std::cin >> key;
            deletion(key);
            if (loc != nullptr)
                std::cout << "\nKey " << key << " deleted";
            break;

        case 3:
            std::cout << "\nEnter key to be searched: ";
            std::cin >> key;
            loc = searching(key);
            if (loc != nullptr)
                std::cout << "\nElement Found";
            else
                std::cout << "\nElement Not Found";
            break;

        case 4:
            std::cout << "\nThe Inorder Traversal is:\n";
            traversal(root);
            break;
        }
        std::cout << "\nTo continue press 1 to exit press 0: ";
        std::cin >> ch;
    } while (ch);
    return 0;
}
