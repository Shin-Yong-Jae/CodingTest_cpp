#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> price){
    //answer = 몇 초후 차익이 나는지 저장하는 배열.
    vector<int> answer(price.size(),-1);

    //stack = price 의 인덱스를 차례로 담아두는 배열.
    vector<int> stack ={0};

    for(int i=1; i<price.size(); i++)
    {
        while(stack.size()>0)
        {
            int index = stack[stack.size()-1];

            //주식 가격이 올랐다면
            if(price[index]<price[i])
            {
                answer[index] = i-index;
                stack.pop_back();
            }
            //주식 가격이 오르지 않았다면 다음 시점으로 넘어감.
            else break;
        }
        //스택에 추가한다.
        stack.push_back(i);
    }
    return answer;
}