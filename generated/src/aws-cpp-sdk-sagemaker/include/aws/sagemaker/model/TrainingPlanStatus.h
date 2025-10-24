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
enum class TrainingPlanStatus { NOT_SET, Pending, Active, Scheduled, Expired, Failed };

namespace TrainingPlanStatusMapper {
AWS_SAGEMAKER_API TrainingPlanStatus GetTrainingPlanStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTrainingPlanStatus(TrainingPlanStatus value);
}  // namespace TrainingPlanStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
