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
enum class ValidationFailureSeverity { NOT_SET, Critical, Warning };

namespace ValidationFailureSeverityMapper {
AWS_OPENSEARCHSERVICE_API ValidationFailureSeverity GetValidationFailureSeverityForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForValidationFailureSeverity(ValidationFailureSeverity value);
}  // namespace ValidationFailureSeverityMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
