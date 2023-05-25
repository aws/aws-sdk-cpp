/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <TestDelegator.h>

namespace Benchmark {
    class S3PutObject {
    public:
        static TestFunction CreateTestFunction();
    };
}
