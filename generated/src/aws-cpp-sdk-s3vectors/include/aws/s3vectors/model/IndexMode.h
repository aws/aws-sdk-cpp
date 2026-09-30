/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>

namespace Aws {
namespace S3Vectors {
namespace Model {
enum class IndexMode { NOT_SET, CLASSIC, ENHANCED };

namespace IndexModeMapper {
AWS_S3VECTORS_API IndexMode GetIndexModeForName(const Aws::String& name);

AWS_S3VECTORS_API Aws::String GetNameForIndexMode(IndexMode value);
}  // namespace IndexModeMapper
}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
