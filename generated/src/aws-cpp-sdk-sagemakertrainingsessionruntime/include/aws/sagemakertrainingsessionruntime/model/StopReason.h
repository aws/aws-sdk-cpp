/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {
enum class StopReason { NOT_SET, stop, length };

namespace StopReasonMapper {
AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API StopReason GetStopReasonForName(const Aws::String& name);

AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::String GetNameForStopReason(StopReason value);
}  // namespace StopReasonMapper
}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
