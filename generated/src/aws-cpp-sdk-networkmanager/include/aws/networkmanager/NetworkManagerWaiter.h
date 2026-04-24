/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/networkmanager/NetworkManagerClient.h>

#include <algorithm>

namespace Aws {
namespace NetworkManager {

template <typename DerivedClient = NetworkManagerClient>
class NetworkManagerWaiter {
 public:
};
}  // namespace NetworkManager
}  // namespace Aws
