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
enum class UpdateType { NOT_SET, GATEWAY_CONFIG_UPDATE, LINK_CONFIG_UPDATE, LINK_FLOW_UPDATE, ROUTING_RULE_UPDATE };

namespace UpdateTypeMapper {
AWS_RTBFABRIC_API UpdateType GetUpdateTypeForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForUpdateType(UpdateType value);
}  // namespace UpdateTypeMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
