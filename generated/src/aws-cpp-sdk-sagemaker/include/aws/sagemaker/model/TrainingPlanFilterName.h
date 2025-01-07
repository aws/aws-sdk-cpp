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
  enum class TrainingPlanFilterName
  {
    NOT_SET,
    Status
  };

namespace TrainingPlanFilterNameMapper
{
AWS_SAGEMAKER_API TrainingPlanFilterName GetTrainingPlanFilterNameForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTrainingPlanFilterName(TrainingPlanFilterName value);
} // namespace TrainingPlanFilterNameMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
