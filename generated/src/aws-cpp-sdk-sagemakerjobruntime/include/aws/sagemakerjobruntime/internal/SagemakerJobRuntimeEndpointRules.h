/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemakerjobruntime/SagemakerJobRuntime_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace SagemakerJobRuntime {
class AWS_SAGEMAKERJOBRUNTIME_LOCAL SagemakerJobRuntimeEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace SagemakerJobRuntime
}  // namespace Aws
