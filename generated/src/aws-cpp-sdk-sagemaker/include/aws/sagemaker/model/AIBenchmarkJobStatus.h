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
enum class AIBenchmarkJobStatus { NOT_SET, InProgress, Completed, Failed, Stopping, Stopped };

namespace AIBenchmarkJobStatusMapper {
AWS_SAGEMAKER_API AIBenchmarkJobStatus GetAIBenchmarkJobStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAIBenchmarkJobStatus(AIBenchmarkJobStatus value);
}  // namespace AIBenchmarkJobStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
