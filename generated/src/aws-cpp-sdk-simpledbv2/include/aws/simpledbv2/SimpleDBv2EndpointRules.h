/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simpledbv2/SimpleDBv2_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace SimpleDBv2 {
class SimpleDBv2EndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace SimpleDBv2
}  // namespace Aws
