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
  enum class TrainingRepositoryAccessMode
  {
    NOT_SET,
    Platform,
    Vpc
  };

namespace TrainingRepositoryAccessModeMapper
{
AWS_SAGEMAKER_API TrainingRepositoryAccessMode GetTrainingRepositoryAccessModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTrainingRepositoryAccessMode(TrainingRepositoryAccessMode value);
} // namespace TrainingRepositoryAccessModeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
