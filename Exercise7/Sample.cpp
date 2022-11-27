class Sample {
private:
    int x;
    double y;
public:
    Sample(){
        x = 0; y = 0;
    };    
    Sample(int a){
        x = a; y = 0;
    };
    Sample(int a,int b){
        x = a; y =(double)b;
    };
    Sample(int a,double b){
        x = a; y = b;
    };
};

int main(){
    Sample Test;
    cout << Test.x << " " << Test.y;
    return 0;
}