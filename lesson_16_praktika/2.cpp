// shared_ptr-examples.cpp
// The following examples assume these declarations:
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

struct MediaAsset
{
    virtual ~MediaAsset() = default; // make it polymorphic
};

struct Song : public MediaAsset
{
    std::wstring artist;
    std::wstring title;
    Song(const std::wstring& artist_, const std::wstring& title_) :
        artist{ artist_ }, title{ title_ } {}
};

struct Photo : public MediaAsset
{
    std::wstring date;
    std::wstring location;
    std::wstring subject;
    Photo(
        const std::wstring& date_,
        const std::wstring& location_,
        const std::wstring& subject_) :
        date{ date_ }, location{ location_ }, subject{ subject_ } {}
};

using namespace std;

int main()
{
    
    std::unique_ptr<Song> unq(new Song(L"Str1",L"Str2 ""\n"));
    std::cout<<sizeof(unq);
    auto sp1 = make_shared<Song>(L"The Beatles", L"Im Happy Just to Dance With You");
    std::cout<<sizeof(sp1);
    auto scopy = sp1;
    //std::wcout<<unq->artist<<unq->title;
    //auto unq1 = std::move(unq);
    // //std::wcout<<unq1->artist<<unq1->title;
    //std::wcout<<unq->artist<<unq->title;
    //Song *obj = new Song(L"",L"");
}

