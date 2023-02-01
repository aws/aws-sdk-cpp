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
  enum class RelativeDateType
  {
    NOT_SET,
    PREVIOUS,
    THIS,
    LAST,
    NOW,
    NEXT
  };

namespace RelativeDateTypeMapper
{
AWS_QUICKSIGHT_API RelativeDateType GetRelativeDateTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForRelativeDateType(RelativeDateType value);
} // namespace RelativeDateTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
