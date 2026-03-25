/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/odb/OdbClient.h>

#include <algorithm>

namespace Aws {
namespace odb {

template <typename DerivedClient = OdbClient>
class OdbWaiter {
 public:
};
}  // namespace odb
}  // namespace Aws
