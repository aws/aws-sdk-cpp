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
  enum class BaseMapStyleType
  {
    NOT_SET,
    LIGHT_GRAY,
    DARK_GRAY,
    STREET,
    IMAGERY
  };

namespace BaseMapStyleTypeMapper
{
AWS_QUICKSIGHT_API BaseMapStyleType GetBaseMapStyleTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForBaseMapStyleType(BaseMapStyleType value);
} // namespace BaseMapStyleTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
