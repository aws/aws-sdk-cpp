/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

namespace Aws {
namespace NetworkManager {
namespace Model {
enum class RoutingPolicyDirection { NOT_SET, inbound, outbound };

namespace RoutingPolicyDirectionMapper {
AWS_NETWORKMANAGER_API RoutingPolicyDirection GetRoutingPolicyDirectionForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForRoutingPolicyDirection(RoutingPolicyDirection value);
}  // namespace RoutingPolicyDirectionMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
