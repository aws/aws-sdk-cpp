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
enum class ProfileValidationErrorReason {
  NOT_SET,
  INVALID_CONTENT,
  DUPLICATE_PROFILE,
  INVALID_LOGO,
  INVALID_LOGO_URL,
  INVALID_LOGO_FILE,
  INVALID_LOGO_SIZE,
  INVALID_WEBSITE_URL
};

namespace ProfileValidationErrorReasonMapper {
AWS_PARTNERCENTRALACCOUNT_API ProfileValidationErrorReason GetProfileValidationErrorReasonForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForProfileValidationErrorReason(ProfileValidationErrorReason value);
}  // namespace ProfileValidationErrorReasonMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
