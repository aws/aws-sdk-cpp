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
  enum class ReferenceLineSeriesType
  {
    NOT_SET,
    BAR,
    LINE
  };

namespace ReferenceLineSeriesTypeMapper
{
AWS_QUICKSIGHT_API ReferenceLineSeriesType GetReferenceLineSeriesTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForReferenceLineSeriesType(ReferenceLineSeriesType value);
} // namespace ReferenceLineSeriesTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
