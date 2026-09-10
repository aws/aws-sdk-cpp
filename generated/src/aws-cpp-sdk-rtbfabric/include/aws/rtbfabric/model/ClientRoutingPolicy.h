/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace RTBFabric {
namespace Model {
enum class ClientRoutingPolicy { NOT_SET, AVAILABILITY_ZONE_AFFINITY, ANY_AVAILABILITY_ZONE };

namespace ClientRoutingPolicyMapper {
AWS_RTBFABRIC_API ClientRoutingPolicy GetClientRoutingPolicyForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForClientRoutingPolicy(ClientRoutingPolicy value);
}  // namespace ClientRoutingPolicyMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
