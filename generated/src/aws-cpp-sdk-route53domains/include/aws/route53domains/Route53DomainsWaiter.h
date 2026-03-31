/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/route53domains/Route53DomainsClient.h>

#include <algorithm>

namespace Aws {
namespace Route53Domains {

template <typename DerivedClient = Route53DomainsClient>
class Route53DomainsWaiter {
 public:
};
}  // namespace Route53Domains
}  // namespace Aws
