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
  enum class DataSetUseAs
  {
    NOT_SET,
    RLS_RULES
  };

namespace DataSetUseAsMapper
{
AWS_QUICKSIGHT_API DataSetUseAs GetDataSetUseAsForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDataSetUseAs(DataSetUseAs value);
} // namespace DataSetUseAsMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
