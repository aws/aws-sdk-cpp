/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/BusinessValidationCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace BusinessValidationCodeMapper {

static const int INCOMPATIBLE_CONNECTION_INVITATION_REQUEST_HASH = HashingUtils::HashString("INCOMPATIBLE_CONNECTION_INVITATION_REQUEST");
static const int INCOMPATIBLE_LEGAL_NAME_HASH = HashingUtils::HashString("INCOMPATIBLE_LEGAL_NAME");
static const int INCOMPATIBLE_KNOW_YOUR_BUSINESS_STATUS_HASH = HashingUtils::HashString("INCOMPATIBLE_KNOW_YOUR_BUSINESS_STATUS");
static const int INCOMPATIBLE_IDENTITY_VERIFICATION_STATUS_HASH = HashingUtils::HashString("INCOMPATIBLE_IDENTITY_VERIFICATION_STATUS");
static const int INVALID_ACCOUNT_LINKING_STATUS_HASH = HashingUtils::HashString("INVALID_ACCOUNT_LINKING_STATUS");
static const int INVALID_ACCOUNT_STATE_HASH = HashingUtils::HashString("INVALID_ACCOUNT_STATE");
static const int INCOMPATIBLE_DOMAIN_HASH = HashingUtils::HashString("INCOMPATIBLE_DOMAIN");
static const int INELIGIBLE_ACCOUNT_TIER_HASH = HashingUtils::HashString("INELIGIBLE_ACCOUNT_TIER");
static const int MISSING_ACTIVE_SUBSIDIARY_CONNECTION_HASH = HashingUtils::HashString("MISSING_ACTIVE_SUBSIDIARY_CONNECTION");
static const int INCOMPATIBLE_SUBSIDIARY_CONNECTION_HASH = HashingUtils::HashString("INCOMPATIBLE_SUBSIDIARY_CONNECTION");
static const int INCOMPATIBLE_PRIMARY_PARTNER_HASH = HashingUtils::HashString("INCOMPATIBLE_PRIMARY_PARTNER");
static const int QUALIFICATIONS_ASSOCIATION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("QUALIFICATIONS_ASSOCIATION_LIMIT_EXCEEDED");
static const int QUALIFICATIONS_ASSOCIATION_NOT_FOUND_HASH = HashingUtils::HashString("QUALIFICATIONS_ASSOCIATION_NOT_FOUND");
static const int QUALIFICATIONS_ASSOCIATION_EXISTS_HASH = HashingUtils::HashString("QUALIFICATIONS_ASSOCIATION_EXISTS");

BusinessValidationCode GetBusinessValidationCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INCOMPATIBLE_CONNECTION_INVITATION_REQUEST_HASH) {
    return BusinessValidationCode::INCOMPATIBLE_CONNECTION_INVITATION_REQUEST;
  } else if (hashCode == INCOMPATIBLE_LEGAL_NAME_HASH) {
    return BusinessValidationCode::INCOMPATIBLE_LEGAL_NAME;
  } else if (hashCode == INCOMPATIBLE_KNOW_YOUR_BUSINESS_STATUS_HASH) {
    return BusinessValidationCode::INCOMPATIBLE_KNOW_YOUR_BUSINESS_STATUS;
  } else if (hashCode == INCOMPATIBLE_IDENTITY_VERIFICATION_STATUS_HASH) {
    return BusinessValidationCode::INCOMPATIBLE_IDENTITY_VERIFICATION_STATUS;
  } else if (hashCode == INVALID_ACCOUNT_LINKING_STATUS_HASH) {
    return BusinessValidationCode::INVALID_ACCOUNT_LINKING_STATUS;
  } else if (hashCode == INVALID_ACCOUNT_STATE_HASH) {
    return BusinessValidationCode::INVALID_ACCOUNT_STATE;
  } else if (hashCode == INCOMPATIBLE_DOMAIN_HASH) {
    return BusinessValidationCode::INCOMPATIBLE_DOMAIN;
  } else if (hashCode == INELIGIBLE_ACCOUNT_TIER_HASH) {
    return BusinessValidationCode::INELIGIBLE_ACCOUNT_TIER;
  } else if (hashCode == MISSING_ACTIVE_SUBSIDIARY_CONNECTION_HASH) {
    return BusinessValidationCode::MISSING_ACTIVE_SUBSIDIARY_CONNECTION;
  } else if (hashCode == INCOMPATIBLE_SUBSIDIARY_CONNECTION_HASH) {
    return BusinessValidationCode::INCOMPATIBLE_SUBSIDIARY_CONNECTION;
  } else if (hashCode == INCOMPATIBLE_PRIMARY_PARTNER_HASH) {
    return BusinessValidationCode::INCOMPATIBLE_PRIMARY_PARTNER;
  } else if (hashCode == QUALIFICATIONS_ASSOCIATION_LIMIT_EXCEEDED_HASH) {
    return BusinessValidationCode::QUALIFICATIONS_ASSOCIATION_LIMIT_EXCEEDED;
  } else if (hashCode == QUALIFICATIONS_ASSOCIATION_NOT_FOUND_HASH) {
    return BusinessValidationCode::QUALIFICATIONS_ASSOCIATION_NOT_FOUND;
  } else if (hashCode == QUALIFICATIONS_ASSOCIATION_EXISTS_HASH) {
    return BusinessValidationCode::QUALIFICATIONS_ASSOCIATION_EXISTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BusinessValidationCode>(hashCode);
  }

  return BusinessValidationCode::NOT_SET;
}

Aws::String GetNameForBusinessValidationCode(BusinessValidationCode enumValue) {
  switch (enumValue) {
    case BusinessValidationCode::NOT_SET:
      return {};
    case BusinessValidationCode::INCOMPATIBLE_CONNECTION_INVITATION_REQUEST:
      return "INCOMPATIBLE_CONNECTION_INVITATION_REQUEST";
    case BusinessValidationCode::INCOMPATIBLE_LEGAL_NAME:
      return "INCOMPATIBLE_LEGAL_NAME";
    case BusinessValidationCode::INCOMPATIBLE_KNOW_YOUR_BUSINESS_STATUS:
      return "INCOMPATIBLE_KNOW_YOUR_BUSINESS_STATUS";
    case BusinessValidationCode::INCOMPATIBLE_IDENTITY_VERIFICATION_STATUS:
      return "INCOMPATIBLE_IDENTITY_VERIFICATION_STATUS";
    case BusinessValidationCode::INVALID_ACCOUNT_LINKING_STATUS:
      return "INVALID_ACCOUNT_LINKING_STATUS";
    case BusinessValidationCode::INVALID_ACCOUNT_STATE:
      return "INVALID_ACCOUNT_STATE";
    case BusinessValidationCode::INCOMPATIBLE_DOMAIN:
      return "INCOMPATIBLE_DOMAIN";
    case BusinessValidationCode::INELIGIBLE_ACCOUNT_TIER:
      return "INELIGIBLE_ACCOUNT_TIER";
    case BusinessValidationCode::MISSING_ACTIVE_SUBSIDIARY_CONNECTION:
      return "MISSING_ACTIVE_SUBSIDIARY_CONNECTION";
    case BusinessValidationCode::INCOMPATIBLE_SUBSIDIARY_CONNECTION:
      return "INCOMPATIBLE_SUBSIDIARY_CONNECTION";
    case BusinessValidationCode::INCOMPATIBLE_PRIMARY_PARTNER:
      return "INCOMPATIBLE_PRIMARY_PARTNER";
    case BusinessValidationCode::QUALIFICATIONS_ASSOCIATION_LIMIT_EXCEEDED:
      return "QUALIFICATIONS_ASSOCIATION_LIMIT_EXCEEDED";
    case BusinessValidationCode::QUALIFICATIONS_ASSOCIATION_NOT_FOUND:
      return "QUALIFICATIONS_ASSOCIATION_NOT_FOUND";
    case BusinessValidationCode::QUALIFICATIONS_ASSOCIATION_EXISTS:
      return "QUALIFICATIONS_ASSOCIATION_EXISTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BusinessValidationCodeMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
