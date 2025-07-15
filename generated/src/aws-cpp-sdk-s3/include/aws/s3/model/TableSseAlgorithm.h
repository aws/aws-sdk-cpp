/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3
{
namespace Model
{
  enum class TableSseAlgorithm
  {
    NOT_SET,
    aws_kms,
    AES256
  };

namespace TableSseAlgorithmMapper
{
AWS_S3_API TableSseAlgorithm GetTableSseAlgorithmForName(const Aws::String& name);

AWS_S3_API Aws::String GetNameForTableSseAlgorithm(TableSseAlgorithm value);
} // namespace TableSseAlgorithmMapper
} // namespace Model
} // namespace S3
} // namespace Aws
