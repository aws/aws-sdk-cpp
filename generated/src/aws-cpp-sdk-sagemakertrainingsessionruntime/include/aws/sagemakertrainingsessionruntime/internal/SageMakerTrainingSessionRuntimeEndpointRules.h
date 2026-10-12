/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
class AWS_SAGEMAKERTRAININGSESSIONRUNTIME_LOCAL SageMakerTrainingSessionRuntimeEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
