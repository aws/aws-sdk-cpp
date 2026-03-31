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
enum class InsightType { NOT_SET, EVENT, RECOMMENDATION };

namespace InsightTypeMapper {
AWS_OPENSEARCHSERVICE_API InsightType GetInsightTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForInsightType(InsightType value);
}  // namespace InsightTypeMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
