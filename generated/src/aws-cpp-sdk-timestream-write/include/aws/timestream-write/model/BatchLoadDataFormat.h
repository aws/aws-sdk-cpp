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
  enum class BatchLoadDataFormat
  {
    NOT_SET,
    CSV
  };

namespace BatchLoadDataFormatMapper
{
AWS_TIMESTREAMWRITE_API BatchLoadDataFormat GetBatchLoadDataFormatForName(const Aws::String& name);

AWS_TIMESTREAMWRITE_API Aws::String GetNameForBatchLoadDataFormat(BatchLoadDataFormat value);
} // namespace BatchLoadDataFormatMapper
} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
