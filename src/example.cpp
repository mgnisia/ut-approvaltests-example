#define APPROVALS_UT
#include "libs/ApprovalTests.v.10.3.0.hpp"

int main() {
    
    // namespaces
    using namespace boost::ut;
    using namespace ApprovalTests;
    "ItCanVerifyAFile"_test = []() {
        Approvals::verify("Approval Tests can verify text via the golden master method");
    };

    "ItCanVerifyAFile&"_test = [&]() {
        Approvals::verify("Approval Tests can verify text via the golden master method - Cant find the file");
    };

    return 0;
}