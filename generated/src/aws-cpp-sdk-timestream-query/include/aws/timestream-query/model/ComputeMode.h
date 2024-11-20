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
  enum class ComputeMode
  {
    NOT_SET,
    ON_DEMAND,
    PROVISIONED
  };

namespace ComputeModeMapper
{
AWS_TIMESTREAMQUERY_API ComputeMode GetComputeModeForName(const Aws::String& name);

AWS_TIMESTREAMQUERY_API Aws::String GetNameForComputeMode(ComputeMode value);
} // namespace ComputeModeMapper
} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
