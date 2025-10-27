/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace SageMaker {
namespace Model {
enum class CompressionType { NOT_SET, None, Gzip };

namespace CompressionTypeMapper {
AWS_SAGEMAKER_API CompressionType GetCompressionTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCompressionType(CompressionType value);
}  // namespace CompressionTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
