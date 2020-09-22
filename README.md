# README

This repository contains a minimal working example while using ApprovalTests for the following problem:

if one uses the ampersand-Flag `&` ApprovalTests will not be able to find the correct reference file.

## Error Message

```txt
Running "ItCanVerifyAFile"...PASSED
Running "ItCanVerifyAFile&"...
  Unexpected exception with message:


*****************************************************************************
*                                                                           *
* Welcome to Approval Tests.
*
* There seems to be a problem with your build configuration.
* We cannot find the test source file at:
*   unknown
*
* For details on how to fix this, please visit:
* https://github.com/approvals/ApprovalTests.cpp/blob/master/doc/TroubleshootingMisconfiguredBuild.md
*                                                                           *
*****************************************************************************


FAILED

===============================================================================
tests:   2 | 1 failed
asserts: 1 | 0 passed | 1 failed
```

## Modifications

`#include <boost/ut.hpp>` replaced with `#include "libs/ut.hpp"` in [ApprovalTests.v.10.3.0.hpp](libs/ApprovalTests.v.10.3.0.hpp#2337)](https://github.com/mgnisia/ut-approvaltests-example/blob/master/libs/ApprovalTests.v.10.3.0.hpp#L2237)


## Software

* ApprovalTests Version 10.3.0
* ut Third Party List from Approval Tests library