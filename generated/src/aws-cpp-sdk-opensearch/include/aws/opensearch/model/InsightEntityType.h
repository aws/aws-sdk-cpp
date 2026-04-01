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
enum class InsightEntityType { NOT_SET, Account, DomainName };

namespace InsightEntityTypeMapper {
AWS_OPENSEARCHSERVICE_API InsightEntityType GetInsightEntityTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForInsightEntityType(InsightEntityType value);
}  // namespace InsightEntityTypeMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
