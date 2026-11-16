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
enum class SortOrder { NOT_SET, ASC, DESC };

namespace SortOrderMapper {
AWS_OPENSEARCHMEMORY_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_OPENSEARCHMEMORY_API Aws::String GetNameForSortOrder(SortOrder value);
}  // namespace SortOrderMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
