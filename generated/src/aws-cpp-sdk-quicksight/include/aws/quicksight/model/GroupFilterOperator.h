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
  enum class GroupFilterOperator
  {
    NOT_SET,
    StartsWith
  };

namespace GroupFilterOperatorMapper
{
AWS_QUICKSIGHT_API GroupFilterOperator GetGroupFilterOperatorForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForGroupFilterOperator(GroupFilterOperator value);
} // namespace GroupFilterOperatorMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
