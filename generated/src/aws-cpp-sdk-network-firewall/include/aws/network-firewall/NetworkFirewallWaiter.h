/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/network-firewall/NetworkFirewallClient.h>

#include <algorithm>

namespace Aws {
namespace NetworkFirewall {

template <typename DerivedClient = NetworkFirewallClient>
class NetworkFirewallWaiter {
 public:
};
}  // namespace NetworkFirewall
}  // namespace Aws
