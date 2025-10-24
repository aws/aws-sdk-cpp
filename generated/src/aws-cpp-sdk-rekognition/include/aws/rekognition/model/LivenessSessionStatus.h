/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/Rekognition_EXPORTS.h>

namespace Aws {
namespace Rekognition {
namespace Model {
enum class LivenessSessionStatus { NOT_SET, CREATED, IN_PROGRESS, SUCCEEDED, FAILED, EXPIRED };

namespace LivenessSessionStatusMapper {
AWS_REKOGNITION_API LivenessSessionStatus GetLivenessSessionStatusForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForLivenessSessionStatus(LivenessSessionStatus value);
}  // namespace LivenessSessionStatusMapper
}  // namespace Model
}  // namespace Rekognition
}  // namespace Aws
