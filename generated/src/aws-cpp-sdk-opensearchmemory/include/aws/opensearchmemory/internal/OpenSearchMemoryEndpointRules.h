/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace OpenSearchMemory {
class AWS_OPENSEARCHMEMORY_LOCAL OpenSearchMemoryEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace OpenSearchMemory
}  // namespace Aws
