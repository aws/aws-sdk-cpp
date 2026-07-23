/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace ConnectWisdomService {
class AWS_CONNECTWISDOMSERVICE_LOCAL ConnectWisdomServiceEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace ConnectWisdomService
}  // namespace Aws
