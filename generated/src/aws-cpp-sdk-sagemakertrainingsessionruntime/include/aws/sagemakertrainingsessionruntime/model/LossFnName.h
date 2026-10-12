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
enum class LossFnName { NOT_SET, cross_entropy, importance_sampling, ppo, cispo };

namespace LossFnNameMapper {
AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API LossFnName GetLossFnNameForName(const Aws::String& name);

AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::String GetNameForLossFnName(LossFnName value);
}  // namespace LossFnNameMapper
}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
