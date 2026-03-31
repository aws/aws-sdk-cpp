/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/security-ir/SecurityIRClient.h>

#include <algorithm>

namespace Aws {
namespace SecurityIR {

template <typename DerivedClient = SecurityIRClient>
class SecurityIRWaiter {
 public:
};
}  // namespace SecurityIR
}  // namespace Aws
