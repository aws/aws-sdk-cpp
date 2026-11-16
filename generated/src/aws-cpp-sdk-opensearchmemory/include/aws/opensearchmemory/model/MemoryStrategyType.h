/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

namespace Aws {
namespace OpenSearchMemory {
namespace Model {
enum class MemoryStrategyType { NOT_SET, SEMANTIC, SUMMARY, CUSTOM };

namespace MemoryStrategyTypeMapper {
AWS_OPENSEARCHMEMORY_API MemoryStrategyType GetMemoryStrategyTypeForName(const Aws::String& name);

AWS_OPENSEARCHMEMORY_API Aws::String GetNameForMemoryStrategyType(MemoryStrategyType value);
}  // namespace MemoryStrategyTypeMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
