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
enum class S3ModelDataType { NOT_SET, S3Prefix, S3Object };

namespace S3ModelDataTypeMapper {
AWS_SAGEMAKER_API S3ModelDataType GetS3ModelDataTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForS3ModelDataType(S3ModelDataType value);
}  // namespace S3ModelDataTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
