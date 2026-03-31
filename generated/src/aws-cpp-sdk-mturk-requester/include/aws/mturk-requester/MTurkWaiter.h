/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/mturk-requester/MTurkClient.h>

#include <algorithm>

namespace Aws {
namespace MTurk {

template <typename DerivedClient = MTurkClient>
class MTurkWaiter {
 public:
};
}  // namespace MTurk
}  // namespace Aws
