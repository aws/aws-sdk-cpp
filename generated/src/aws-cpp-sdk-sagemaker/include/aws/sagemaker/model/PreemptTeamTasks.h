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
enum class PreemptTeamTasks { NOT_SET, Never, LowerPriority };

namespace PreemptTeamTasksMapper {
AWS_SAGEMAKER_API PreemptTeamTasks GetPreemptTeamTasksForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForPreemptTeamTasks(PreemptTeamTasks value);
}  // namespace PreemptTeamTasksMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
