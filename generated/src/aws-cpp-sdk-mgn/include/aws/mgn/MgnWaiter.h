/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/mgn/MgnClient.h>

#include <algorithm>

namespace Aws {
namespace mgn {

template <typename DerivedClient = MgnClient>
class MgnWaiter {
 public:
};
}  // namespace mgn
}  // namespace Aws
