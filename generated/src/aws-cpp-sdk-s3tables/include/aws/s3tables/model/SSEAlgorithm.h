/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>

namespace Aws {
namespace S3Tables {
namespace Model {
enum class SSEAlgorithm { NOT_SET, AES256, aws_kms };

namespace SSEAlgorithmMapper {
AWS_S3TABLES_API SSEAlgorithm GetSSEAlgorithmForName(const Aws::String& name);

AWS_S3TABLES_API Aws::String GetNameForSSEAlgorithm(SSEAlgorithm value);
}  // namespace SSEAlgorithmMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
