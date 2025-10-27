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
enum class RequirementLevel { NOT_SET, REQUIRED, OPTIONAL, NONE };

namespace RequirementLevelMapper {
AWS_OPENSEARCHSERVICE_API RequirementLevel GetRequirementLevelForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForRequirementLevel(RequirementLevel value);
}  // namespace RequirementLevelMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
