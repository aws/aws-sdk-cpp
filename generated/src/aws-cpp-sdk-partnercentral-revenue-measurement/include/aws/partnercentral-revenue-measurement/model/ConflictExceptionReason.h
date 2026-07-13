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
enum class ConflictExceptionReason { NOT_SET, CONFLICT_CLIENT_TOKEN, CONCURRENT_MODIFICATION, RESOURCE_ALREADY_EXISTS, REVISION_MISMATCH };

namespace ConflictExceptionReasonMapper {
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name);

AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason value);
}  // namespace ConflictExceptionReasonMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
