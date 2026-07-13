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
enum class ServiceQuotaExceededExceptionReason { NOT_SET, ATTRIBUTION_LIMIT_EXCEEDED, TAG_LIMIT_EXCEEDED };

namespace ServiceQuotaExceededExceptionReasonMapper {
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ServiceQuotaExceededExceptionReason
GetServiceQuotaExceededExceptionReasonForName(const Aws::String& name);

AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String GetNameForServiceQuotaExceededExceptionReason(
    ServiceQuotaExceededExceptionReason value);
}  // namespace ServiceQuotaExceededExceptionReasonMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
