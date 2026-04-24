/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/oam/OAMClient.h>

#include <algorithm>

namespace Aws {
namespace OAM {

template <typename DerivedClient = OAMClient>
class OAMWaiter {
 public:
};
}  // namespace OAM
}  // namespace Aws
