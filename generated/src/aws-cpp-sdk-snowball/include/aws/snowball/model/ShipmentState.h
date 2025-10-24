/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/Snowball_EXPORTS.h>

namespace Aws {
namespace Snowball {
namespace Model {
enum class ShipmentState { NOT_SET, RECEIVED, RETURNED };

namespace ShipmentStateMapper {
AWS_SNOWBALL_API ShipmentState GetShipmentStateForName(const Aws::String& name);

AWS_SNOWBALL_API Aws::String GetNameForShipmentState(ShipmentState value);
}  // namespace ShipmentStateMapper
}  // namespace Model
}  // namespace Snowball
}  // namespace Aws
