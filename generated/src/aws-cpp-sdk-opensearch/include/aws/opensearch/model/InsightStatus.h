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
enum class InsightStatus { NOT_SET, ACTIVE, RESOLVED, DISMISSED };

namespace InsightStatusMapper {
AWS_OPENSEARCHSERVICE_API InsightStatus GetInsightStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForInsightStatus(InsightStatus value);
}  // namespace InsightStatusMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
