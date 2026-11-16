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
enum class MemorySortField { NOT_SET, CREATED_AT, UPDATED_AT };

namespace MemorySortFieldMapper {
AWS_OPENSEARCHMEMORY_API MemorySortField GetMemorySortFieldForName(const Aws::String& name);

AWS_OPENSEARCHMEMORY_API Aws::String GetNameForMemorySortField(MemorySortField value);
}  // namespace MemorySortFieldMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
