/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntime_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace SageMakerGatewayRuntime {
class AWS_SAGEMAKERGATEWAYRUNTIME_LOCAL SageMakerGatewayRuntimeEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
