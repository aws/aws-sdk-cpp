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
enum class BusinessValidationCode {
  NOT_SET,
  INCOMPATIBLE_CONNECTION_INVITATION_REQUEST,
  INCOMPATIBLE_LEGAL_NAME,
  INCOMPATIBLE_KNOW_YOUR_BUSINESS_STATUS,
  INCOMPATIBLE_IDENTITY_VERIFICATION_STATUS,
  INVALID_ACCOUNT_LINKING_STATUS,
  INVALID_ACCOUNT_STATE,
  INCOMPATIBLE_DOMAIN
};

namespace BusinessValidationCodeMapper {
AWS_PARTNERCENTRALACCOUNT_API BusinessValidationCode GetBusinessValidationCodeForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForBusinessValidationCode(BusinessValidationCode value);
}  // namespace BusinessValidationCodeMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
