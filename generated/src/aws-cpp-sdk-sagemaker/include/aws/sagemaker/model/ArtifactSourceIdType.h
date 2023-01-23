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
  enum class ArtifactSourceIdType
  {
    NOT_SET,
    MD5Hash,
    S3ETag,
    S3Version,
    Custom
  };

namespace ArtifactSourceIdTypeMapper
{
AWS_SAGEMAKER_API ArtifactSourceIdType GetArtifactSourceIdTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForArtifactSourceIdType(ArtifactSourceIdType value);
} // namespace ArtifactSourceIdTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
