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
enum class InsightPriorityLevel { NOT_SET, CRITICAL, HIGH, MEDIUM, LOW };

namespace InsightPriorityLevelMapper {
AWS_OPENSEARCHSERVICE_API InsightPriorityLevel GetInsightPriorityLevelForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForInsightPriorityLevel(InsightPriorityLevel value);
}  // namespace InsightPriorityLevelMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
