﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>

namespace Aws {
namespace S3Crt {
namespace Model {
enum class TableSseAlgorithm { NOT_SET, aws_kms, AES256 };

namespace TableSseAlgorithmMapper {
AWS_S3CRT_API TableSseAlgorithm GetTableSseAlgorithmForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForTableSseAlgorithm(TableSseAlgorithm value);
}  // namespace TableSseAlgorithmMapper
}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
