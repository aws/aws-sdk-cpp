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
enum class RequestStatus { NOT_SET, Pending, InProgress, Completed, Failed, Skipped };

namespace RequestStatusMapper {
AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API RequestStatus GetRequestStatusForName(const Aws::String& name);

AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::String GetNameForRequestStatus(RequestStatus value);
}  // namespace RequestStatusMapper
}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
