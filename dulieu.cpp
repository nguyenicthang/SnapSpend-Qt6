#include "dulieu.h"

bool luuFileCSV(vector<GiaoDich> ds, string tenFile)
{
    ofstream file(tenFile);

    if (!file.is_open())
        return false;

    for (int i = 0; i < ds.size(); i++)
    {
        file << ds[i].danhMuc << ",";
        file << ds[i].noiDung << ",";
        file << ds[i].soTien;

        if (i != ds.size() - 1)
            file << endl;
    }

    file.close();

    return true;
}

vector<GiaoDich> docFileCSV(string tenFile)
{
    vector<GiaoDich> ds;

    ifstream file(tenFile);

    if (!file.is_open())
        return ds;

    string line;

    while (getline(file, line))
    {
        stringstream ss(line);

        string danhMuc;
        string noiDung;
        string tien;

        getline(ss, danhMuc, ',');
        getline(ss, noiDung, ',');
        getline(ss, tien, ',');

        GiaoDich gd;

        gd.danhMuc = danhMuc;
        gd.noiDung = noiDung;
        gd.soTien = stod(tien);

        ds.push_back(gd);
    }

    file.close();

    return ds;
}

bool hopLeSoTien(string s)
{
    if (s.empty())
        return false;

    int cham = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            cham++;

            if (cham > 1)
                return false;
        }
        else if (!isdigit(s[i]))
        {
            return false;
        }
    }

    return true;
}