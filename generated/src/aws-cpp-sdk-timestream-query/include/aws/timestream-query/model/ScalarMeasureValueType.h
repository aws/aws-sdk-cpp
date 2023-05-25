/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{
  enum class ScalarMeasureValueType
  {
    NOT_SET,
    BIGINT,
    BOOLEAN,
    DOUBLE,
    VARCHAR,
    TIMESTAMP
  };

namespace ScalarMeasureValueTypeMapper
{
AWS_TIMESTREAMQUERY_API ScalarMeasureValueType GetScalarMeasureValueTypeForName(const Aws::String& name);

AWS_TIMESTREAMQUERY_API Aws::String GetNameForScalarMeasureValueType(ScalarMeasureValueType value);
} // namespace ScalarMeasureValueTypeMapper
} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
