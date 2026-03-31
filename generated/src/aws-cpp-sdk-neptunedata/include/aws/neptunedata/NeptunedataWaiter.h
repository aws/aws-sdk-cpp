/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/neptunedata/NeptunedataClient.h>

#include <algorithm>

namespace Aws {
namespace neptunedata {

template <typename DerivedClient = NeptunedataClient>
class NeptunedataWaiter {
 public:
};
}  // namespace neptunedata
}  // namespace Aws
