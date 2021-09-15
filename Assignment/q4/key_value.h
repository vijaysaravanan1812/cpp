
/* 4.	Write a C++ program to implement a MAP data structure with appropriate operations 
(Insertion, Deletion, Display, Search, Updation, frequently searched key, displaying the depth 
of the key provided the key as input) using AVL tree. (Map is a data structure which stores the 
items in the form of a key value pair which is used for fast lookups or searching data. Keys are 
unique where the values can be of any data type. Sometimes a key can be mapped to more than one
value also. Create appropriate user program to invoke the various function calls of Map data structure.

//Header File */
template <typename T>
class AVL
{
	private:
		
		struct node
		{
		    T data;
		    T value;
		    node* left;
		    node* right;
		    int height;
		    int count1;
		};
		node* root;
		
	public:
		AVL()
		{
			root = NULL;
		}
		
		node* findMin(node* t)
        {
            if(t == NULL)
                return NULL;
            else if(t->left == NULL)
                return t;
            else
                return findMin(t->left);
        }

        node* findMax(node* t)
        {
            if(t == NULL)
                return NULL;
            else if(t->right == NULL)
                return t;
            else
                return findMax(t->right);
        }

		node* insert(T x, T y, node* t)
        {
            if(t == NULL)
            {
                t = new node;
                t->data = x;
                t->value = y;
                t->height = 0;
                t->left = t->right = NULL;
                t->count1 = 0;
            }
            else if(x < t->data)
            {
                t->left = insert(x, y, t->left);
                if(height(t->left) - height(t->right) == 2)
                {
                    if(x < t->left->data)
                        t = RightRotate(t);
                    else
                        t = LeftRightRotate(t);
                }
            }
            else if(x > t->data)
            {
                t->right = insert(x, y, t->right);
                if(height(t->right) - height(t->left) == 2)
                {
                    if(x > t->right->data)
                        t = LeftRotate(t);
                    else
                        t = RightLeftRotate(t);
                }
            }
    
            t->height = max(height(t->left), height(t->right))+1;
            return t;
        }
        
        void insert(T x, T y)
        {
            root = insert(x, y, root);
        }
        
        node* RightRotate(node* &t)
        {
            node* u = t->left;
            t->left = u->right;
            u->right = t;
            t->height = max(height(t->left), height(t->right))+1;
            u->height = max(height(u->left), t->height)+1;
            return u;
        }
    
        node* LeftRotate(node* &t)
        {
            node* u = t->right;
            t->right = u->left;
            u->left = t;
            t->height = max(height(t->left), height(t->right))+1;
            u->height = max(height(t->right), t->height)+1 ;
            return u;
        }
    
        node* RightLeftRotate(node* &t)
        {
            t->right = RightRotate(t->right);
            return LeftRotate(t);
        }
    
        node* LeftRightRotate(node* &t)
        {
            t->left = LeftRotate(t->left);
            return RightRotate(t);
        }
        
        int height(node* t)
        {
            return (t == NULL ? -1 : t->height);
        }
    
        int getBalance(node* t)
        {
            if(t == NULL)
                return 0;
            else
                return height(t->left) - height(t->right);
        }
        
        node* delete_element(T x, node* t)
        {
            node* temp;

            if(t == NULL)
                return NULL;

            else if(x < t->data)
                t->left = delete_element(x, t->left);
            else if(x > t->data)
                t->right = delete_element(x, t->right);
    
            // Element found With 2 children
            else if(t->left && t->right)
            {
                temp = findMin(t->right);
                t->data = temp->data;
                t->value = temp->value;
                t->right = delete_element(t->data, t->right);
            }
            // With one or zero child
            else
            {
                temp = t;
                if(t->left == NULL)
                    t = t->right;
                else if(t->right == NULL)
                    t = t->left;
                delete temp;
            }
            if(t == NULL)
                return t;
    
            t->height = max(height(t->left), height(t->right))+1;

            if(height(t->left) - height(t->right) == 2)
            {
                if(height(t->left->left) - height(t->left->right) == 1)
                    return LeftRotate(t);
                else
                    return RightLeftRotate(t);
            }
            else if(height(t->right) - height(t->left) == 2)
            {
                if(height(t->right->right) - height(t->right->left) == 1)
                    return RightRotate(t);
                else
                    return LeftRightRotate(t);
            }
            return t;
        }
        
        void delete_element(T x)
        {
            root = delete_element(x, root);
        }
        
		void search(T key)
		{
		    node *t = root;
		    while (t != NULL)
			{
		        if (t->data == key) {
		            cout << "Value of the key entered: " << t->value << endl;
		            t->count1++;
		            break;
		        }
		        t = t->data < key ? t->right : t->left;
		    }
		}
		
		void update(T key, T new_value)
		{
		    node *t = root;
		    while (t != NULL)
			{
		        if (t->data == key) {
		            t->value = new_value;
		            break;
		        }
		        t = t->data < key ? t->right : t->left;
		    }
		}

		void frequency(node *&t)
		{
			if (t != NULL)
			{
				cout << " || " << setw(18) << t->data <<  " || " << setw(15) << t->value << " || " << setw(12) << t->count1  << " || " << endl;
				frequency(t->left);
		    	frequency(t->right);
		    }    
		}
		
		void frequency()
		{
			frequency(root);
		}
		
		int findDepth(string x, node *root)
		{
		    if (root == NULL)
		        return -1;
		 
		    int dist = -1;
		 
		    if ((root->data == x) || (dist = findDepth(x,root->left)) >= 0 || (dist = findDepth(x,root->right)) >= 0)
		        return dist + 1;
		        
		    return dist;
		}
		
		int findDepth(string x)
		{
			int depth;
			depth = findDepth(x, root);
			return depth;
		}
		
        void display(node *ptr, int level)
		{
			int i;
			if (ptr!=NULL)
			{
			    display(ptr->right, level + 1);
			    printf("\n");
			    printf("\n");
			    if (ptr == root)
			    cout<<"Root -> ";
			    for (i = 0; i < level && ptr != root; i++)
			        cout<<"        ";
			    cout<<ptr->data<<"=>\""<<ptr->value<<"\"";
			    display(ptr->left, level + 1);
			}
		}
        
        void display(int n)
        {
        	display(root,n);
		}
};
