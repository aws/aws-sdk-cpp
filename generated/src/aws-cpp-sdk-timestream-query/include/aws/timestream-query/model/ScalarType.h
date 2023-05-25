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
  enum class ScalarType
  {
    NOT_SET,
    VARCHAR,
    BOOLEAN,
    BIGINT,
    DOUBLE,
    TIMESTAMP,
    DATE,
    TIME,
    INTERVAL_DAY_TO_SECOND,
    INTERVAL_YEAR_TO_MONTH,
    UNKNOWN,
    INTEGER
  };

namespace ScalarTypeMapper
{
AWS_TIMESTREAMQUERY_API ScalarType GetScalarTypeForName(const Aws::String& name);

AWS_TIMESTREAMQUERY_API Aws::String GetNameForScalarType(ScalarType value);
} // namespace ScalarTypeMapper
} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
