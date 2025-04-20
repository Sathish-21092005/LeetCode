class Solution {
    public int countStudents(int[] students, int[] sandwiches) {
          Queue<Integer> studentQueue = new LinkedList<>();
        for (int student : students) {
            studentQueue.offer(student);
        }
        int index = 0; 
        int count = 0; 
        while (!studentQueue.isEmpty() && count < studentQueue.size()) {
            if (studentQueue.peek() == sandwiches[index]) {
                studentQueue.poll(); 
                index++;
                count = 0;
            } else {
                studentQueue.offer(studentQueue.poll()); 
                count++; 
            }
        }

        return studentQueue.size();
    }
}