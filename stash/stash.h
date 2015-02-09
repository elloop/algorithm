/*
 * 用法：
 * 1. 创建一个stash
 * 2. 把要存放的指针放入栈顶
 * 3. 返回栈顶指针，同时弹栈
 * 4. 去栈顶元素，不弹栈
 * 5. 清空栈
 * =====================================================================================
 *        Class:  Stash
 *  Description:  a container simulate a link stack
 * =====================================================================================
 */

_Pragma("once")

namespace elloop {

class Stash {
public:
	/* ====================  LIFECYCLE     ======================================= */
	Stash ();                             /* constructor */
	~Stash();

	void * pop();
	void * peek();
	void push ( void * data );
	void cleanup();
	bool empty();

protected:
	struct Link {
		void * data;
		Link * link;
		void initialize ( void * data, Link * link );
	} * head_;

}; /* -----  end of class Stash  ----- */

} // end namespace elloop;
