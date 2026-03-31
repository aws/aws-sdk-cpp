/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/route53profiles/Route53ProfilesClient.h>

#include <algorithm>

namespace Aws {
namespace Route53Profiles {

template <typename DerivedClient = Route53ProfilesClient>
class Route53ProfilesWaiter {
 public:
};
}  // namespace Route53Profiles
}  // namespace Aws
