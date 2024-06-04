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
  enum class MeasureValueType
  {
    NOT_SET,
    DOUBLE,
    BIGINT,
    VARCHAR,
    BOOLEAN,
    TIMESTAMP
  };

namespace MeasureValueTypeMapper
{
AWS_PIPES_API MeasureValueType GetMeasureValueTypeForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForMeasureValueType(MeasureValueType value);
} // namespace MeasureValueTypeMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
