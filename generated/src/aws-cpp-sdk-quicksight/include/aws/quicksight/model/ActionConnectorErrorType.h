/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class ActionConnectorErrorType
  {
    NOT_SET,
    INTERNAL_FAILURE
  };

namespace ActionConnectorErrorTypeMapper
{
AWS_QUICKSIGHT_API ActionConnectorErrorType GetActionConnectorErrorTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForActionConnectorErrorType(ActionConnectorErrorType value);
} // namespace ActionConnectorErrorTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
