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
  enum class DataSetImportMode
  {
    NOT_SET,
    SPICE,
    DIRECT_QUERY
  };

namespace DataSetImportModeMapper
{
AWS_QUICKSIGHT_API DataSetImportMode GetDataSetImportModeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDataSetImportMode(DataSetImportMode value);
} // namespace DataSetImportModeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
