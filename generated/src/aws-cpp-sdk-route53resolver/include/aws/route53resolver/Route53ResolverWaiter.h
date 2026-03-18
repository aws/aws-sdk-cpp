/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/route53resolver/Route53ResolverClient.h>

#include <algorithm>

namespace Aws {
namespace Route53Resolver {

template <typename DerivedClient = Route53ResolverClient>
class Route53ResolverWaiter {
 public:
};
}  // namespace Route53Resolver
}  // namespace Aws
