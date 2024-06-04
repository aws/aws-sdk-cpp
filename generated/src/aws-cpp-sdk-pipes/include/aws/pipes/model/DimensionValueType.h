/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pipes
{
namespace Model
{
  enum class DimensionValueType
  {
    NOT_SET,
    VARCHAR
  };

namespace DimensionValueTypeMapper
{
AWS_PIPES_API DimensionValueType GetDimensionValueTypeForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForDimensionValueType(DimensionValueType value);
} // namespace DimensionValueTypeMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
