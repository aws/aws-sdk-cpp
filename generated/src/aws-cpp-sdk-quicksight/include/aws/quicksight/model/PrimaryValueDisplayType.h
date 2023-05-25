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
  enum class PrimaryValueDisplayType
  {
    NOT_SET,
    HIDDEN,
    COMPARISON,
    ACTUAL
  };

namespace PrimaryValueDisplayTypeMapper
{
AWS_QUICKSIGHT_API PrimaryValueDisplayType GetPrimaryValueDisplayTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForPrimaryValueDisplayType(PrimaryValueDisplayType value);
} // namespace PrimaryValueDisplayTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
