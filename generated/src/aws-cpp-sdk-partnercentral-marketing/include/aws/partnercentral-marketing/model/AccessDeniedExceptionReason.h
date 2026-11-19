/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
enum class AccessDeniedExceptionReason { NOT_SET, INCOMPATIBLE_BENEFIT_AWS_PARTNER_STATE };

namespace AccessDeniedExceptionReasonMapper {
AWS_PARTNERCENTRALMARKETING_API AccessDeniedExceptionReason GetAccessDeniedExceptionReasonForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForAccessDeniedExceptionReason(AccessDeniedExceptionReason value);
}  // namespace AccessDeniedExceptionReasonMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
