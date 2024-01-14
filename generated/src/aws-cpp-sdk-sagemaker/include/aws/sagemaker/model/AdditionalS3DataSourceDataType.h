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
  enum class AdditionalS3DataSourceDataType
  {
    NOT_SET,
    S3Object,
    S3Prefix
  };

namespace AdditionalS3DataSourceDataTypeMapper
{
AWS_SAGEMAKER_API AdditionalS3DataSourceDataType GetAdditionalS3DataSourceDataTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAdditionalS3DataSourceDataType(AdditionalS3DataSourceDataType value);
} // namespace AdditionalS3DataSourceDataTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
