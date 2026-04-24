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
enum class ActionConnectorSearchFilterNameEnum {
  NOT_SET,
  ACTION_CONNECTOR_NAME,
  ACTION_CONNECTOR_TYPE,
  QUICKSIGHT_OWNER,
  QUICKSIGHT_VIEWER_OR_OWNER,
  DIRECT_QUICKSIGHT_SOLE_OWNER,
  DIRECT_QUICKSIGHT_OWNER,
  DIRECT_QUICKSIGHT_VIEWER_OR_OWNER
};

namespace ActionConnectorSearchFilterNameEnumMapper {
AWS_QUICKSIGHT_API ActionConnectorSearchFilterNameEnum GetActionConnectorSearchFilterNameEnumForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForActionConnectorSearchFilterNameEnum(ActionConnectorSearchFilterNameEnum value);
}  // namespace ActionConnectorSearchFilterNameEnumMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
