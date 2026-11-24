/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class InboundConnectorStatus { NOT_SET, ENABLED, DISABLED };

namespace InboundConnectorStatusMapper {
AWS_QUICKSIGHT_API InboundConnectorStatus GetInboundConnectorStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForInboundConnectorStatus(InboundConnectorStatus value);
}  // namespace InboundConnectorStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
