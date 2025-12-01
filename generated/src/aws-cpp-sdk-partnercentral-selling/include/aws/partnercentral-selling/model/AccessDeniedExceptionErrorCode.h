/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
enum class AccessDeniedExceptionErrorCode { NOT_SET, INCOMPATIBLE_BENEFIT_AWS_PARTNER_STATE };

namespace AccessDeniedExceptionErrorCodeMapper {
AWS_PARTNERCENTRALSELLING_API AccessDeniedExceptionErrorCode GetAccessDeniedExceptionErrorCodeForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForAccessDeniedExceptionErrorCode(AccessDeniedExceptionErrorCode value);
}  // namespace AccessDeniedExceptionErrorCodeMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
