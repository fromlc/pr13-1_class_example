funcs::displayDimensions(box);

namespace funcs {
    //----------------------------------------------------------------------
    // Display the rectangle's data
    //----------------------------------------------------------------------
    void displayDimensions(Rectangle r) {
        cout << "Here is the rectangle's data:\n";
        cout << "Width: " << r.getWidth() << endl;
        cout << "Length: " << r.getLength() << endl;
        cout << "Area: " << r.getArea() << endl;
    }
}
