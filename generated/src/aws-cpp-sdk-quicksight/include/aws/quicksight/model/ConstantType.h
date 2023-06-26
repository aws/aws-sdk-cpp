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
  enum class ConstantType
  {
    NOT_SET,
    SINGULAR,
    RANGE,
    COLLECTIVE
  };

namespace ConstantTypeMapper
{
AWS_QUICKSIGHT_API ConstantType GetConstantTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForConstantType(ConstantType value);
} // namespace ConstantTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
