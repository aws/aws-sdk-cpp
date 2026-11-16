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
enum class AnalyzerStatus { NOT_SET, ACTIVE, BUILDING };

namespace AnalyzerStatusMapper {
AWS_S3VECTORS_API AnalyzerStatus GetAnalyzerStatusForName(const Aws::String& name);

AWS_S3VECTORS_API Aws::String GetNameForAnalyzerStatus(AnalyzerStatus value);
}  // namespace AnalyzerStatusMapper
}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
