/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/osis/OSISClient.h>

#include <algorithm>

namespace Aws {
namespace OSIS {

template <typename DerivedClient = OSISClient>
class OSISWaiter {
 public:
};
}  // namespace OSIS
}  // namespace Aws
