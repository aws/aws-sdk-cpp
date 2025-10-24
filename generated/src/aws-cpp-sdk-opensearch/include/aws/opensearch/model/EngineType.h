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
enum class EngineType { NOT_SET, OpenSearch, Elasticsearch };

namespace EngineTypeMapper {
AWS_OPENSEARCHSERVICE_API EngineType GetEngineTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForEngineType(EngineType value);
}  // namespace EngineTypeMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
