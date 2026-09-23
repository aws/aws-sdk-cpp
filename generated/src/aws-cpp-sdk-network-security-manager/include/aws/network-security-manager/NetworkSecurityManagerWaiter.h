/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/network-security-manager/NetworkSecurityManagerClient.h>

#include <algorithm>

namespace Aws {
namespace NetworkSecurityManager {

template <typename DerivedClient = NetworkSecurityManagerClient>
class NetworkSecurityManagerWaiter {
 public:
};
}  // namespace NetworkSecurityManager
}  // namespace Aws
