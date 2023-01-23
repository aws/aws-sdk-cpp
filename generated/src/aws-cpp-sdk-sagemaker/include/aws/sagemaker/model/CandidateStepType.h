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
  enum class CandidateStepType
  {
    NOT_SET,
    AWS_SageMaker_TrainingJob,
    AWS_SageMaker_TransformJob,
    AWS_SageMaker_ProcessingJob
  };

namespace CandidateStepTypeMapper
{
AWS_SAGEMAKER_API CandidateStepType GetCandidateStepTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCandidateStepType(CandidateStepType value);
} // namespace CandidateStepTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
