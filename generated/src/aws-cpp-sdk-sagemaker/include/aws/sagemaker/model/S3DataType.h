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
  enum class S3DataType
  {
    NOT_SET,
    ManifestFile,
    S3Prefix,
    AugmentedManifestFile
  };

namespace S3DataTypeMapper
{
AWS_SAGEMAKER_API S3DataType GetS3DataTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForS3DataType(S3DataType value);
} // namespace S3DataTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
