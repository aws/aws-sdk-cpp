/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
enum class ServiceQuotaExceededExceptionReason { NOT_SET, LIMIT_EXCEEDED_NUMBER_OF_EMAIL, LIMIT_EXCEEDED_NUMBER_OF_DOMAIN };

namespace ServiceQuotaExceededExceptionReasonMapper {
AWS_PARTNERCENTRALACCOUNT_API ServiceQuotaExceededExceptionReason GetServiceQuotaExceededExceptionReasonForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForServiceQuotaExceededExceptionReason(ServiceQuotaExceededExceptionReason value);
}  // namespace ServiceQuotaExceededExceptionReasonMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
