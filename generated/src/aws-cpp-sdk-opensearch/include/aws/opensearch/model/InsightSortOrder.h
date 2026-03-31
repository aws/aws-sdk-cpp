/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

namespace Aws {
namespace OpenSearchService {
namespace Model {
enum class InsightSortOrder { NOT_SET, ASC, DESC };

namespace InsightSortOrderMapper {
AWS_OPENSEARCHSERVICE_API InsightSortOrder GetInsightSortOrderForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForInsightSortOrder(InsightSortOrder value);
}  // namespace InsightSortOrderMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
