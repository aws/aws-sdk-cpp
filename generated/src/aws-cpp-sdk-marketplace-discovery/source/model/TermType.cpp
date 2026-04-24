/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/TermType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace TermTypeMapper {

static const int ByolPricingTerm_HASH = HashingUtils::HashString("ByolPricingTerm");
static const int ConfigurableUpfrontPricingTerm_HASH = HashingUtils::HashString("ConfigurableUpfrontPricingTerm");
static const int FixedUpfrontPricingTerm_HASH = HashingUtils::HashString("FixedUpfrontPricingTerm");
static const int UsageBasedPricingTerm_HASH = HashingUtils::HashString("UsageBasedPricingTerm");
static const int FreeTrialPricingTerm_HASH = HashingUtils::HashString("FreeTrialPricingTerm");
static const int LegalTerm_HASH = HashingUtils::HashString("LegalTerm");
static const int PaymentScheduleTerm_HASH = HashingUtils::HashString("PaymentScheduleTerm");
static const int RecurringPaymentTerm_HASH = HashingUtils::HashString("RecurringPaymentTerm");
static const int RenewalTerm_HASH = HashingUtils::HashString("RenewalTerm");
static const int SupportTerm_HASH = HashingUtils::HashString("SupportTerm");
static const int ValidityTerm_HASH = HashingUtils::HashString("ValidityTerm");
static const int VariablePaymentTerm_HASH = HashingUtils::HashString("VariablePaymentTerm");

TermType GetTermTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ByolPricingTerm_HASH) {
    return TermType::ByolPricingTerm;
  } else if (hashCode == ConfigurableUpfrontPricingTerm_HASH) {
    return TermType::ConfigurableUpfrontPricingTerm;
  } else if (hashCode == FixedUpfrontPricingTerm_HASH) {
    return TermType::FixedUpfrontPricingTerm;
  } else if (hashCode == UsageBasedPricingTerm_HASH) {
    return TermType::UsageBasedPricingTerm;
  } else if (hashCode == FreeTrialPricingTerm_HASH) {
    return TermType::FreeTrialPricingTerm;
  } else if (hashCode == LegalTerm_HASH) {
    return TermType::LegalTerm;
  } else if (hashCode == PaymentScheduleTerm_HASH) {
    return TermType::PaymentScheduleTerm;
  } else if (hashCode == RecurringPaymentTerm_HASH) {
    return TermType::RecurringPaymentTerm;
  } else if (hashCode == RenewalTerm_HASH) {
    return TermType::RenewalTerm;
  } else if (hashCode == SupportTerm_HASH) {
    return TermType::SupportTerm;
  } else if (hashCode == ValidityTerm_HASH) {
    return TermType::ValidityTerm;
  } else if (hashCode == VariablePaymentTerm_HASH) {
    return TermType::VariablePaymentTerm;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TermType>(hashCode);
  }

  return TermType::NOT_SET;
}

Aws::String GetNameForTermType(TermType enumValue) {
  switch (enumValue) {
    case TermType::NOT_SET:
      return {};
    case TermType::ByolPricingTerm:
      return "ByolPricingTerm";
    case TermType::ConfigurableUpfrontPricingTerm:
      return "ConfigurableUpfrontPricingTerm";
    case TermType::FixedUpfrontPricingTerm:
      return "FixedUpfrontPricingTerm";
    case TermType::UsageBasedPricingTerm:
      return "UsageBasedPricingTerm";
    case TermType::FreeTrialPricingTerm:
      return "FreeTrialPricingTerm";
    case TermType::LegalTerm:
      return "LegalTerm";
    case TermType::PaymentScheduleTerm:
      return "PaymentScheduleTerm";
    case TermType::RecurringPaymentTerm:
      return "RecurringPaymentTerm";
    case TermType::RenewalTerm:
      return "RenewalTerm";
    case TermType::SupportTerm:
      return "SupportTerm";
    case TermType::ValidityTerm:
      return "ValidityTerm";
    case TermType::VariablePaymentTerm:
      return "VariablePaymentTerm";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TermTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
