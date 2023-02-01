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
  enum class RowLevelPermissionFormatVersion
  {
    NOT_SET,
    VERSION_1,
    VERSION_2
  };

namespace RowLevelPermissionFormatVersionMapper
{
AWS_QUICKSIGHT_API RowLevelPermissionFormatVersion GetRowLevelPermissionFormatVersionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForRowLevelPermissionFormatVersion(RowLevelPermissionFormatVersion value);
} // namespace RowLevelPermissionFormatVersionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
