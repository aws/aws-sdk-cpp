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
  enum class NullFilterOption
  {
    NOT_SET,
    ALL_VALUES,
    NON_NULLS_ONLY,
    NULLS_ONLY
  };

namespace NullFilterOptionMapper
{
AWS_QUICKSIGHT_API NullFilterOption GetNullFilterOptionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForNullFilterOption(NullFilterOption value);
} // namespace NullFilterOptionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
