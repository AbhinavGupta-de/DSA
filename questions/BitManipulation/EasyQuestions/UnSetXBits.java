package questions.BitManipulation.EasyQuestions;

public class UnSetXBits {
 public int unsetBits(int num, int x) {
  num = num >> x;
  num = num << x;
  return num;
 }
}
