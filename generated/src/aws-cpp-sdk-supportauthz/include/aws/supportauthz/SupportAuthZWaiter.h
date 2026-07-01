/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/supportauthz/SupportAuthZClient.h>

#include <algorithm>

namespace Aws {
namespace SupportAuthZ {

template <typename DerivedClient = SupportAuthZClient>
class SupportAuthZWaiter {
 public:
};
}  // namespace SupportAuthZ
}  // namespace Aws
