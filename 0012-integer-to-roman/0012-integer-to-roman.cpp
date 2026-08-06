class Solution {
public:
    string intToRoman(int num) {
        string col="";
        int i=0;
        vector<int> arr;
        while(num>0){
            int lastdigit=num%10;
            arr.push_back(pow(10,i)*lastdigit);
            num=num/10;
            i++;
        }
        reverse(arr.begin(),arr.end());
        i=0;
        int count=0;
        while(i<arr.size()){
        if(arr[i]%1000==0){
            count=arr[i]/1000;
            string re(count,'M');
            col+=re;
        }
        if(arr[i]==900 && arr[i]!=0){
            col+="CM";
        }
        if(arr[i]<900 && arr[i]>500){
            col+='D';
            int j=arr[i]-500;
            count=j/100;
            string m(count,'C');
            col+=m;
        }
        if(arr[i]==500)col+='D';
        if(arr[i]<500 && arr[i]!=0){
            if(arr[i]==400) col+="CD";
            else{
                count=arr[i]/100;
                string go(count,'C');
                col+=go;
            }
            }
        if(arr[i]<100 && arr[i]>50 ){
            if(arr[i]==90) col+="XC";
            else{
                int k=arr[i]-50;
                col+="L";
                count=k/10;
                string h(count,'X');
                col+=h;  
            }
        }
        if(arr[i]==50) col+='L';
        if(arr[i]<50 && arr[i]!=0){
            if(arr[i]==40) col+="XL";
            else{
                count=arr[i]/10;
                string jk(count,'X');
                col+=jk;
            }
        }
        if(arr[i]<10 && arr[i]>5){
            if(arr[i]==9) col+="IX";
            else{
                int l=arr[i]-5;
                col+="V";
                count=l;
                string f(count,'I');
                col+=f;
            }
        }
        if(arr[i]==5) col+='V';
        if(arr[i]<5 && arr[i]!=0){
            if(arr[i]==4)col+="IV";
            else{
                string d(arr[i],'I');
                col+=d;
            

            } 

        }
        i++;
        }
        return col;
    }
};