#include <iostream>
using namespace std;

class Document {
    string filename;
    string colorType;
    string format;
    int countPages;
public:
    Document() :filename("none"), colorType("none"), format("none"), countPages(0) {}
    Document(string fn, string c, string f, int cP) :filename(fn),
        colorType(c), format(f), countPages(cP) {}
    void ShowDoc()
    {
        cout << "File name : " << filename << endl;
        cout << "Color type : " << colorType << endl;
        cout << "Format : " << format << endl;
        cout << "Count pages : " << countPages << endl;
    }

};
class Cartridge
{
    string color;
    float volume;
public:
    Cartridge():color("none"), volume(0){}
    Cartridge(string c, float v):color(c), volume(v){}
    void Show()const
    {
        cout << "Color : " << color << endl;
        cout << "Volume : " << volume << endl;
    } 
};
class Scaner
{
    int dpi;
    float height, width;
public:
    Scaner():dpi(0),height(0),width(0){}
    Scaner(int d, float h, float w):dpi(d),height(h),width(w){}
    void Show()const
    {
        cout << "DPI : " << dpi << endl;
        cout << "Height : " << height << endl;
        cout << "Width : " << width << endl;
    }
};

class Printer
{
    string model;
    //composition 
    Cartridge* cartriges;
    int countCartridges;
    Scaner scaner;//default c-tor

    //agregation 
    Document* doc;
public:
    Printer() :model("none"), cartriges(nullptr), countCartridges(0),doc(nullptr) {}

    Printer(string model, int dpi, float h, float w):model(model), doc(nullptr)
    {
        countCartridges = 4;
        cartriges = new Cartridge[4];
        cartriges[0] = Cartridge("black", 500);
        cartriges[1] = Cartridge("red",300);
        cartriges[2] = Cartridge("green", 300);
        cartriges[3] = Cartridge("blue", 300);

        scaner = Scaner(dpi, h, w);
    }
    void AddDocument(Document* d)
    {
        doc = d;
    }
    void Cancel()
    {
        doc = nullptr;
    }
    ~Printer()
    {
        if (cartriges != nullptr)
            delete[]cartriges;
    }
    void PrintDocument()
    {
        cout << "Printing ......." << endl;
        if (doc != nullptr)
            doc->ShowDoc();
        else
            cout << "Documet not found" << endl;
    }
    void Scan()
    {
        cout << "Scanning................" << endl;
    }
    void PrintSetting()
    {
        cout << "Scaner properties : " << endl;
        scaner.Show();
        cout << "Printer properties : " << endl;
        for (int i = 0; i < countCartridges; i++)
        {
            cartriges[i].Show();
        }
    }
};

int main()
{
    Printer printer("HP", 300, 50, 30);
    printer.PrintDocument();
    printer.Scan();
    printer.PrintSetting();

    Document document("Passport", "black", "A5", 4);
    //document.ShowDoc();
    cout << "---------- Print passport ------------" << endl;
    printer.AddDocument(&document);
    printer.Cancel();
    printer.PrintDocument();
}

