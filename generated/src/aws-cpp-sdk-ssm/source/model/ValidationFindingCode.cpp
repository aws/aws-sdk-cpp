/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ssm/model/ValidationFindingCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {
namespace ValidationFindingCodeMapper {

static const int TargetInaccessible_HASH = HashingUtils::HashString("TargetInaccessible");
static const int TargetUnusable_HASH = HashingUtils::HashString("TargetUnusable");
static const int TargetStateWarning_HASH = HashingUtils::HashString("TargetStateWarning");
static const int AwsRoleAssumptionFailed_HASH = HashingUtils::HashString("AwsRoleAssumptionFailed");
static const int WebIdentityTokenFailed_HASH = HashingUtils::HashString("WebIdentityTokenFailed");
static const int OutboundWebIdentityFederationDisabled_HASH = HashingUtils::HashString("OutboundWebIdentityFederationDisabled");
static const int ProviderCredentialCreationFailed_HASH = HashingUtils::HashString("ProviderCredentialCreationFailed");
static const int TenantSummary_HASH = HashingUtils::HashString("TenantSummary");
static const int SubscriptionAccessible_HASH = HashingUtils::HashString("SubscriptionAccessible");

ValidationFindingCode GetValidationFindingCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TargetInaccessible_HASH) {
    return ValidationFindingCode::TargetInaccessible;
  } else if (hashCode == TargetUnusable_HASH) {
    return ValidationFindingCode::TargetUnusable;
  } else if (hashCode == TargetStateWarning_HASH) {
    return ValidationFindingCode::TargetStateWarning;
  } else if (hashCode == AwsRoleAssumptionFailed_HASH) {
    return ValidationFindingCode::AwsRoleAssumptionFailed;
  } else if (hashCode == WebIdentityTokenFailed_HASH) {
    return ValidationFindingCode::WebIdentityTokenFailed;
  } else if (hashCode == OutboundWebIdentityFederationDisabled_HASH) {
    return ValidationFindingCode::OutboundWebIdentityFederationDisabled;
  } else if (hashCode == ProviderCredentialCreationFailed_HASH) {
    return ValidationFindingCode::ProviderCredentialCreationFailed;
  } else if (hashCode == TenantSummary_HASH) {
    return ValidationFindingCode::TenantSummary;
  } else if (hashCode == SubscriptionAccessible_HASH) {
    return ValidationFindingCode::SubscriptionAccessible;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValidationFindingCode>(hashCode);
  }

  return ValidationFindingCode::NOT_SET;
}

Aws::String GetNameForValidationFindingCode(ValidationFindingCode enumValue) {
  switch (enumValue) {
    case ValidationFindingCode::NOT_SET:
      return {};
    case ValidationFindingCode::TargetInaccessible:
      return "TargetInaccessible";
    case ValidationFindingCode::TargetUnusable:
      return "TargetUnusable";
    case ValidationFindingCode::TargetStateWarning:
      return "TargetStateWarning";
    case ValidationFindingCode::AwsRoleAssumptionFailed:
      return "AwsRoleAssumptionFailed";
    case ValidationFindingCode::WebIdentityTokenFailed:
      return "WebIdentityTokenFailed";
    case ValidationFindingCode::OutboundWebIdentityFederationDisabled:
      return "OutboundWebIdentityFederationDisabled";
    case ValidationFindingCode::ProviderCredentialCreationFailed:
      return "ProviderCredentialCreationFailed";
    case ValidationFindingCode::TenantSummary:
      return "TenantSummary";
    case ValidationFindingCode::SubscriptionAccessible:
      return "SubscriptionAccessible";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ValidationFindingCodeMapper
}  // namespace Model
}  // namespace SSM
}  // namespace Aws
