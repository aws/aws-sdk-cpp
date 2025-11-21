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
enum class ChangeType {
  NOT_SET,
  CORE_NETWORK_SEGMENT,
  NETWORK_FUNCTION_GROUP,
  CORE_NETWORK_EDGE,
  ATTACHMENT_MAPPING,
  ATTACHMENT_ROUTE_PROPAGATION,
  ATTACHMENT_ROUTE_STATIC,
  ROUTING_POLICY,
  ROUTING_POLICY_SEGMENT_ASSOCIATION,
  ROUTING_POLICY_EDGE_ASSOCIATION,
  ROUTING_POLICY_ATTACHMENT_ASSOCIATION,
  CORE_NETWORK_CONFIGURATION,
  SEGMENTS_CONFIGURATION,
  SEGMENT_ACTIONS_CONFIGURATION,
  ATTACHMENT_POLICIES_CONFIGURATION
};

namespace ChangeTypeMapper {
AWS_NETWORKMANAGER_API ChangeType GetChangeTypeForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForChangeType(ChangeType value);
}  // namespace ChangeTypeMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
