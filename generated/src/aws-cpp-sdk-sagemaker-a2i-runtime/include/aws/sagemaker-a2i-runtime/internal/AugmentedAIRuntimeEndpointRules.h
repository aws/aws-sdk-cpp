/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace AugmentedAIRuntime {
class AWS_AUGMENTEDAIRUNTIME_LOCAL AugmentedAIRuntimeEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace AugmentedAIRuntime
}  // namespace Aws
