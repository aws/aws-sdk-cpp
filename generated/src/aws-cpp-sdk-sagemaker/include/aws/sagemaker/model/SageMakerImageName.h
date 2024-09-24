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
  enum class SageMakerImageName
  {
    NOT_SET,
    sagemaker_distribution
  };

namespace SageMakerImageNameMapper
{
AWS_SAGEMAKER_API SageMakerImageName GetSageMakerImageNameForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSageMakerImageName(SageMakerImageName value);
} // namespace SageMakerImageNameMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
