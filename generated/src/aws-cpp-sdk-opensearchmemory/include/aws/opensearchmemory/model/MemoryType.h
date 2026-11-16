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
enum class MemoryType { NOT_SET, SEMANTIC, SUMMARY, CUSTOM };

namespace MemoryTypeMapper {
AWS_OPENSEARCHMEMORY_API MemoryType GetMemoryTypeForName(const Aws::String& name);

AWS_OPENSEARCHMEMORY_API Aws::String GetNameForMemoryType(MemoryType value);
}  // namespace MemoryTypeMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
