//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"
#include<iostream>
using std::string;

TopTenList::TopTenList()
{}

void TopTenList::set_at(int index, Hyperlink link)
{
    Hyperlink newLink;
    newLink.text = link.text;
    newLink.url = link.url;
    _list.push_back(newLink);
}

Hyperlink TopTenList::get(int index)
{
    return _list[index];
}

void TopTenList::display_forward(){

    if( _list.size() == 0 )
    {
        std::cout <<" is empty.\n";
    }
    for(int i=0; i <_list.size(); i++)
    {
        std::cout << i+1 << "." << _list[i].text << " "
             <<_list[i].url << std::endl;
    }
}
void TopTenList::display_backward(){
    if( _list.size() == 0 )
    {
        std::cout <<" is empty.\n";
    }
    else
    {
        std::cout <<":\n";
    }
    for(int i = _list.size()-1; i >= 0; i++)
    {
        std::cout <<_list[i].text << " "
             <<_list[i].url << std::endl;
    }
}
