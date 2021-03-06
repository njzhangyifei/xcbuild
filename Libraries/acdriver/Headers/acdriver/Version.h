/**
 Copyright (c) 2015-present, Facebook, Inc.
 All rights reserved.

 This source code is licensed under the BSD-style license found in the
 LICENSE file in the root directory of this source tree.
 */

#ifndef __acdriver_Version_h
#define __acdriver_Version_h

#include <string>

namespace acdriver {

/*
 * Computes driver version information.
 */
class Version {
private:
    Version();
    ~Version();

public:
    /*
     * The machine-readable build version.
     */
    static int BuildVersion();

    /*
     * The human-readable user version.
     */
    static std::string UserVersion();
};

}

#endif // !__acdriver_Version_h
