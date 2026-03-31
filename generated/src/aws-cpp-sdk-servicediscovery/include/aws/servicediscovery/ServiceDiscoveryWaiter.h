/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/servicediscovery/ServiceDiscoveryClient.h>

#include <algorithm>

namespace Aws {
namespace ServiceDiscovery {

template <typename DerivedClient = ServiceDiscoveryClient>
class ServiceDiscoveryWaiter {
 public:
};
}  // namespace ServiceDiscovery
}  // namespace Aws
