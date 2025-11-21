/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace SageMakerRuntimeHTTP2 {
class SageMakerRuntimeHTTP2EndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
