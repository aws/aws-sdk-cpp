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
  enum class SortDirection
  {
    NOT_SET,
    ASC,
    DESC
  };

namespace SortDirectionMapper
{
AWS_QUICKSIGHT_API SortDirection GetSortDirectionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSortDirection(SortDirection value);
} // namespace SortDirectionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
