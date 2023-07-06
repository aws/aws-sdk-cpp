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
  enum class SpecialValue
  {
    NOT_SET,
    EMPTY,
    NULL_,
    OTHER
  };

namespace SpecialValueMapper
{
AWS_QUICKSIGHT_API SpecialValue GetSpecialValueForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSpecialValue(SpecialValue value);
} // namespace SpecialValueMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
