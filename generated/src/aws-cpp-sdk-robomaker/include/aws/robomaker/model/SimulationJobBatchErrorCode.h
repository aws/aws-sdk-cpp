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
enum class SimulationJobBatchErrorCode { NOT_SET, InternalServiceError };

namespace SimulationJobBatchErrorCodeMapper {
AWS_ROBOMAKER_API SimulationJobBatchErrorCode GetSimulationJobBatchErrorCodeForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForSimulationJobBatchErrorCode(SimulationJobBatchErrorCode value);
}  // namespace SimulationJobBatchErrorCodeMapper
}  // namespace Model
}  // namespace RoboMaker
}  // namespace Aws
