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
enum class InsightFeedbackEntityType { NOT_SET, DomainName };

namespace InsightFeedbackEntityTypeMapper {
AWS_OPENSEARCHSERVICE_API InsightFeedbackEntityType GetInsightFeedbackEntityTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForInsightFeedbackEntityType(InsightFeedbackEntityType value);
}  // namespace InsightFeedbackEntityTypeMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
