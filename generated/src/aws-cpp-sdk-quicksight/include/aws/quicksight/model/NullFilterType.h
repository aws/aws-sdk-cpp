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
  enum class NullFilterType
  {
    NOT_SET,
    ALL_VALUES,
    NON_NULLS_ONLY,
    NULLS_ONLY
  };

namespace NullFilterTypeMapper
{
AWS_QUICKSIGHT_API NullFilterType GetNullFilterTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForNullFilterType(NullFilterType value);
} // namespace NullFilterTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
