


int a;                                 //输入数据
int arr[4];                            //定义数组存放数据

 for(int i=0;i<4;i++){
 cin>>a;
 arr[i]=a;
 }
 
int temp;                              //定义容器，存放从数组取出来的待排数据
 for(int i=1;i<4;i++){                 //取数据，第零个就不用看了，默认第零位为有序
  temp=arr[i];                         //方便后续不产生歧义，所以所以需要一个容器。
  for(int j=i-1;j>=0&& arr[j]>temp;j--){ //实际上在此层循环就是在进行依次比较
          
          arr[j+1] =arr[j];
          arr[j]=temp;                  //交换数据
           
           }
     }
for(int  i=1;i<4;i++){                  //输出数据
cout<<arr[i];
}
  
  
