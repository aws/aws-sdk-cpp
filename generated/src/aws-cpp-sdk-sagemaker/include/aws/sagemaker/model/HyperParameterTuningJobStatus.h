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
enum class HyperParameterTuningJobStatus { NOT_SET, Completed, InProgress, Failed, Stopped, Stopping, Deleting, DeleteFailed };

namespace HyperParameterTuningJobStatusMapper {
AWS_SAGEMAKER_API HyperParameterTuningJobStatus GetHyperParameterTuningJobStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForHyperParameterTuningJobStatus(HyperParameterTuningJobStatus value);
}  // namespace HyperParameterTuningJobStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
