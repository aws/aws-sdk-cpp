/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/support-app/SupportAppClient.h>

#include <algorithm>

namespace Aws {
namespace SupportApp {

template <typename DerivedClient = SupportAppClient>
class SupportAppWaiter {
 public:
};
}  // namespace SupportApp
}  // namespace Aws
