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
enum class InsightFieldType { NOT_SET, text, metric };

namespace InsightFieldTypeMapper {
AWS_OPENSEARCHSERVICE_API InsightFieldType GetInsightFieldTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForInsightFieldType(InsightFieldType value);
}  // namespace InsightFieldTypeMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
