package Task3;

public class BookTest {
    public static void main(String[] args){
        String name = "";
        String author = "";
        String date = "";
        int pageNumber = 0;

        Book book_1 = new Book(author, pageNumber, name, date);
        book_1.setAuthor("Jesus");
        book_1.setDate("~30 C.E.");
        book_1.setName("The Holy Bible");
        book_1.setPageNumber(9000);
        System.out.println(book_1.getName());
        System.out.println(book_1.getAuthor());
        System.out.println(book_1.getDate());
        System.out.println(book_1.getPageNumber());
    }
}
