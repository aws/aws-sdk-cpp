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
  enum class CandidateStatus
  {
    NOT_SET,
    Completed,
    InProgress,
    Failed,
    Stopped,
    Stopping
  };

namespace CandidateStatusMapper
{
AWS_SAGEMAKER_API CandidateStatus GetCandidateStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCandidateStatus(CandidateStatus value);
} // namespace CandidateStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
