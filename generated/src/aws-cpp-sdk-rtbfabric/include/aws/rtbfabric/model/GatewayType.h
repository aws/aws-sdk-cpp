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
enum class GatewayType { NOT_SET, EXTERNAL, INTERNAL };

namespace GatewayTypeMapper {
AWS_RTBFABRIC_API GatewayType GetGatewayTypeForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForGatewayType(GatewayType value);
}  // namespace GatewayTypeMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
