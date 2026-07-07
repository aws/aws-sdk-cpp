/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
enum class ResourceNotFoundExceptionReason { NOT_SET, RESOURCE_NOT_FOUND };

namespace ResourceNotFoundExceptionReasonMapper {
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ResourceNotFoundExceptionReason GetResourceNotFoundExceptionReasonForName(const Aws::String& name);

AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String GetNameForResourceNotFoundExceptionReason(ResourceNotFoundExceptionReason value);
}  // namespace ResourceNotFoundExceptionReasonMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
