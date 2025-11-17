/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace MWAAServerless {
class MWAAServerlessEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace MWAAServerless
}  // namespace Aws
