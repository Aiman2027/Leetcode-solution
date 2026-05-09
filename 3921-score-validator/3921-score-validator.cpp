class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
    
      int counter =0;
      int total =0;
      for( auto &it : events){
          if(counter == 10)
              break;
        if(it == "W"){
         counter++;
     }
      else if(it == "WD" || it == "NB"){
          total += 1;
      
      }
          else{
              total += stoi(it);
          }
}

     return {total,counter}; }
};