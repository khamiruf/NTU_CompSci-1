package question2;

public class Cube extends Square implements _3d {
		
	public Cube(int side) {
		super(side);
	}
	
	public double getVolume() {
		return Math.pow(super.getSide(), 3);
	}
}
