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
  enum class DatasetParameterValueType
  {
    NOT_SET,
    MULTI_VALUED,
    SINGLE_VALUED
  };

namespace DatasetParameterValueTypeMapper
{
AWS_QUICKSIGHT_API DatasetParameterValueType GetDatasetParameterValueTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDatasetParameterValueType(DatasetParameterValueType value);
} // namespace DatasetParameterValueTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
