/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/tnb/TnbClient.h>

#include <algorithm>

namespace Aws {
namespace tnb {

template <typename DerivedClient = TnbClient>
class TnbWaiter {
 public:
};
}  // namespace tnb
}  // namespace Aws
