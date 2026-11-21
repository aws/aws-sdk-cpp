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
enum class InboundConnectorType { NOT_SET, QUICK_DESKTOP };

namespace InboundConnectorTypeMapper {
AWS_QUICKSIGHT_API InboundConnectorType GetInboundConnectorTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForInboundConnectorType(InboundConnectorType value);
}  // namespace InboundConnectorTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
