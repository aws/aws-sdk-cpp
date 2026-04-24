/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>

namespace Aws {
namespace ServiceDiscovery {
namespace Model {
enum class RoutingPolicy { NOT_SET, MULTIVALUE, WEIGHTED };

namespace RoutingPolicyMapper {
AWS_SERVICEDISCOVERY_API RoutingPolicy GetRoutingPolicyForName(const Aws::String& name);

AWS_SERVICEDISCOVERY_API Aws::String GetNameForRoutingPolicy(RoutingPolicy value);
}  // namespace RoutingPolicyMapper
}  // namespace Model
}  // namespace ServiceDiscovery
}  // namespace Aws
