/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TimestreamWrite
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
AWS_TIMESTREAMWRITE_API DimensionValueType GetDimensionValueTypeForName(const Aws::String& name);

AWS_TIMESTREAMWRITE_API Aws::String GetNameForDimensionValueType(DimensionValueType value);
} // namespace DimensionValueTypeMapper
} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
