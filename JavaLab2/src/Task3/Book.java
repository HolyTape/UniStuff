package Task3;

public class Book {
    private String author;
    private int pageNumber;
    private String name;
    private String date;

    public Book(String author, int pageNumber, String name, String date){
        this.author = author;
        this.pageNumber = pageNumber;
        this.name = name;
        this.date = date;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public void setDate(String date) {
        this.date = date;
    }

    public void setPageNumber(int pageNumber) {
        this.pageNumber = pageNumber;
    }

    public int getPageNumber() {
        return pageNumber;
    }

    public String getAuthor() {
        return author;
    }

    public String getDate() {
        return date;
    }

    public String getName() {
        return name;
    }

}
