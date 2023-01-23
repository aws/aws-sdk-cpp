/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class ProcessingS3DataType
  {
    NOT_SET,
    ManifestFile,
    S3Prefix
  };

namespace ProcessingS3DataTypeMapper
{
AWS_SAGEMAKER_API ProcessingS3DataType GetProcessingS3DataTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForProcessingS3DataType(ProcessingS3DataType value);
} // namespace ProcessingS3DataTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
