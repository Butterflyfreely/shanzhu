#include<stdio.h>
#include<string.h>
#include<cJSON.h>


int main(int argc,const char* argv[])
{
    if(argc<2)
    {
        printf("./a.out jsonfile\n");//传参传入文件名
        return 0;
    }

    //加载jison文件
    FILE* fp=fopen(argv[1],"r");
    cnar buf[1024]={0};
    fread(buf,1,sizeof(buf),fp);
    cJSON* root =cJSON_Parse(buf);

    cJSON* subobj=cJSON_Get0bjectItem(root,"奔驰");
    //判断对象是否存在
    if(subobj)
    {
        //获取子对象
        cJSON* factory=cJson_Get0bjectItem(subobj,"factory");
        cJSON* last=cJson_Get0bjectItem(subobj,"last");
        cJSON* price=cJson_Get0bjectItem(subobj,"price");
        cJSON* sell=cJson_Get0bjectItem(subobj,"sell");
        cJSON* sum=cJson_Get0bjectItem(subobj,"sum");
        cJSON* other=cJson_Get0bjectItem(subobj,"other");

        //打印value值
        printf()



    }
    

}
