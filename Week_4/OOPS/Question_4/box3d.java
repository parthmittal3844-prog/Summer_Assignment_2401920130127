class box3d extends box{
    double height;
    
    box3d(double length, double breadth, double height){
        super(length,breadth);
        this.height=height;
    }
    double volume(){
        return length*breadth*height;
    }
}
