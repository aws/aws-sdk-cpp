/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/mwaa-serverless/MWAAServerlessClient.h>

#include <algorithm>

namespace Aws {
namespace MWAAServerless {

template <typename DerivedClient = MWAAServerlessClient>
class MWAAServerlessWaiter {
 public:
};
}  // namespace MWAAServerless
}  // namespace Aws
