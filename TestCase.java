public class Testy extends junit.framework.TestCase {
int number;
public void test() throws InterruptedException{
number=0;
Thread t=new Thread(new Runnable() {
public void run(){
assertEquals(2,number);
}

}};
number=1;
t.start();
number++;
t.join();
}

}
