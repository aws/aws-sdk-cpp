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
  enum class DataSourceFilterAttribute
  {
    NOT_SET,
    DIRECT_QUICKSIGHT_VIEWER_OR_OWNER,
    DIRECT_QUICKSIGHT_OWNER,
    DIRECT_QUICKSIGHT_SOLE_OWNER,
    DATASOURCE_NAME
  };

namespace DataSourceFilterAttributeMapper
{
AWS_QUICKSIGHT_API DataSourceFilterAttribute GetDataSourceFilterAttributeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDataSourceFilterAttribute(DataSourceFilterAttribute value);
} // namespace DataSourceFilterAttributeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
