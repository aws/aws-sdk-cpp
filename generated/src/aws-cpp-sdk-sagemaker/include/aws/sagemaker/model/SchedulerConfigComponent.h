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
enum class SchedulerConfigComponent { NOT_SET, PriorityClasses, FairShare, IdleResourceSharing };

namespace SchedulerConfigComponentMapper {
AWS_SAGEMAKER_API SchedulerConfigComponent GetSchedulerConfigComponentForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSchedulerConfigComponent(SchedulerConfigComponent value);
}  // namespace SchedulerConfigComponentMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
