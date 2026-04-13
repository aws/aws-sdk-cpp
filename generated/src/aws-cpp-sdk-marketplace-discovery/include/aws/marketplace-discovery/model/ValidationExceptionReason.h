/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
enum class ValidationExceptionReason { NOT_SET, INVALID_PAGINATION_TOKEN, MALFORMED_REQUEST_PARAMETERS, PAGINATION_LIMIT_EXCEEDED };

namespace ValidationExceptionReasonMapper {
AWS_MARKETPLACEDISCOVERY_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
