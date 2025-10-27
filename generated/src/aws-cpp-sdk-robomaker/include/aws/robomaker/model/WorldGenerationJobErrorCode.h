/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/RoboMaker_EXPORTS.h>

namespace Aws {
namespace RoboMaker {
namespace Model {
enum class WorldGenerationJobErrorCode {
  NOT_SET,
  InternalServiceError,
  LimitExceeded,
  ResourceNotFound,
  RequestThrottled,
  InvalidInput,
  AllWorldGenerationFailed
};

namespace WorldGenerationJobErrorCodeMapper {
AWS_ROBOMAKER_API WorldGenerationJobErrorCode GetWorldGenerationJobErrorCodeForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForWorldGenerationJobErrorCode(WorldGenerationJobErrorCode value);
}  // namespace WorldGenerationJobErrorCodeMapper
}  // namespace Model
}  // namespace RoboMaker
}  // namespace Aws
