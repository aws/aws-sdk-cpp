/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/route53globalresolver/Route53GlobalResolverClient.h>

#include <algorithm>

namespace Aws {
namespace Route53GlobalResolver {

template <typename DerivedClient = Route53GlobalResolverClient>
class Route53GlobalResolverWaiter {
 public:
};
}  // namespace Route53GlobalResolver
}  // namespace Aws
