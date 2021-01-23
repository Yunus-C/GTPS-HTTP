//
//  HTTPRequest
//

#include <iostream>
#include <fstream>
#include "HTTPRequest.hpp"

using namespace std;

int main()
{
    {
        SetConsoleTitleA("HTTP Server Checker by Yunus#9087");
        string bruh = "";
        cout << "If you want to withdraw GTPS server_data.php using the GET method, write GTPS.\n";
        cout << "If you want to browse sites using the GET method, write SITE.\n";
        cout << "HTTP Server Checker by Yunus#9087\n";
        cout << "Answer: ";
        cin >> bruh;
        if (bruh == "SITE") {
            try
            {
                string bruhh = "";
                cout << "HTTP Server Checker by Yunus#9087\n";
                cout << "Enter IP Address (craftrise.tc or smth.): ";
                cin >> bruhh;
                http::Request request(bruhh);
                // send a post request
                const http::Response response = request.send("POST", "foo=1&bar=baz", {
                    "Content-Type: application/x-www-form-urlencoded"
                    });
                std::cout << std::string(response.body.begin(), response.body.end()) << '\n'; // print the result
                return main();
            }
            catch (const std::exception& e)
            {
                std::cerr << "Request failed, error: " << e.what() << '\n';
            }
        }
        if (bruh == "GTPS") {
            try
            {
                std::string bruhgir = "";
                cout << "HTTP Server Checker by Yunus#9087\n";
                std::cout << "Enter GTPS IP Address: ";
                std::cin >> bruhgir;
                std::cout << endl;
                http::Request request(bruhgir + "/growtopia/server_data.php");
                // send a post request
                const http::Response response = request.send("POST", "foo=1&bar=baz", {
                    "Content-Type: application/x-www-form-urlencoded"
                    });
                std::cout << std::string(response.body.begin(), response.body.end()) << '\n'; // print the result
                std::cout << endl;
                return main();
            }
            catch (const std::exception& e)
            {
                std::cerr << "Request failed, error: " << e.what() << '\n';
            }
        }
    }
}
